//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Actor/GeometryClipMapWorld.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Materials/MaterialParameterCollection.h"
#include "DrawDebugHelpers.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Async/ParallelFor.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/AutoDestroySubsystem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Component/GeoClipmapMeshComponent.h"

/*
static int32 GUseStreamingManagerForCameras = 0;
static FAutoConsoleVariableRef CVarProcLandUseStreamingManagerForCameras(
	TEXT("ProcLand.UseStreamingManagerForCameras"),
	GUseStreamingManagerForCameras,
	TEXT("1: Use Streaming Manager; 0: Use ViewLocationsRenderedLastFrame"));
*/

// Sets default values
AGeometryClipMapWorld::AGeometryClipMapWorld(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));

}

// Called when the game starts or when spawned
void AGeometryClipMapWorld::BeginPlay()
{
	Super::BeginPlay();
}

#if WITH_EDITOR
bool AGeometryClipMapWorld::ShouldTickIfViewportsOnly() const
{
	return true;
}
#endif

const TCHAR* EnumToString(EClipMapInteriorConfig InCurrentState)
{
	switch (InCurrentState)
	{
	case EClipMapInteriorConfig::BotLeft:
		return TEXT("BotLeft");
	case EClipMapInteriorConfig::BotRight:
		return TEXT("BotRight");
	case EClipMapInteriorConfig::TopLeft:
		return TEXT("TopLeft");
	case EClipMapInteriorConfig::TopRight:
		return TEXT("TopRight");
	case EClipMapInteriorConfig::NotVisible:
		return TEXT("NotVisible");
	}
	ensure(false);
	return TEXT("Unknown");
}

void AGeometryClipMapWorld::Setup()
{
	SetN();
	TimeAcu = 0.f;
	DrawCall_Spawnables_count = 0;

	UpdateCameraLocation();

	if (GenerateCollision_last != GenerateCollision || VerticalRangeMeters_last != VerticalRangeMeters || Caching_last != EnableCaching)
		rebuild = true;


	if (rebuild)
	{
		for (int i = Meshes.Num() - 1; i >= 0; i--)
		{
			FClipMapMeshElement& Elem = Meshes[i];
			if (Elem.Mesh)
			{
				Elem.Mesh->ClearAllMeshSections();
				Elem.Mesh->UnregisterComponent();
				Elem.Mesh->DestroyComponent();
				Elem.Mesh = nullptr;				
			}
			if (Elem.I_Mesh)
			{
				Elem.I_Mesh->ClearInstances();
				Elem.I_Mesh->UnregisterComponent();
				Elem.I_Mesh->DestroyComponent();
				Elem.I_Mesh = nullptr;				
			}
			Elem.HeightMap = nullptr;
			Elem.NormalMap = nullptr;
			Elem.LandLayers.Empty();
		}

		Meshes.Empty();

		for (int i = CollisionMesh.Num() - 1; i >= 0; i--)
		{
			FCollisionMeshElement& Elem = CollisionMesh[i];
			if (Elem.Mesh)
			{
				Elem.Mesh->ClearAllMeshSections();
				Elem.Mesh->UnregisterComponent();
				Elem.Mesh->DestroyComponent();
				Elem.Mesh = nullptr;
				Elem.CollisionRT = nullptr;
			}

		}

		CollisionMesh.Empty();
		AvailableCollisionMesh.Empty();
		UsedCollisionMesh.Empty();
		GroundCollisionLayout.Empty();

		for (FSpawnableMesh& Spawnable : Spawnables)
		{
			Spawnable.CleanUp();
		}

		rebuild = false;
		GenerateCollision_last = GenerateCollision;
		VerticalRangeMeters_last = VerticalRangeMeters;
		Caching_last = EnableCaching;
	}

	if(rebuildVegetationOnly)
	{
		for (FSpawnableMesh& Spawnable : Spawnables)
		{
			Spawnable.CleanUp();
		}
		rebuildVegetationOnly=false;
	}
}

// Called every frame
void AGeometryClipMapWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
	if(RTUpdate.IsFenceComplete())
	{
		ProcessCollisionsPending();

		ProcessSpawnablePending();		
	}

	TimeAcu+=DeltaTime;
	
	if(!(TimeAcu>1.0/(FMath::Clamp(UpdateRatePerSecond,1.f,200.f))) || !RTUpdate.IsFenceComplete())
		return;

	Setup();

	if (GenerateCollision )
		UpdateCollisionMesh();

	if(Meshes.Num()==0)
		InitiateWorld();
	

	UpdateClipMap();
	UpdateSpawnables();


	RTUpdate.BeginFence();
}

#if WITH_EDITOR
void AGeometryClipMapWorld::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		FString PropName = PropertyChangedEvent.Property->GetName();

		if(PropName == TEXT("Spawnables"))
		{
			//Spawnables.SpawnablesElemReadToProcess.Empty();
			for (FSpawnableMesh& Spawnable : Spawnables)
			{
				Spawnable.CleanUp();
			}
		}
		else if(PropName == TEXT("N_Select") || PropName == TEXT("Level")|| PropName == TEXT("ClipMapCacheIntraVerticesTexel")|| PropName == TEXT("GridSpacing")|| PropName == TEXT("WorldPresentation")|| PropName == TEXT("LandDataLayers"))
		{
			rebuild=true;
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void AGeometryClipMapWorld::SetN()
{
	int N_values[6] = {511,255,127,63,31,15};

	N = N_values[(uint8)N_Select];
}

bool AGeometryClipMapWorld::CanUpdateSpawnables()
{
	if(DrawCall_Spawnables_count<DrawCallBudget_Spawnables)
	{
		DrawCall_Spawnables_count++;
		return true;
	}
	return false;
}

void AGeometryClipMapWorld::CreateGridMeshWelded(int LOD, int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs,TArray<FVector2D>& UV1s,TArray<FVector2D>& UV2s, float& GridSpacing_,FVector& Offset, uint8 StitchProfil)
{
	bool StitchX0 = (((StitchProfil>>3) & 1) > 0);
	bool StitchXN = (((StitchProfil>>2) & 1) > 0);

	bool StitchY0 = (((StitchProfil >> 1) & 1) > 0);
	bool StitchYN = ((StitchProfil & 1) > 0);
	

	int IDOffset = Vertices.Num();

	FVector Loc = GetActorLocation();

	if (NumX >= 2 && NumY >= 2)
	{
		FVector2D Extent = FVector2D(Offset.X,Offset.Y);

		for (int i = 0; i < NumY; i++)
		{
			for (int j = 0; j < NumX; j++)
			{
				FVector PosVertex = FVector((float)j * GridSpacing_ + Extent.X, (float)i * GridSpacing_ + Extent.Y, 0);

				Vertices.Add(PosVertex + FVector(0.f,0.f,1.f)*VerticalRangeMeters*100.f * ((i+j)%2==0?1.f:-1.f));

				UVs.Add(FVector2D(FMath::Frac(PosVertex.X/400000.f), FMath::Frac(PosVertex.Y/400000.f)));

				UV1s.Add(FVector2D(PosVertex.X/GridSpacing_, PosVertex.Y/GridSpacing_));

				UV2s.Add(FVector2D((i>0 && i<NumY-1)&&(j>0 && j<NumX-1)?1.f:0.f,0.f));
			
				
			}
		}

		for (int i = 0; i < NumY - 1; i++)
		{
			for (int j = 0; j < NumX - 1; j++)
			{
				int idx = j + (i * NumX) + IDOffset;

				if(i>0 && i<NumY - 2 && j>0 && j<NumX - 2 || NumX==2 || NumY==2|| !StitchX0 && !StitchXN && !StitchY0 && !StitchYN)
				{
					Triangles.Add(idx);
					Triangles.Add(idx + NumX);
					Triangles.Add(idx + 1);

					Triangles.Add(idx + 1);
					Triangles.Add(idx + NumX);
					Triangles.Add(idx + NumX + 1);
				}
				else
				{
					if(i==0)
					{
						if (StitchY0)
						{
							if (j % 2 == 0 && j < NumX - 2)
							{
								if (j>0)
								{
									Triangles.Add(idx);
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + 1 + NumX);
								}

								Triangles.Add(idx);
								Triangles.Add(idx + 1 + NumX);
								Triangles.Add(idx + 2);

								if(j+2<NumX - 2)
								{
									Triangles.Add(idx + 2);
									Triangles.Add(idx + 1 + NumX);
									Triangles.Add(idx + 2 + NumX);
								}								

							}
						}
						else
						{
							
							if(j==0 && StitchX0)
							{
								Triangles.Add(idx);
								Triangles.Add(idx + 1 + NumX);
								Triangles.Add(idx + 1);
							}
							else if (j == NumX - 2)
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1);
							}
							else
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1);

								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							
							
						}
					}
					if (i == NumY - 2)
					{
						if (StitchYN)
						{
							if (j % 2 == 0 && j < NumX - 2)
							{
								if (j > 0)
								{
									Triangles.Add(idx);
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + 1);
								}

								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 2 + NumX);
								Triangles.Add(idx + 1);

								if (j + 2 < NumX - 2)
								{
									Triangles.Add(idx + 1);
									Triangles.Add(idx + 2 + NumX);
									Triangles.Add(idx + 2);
								}

							}
						}
						else
						{
							
							if (j == 0)
							{
								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							else if (j == NumX - 2 && StitchXN)
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1 + NumX);
							}
							else
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1);

								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							
						}
					}
					if (j == 0)
					{
						if(StitchX0)
						{
							if (i % 2 == 0 && i < NumY - 2)
							{
								
								Triangles.Add(idx);
								Triangles.Add(idx + 2 * NumX);
								Triangles.Add(idx + NumX + 1);

								if (i > 0)
								{
									Triangles.Add(idx + 1);
									Triangles.Add(idx);
									Triangles.Add(idx + NumX + 1);
								}

								if (i + 2 < NumY - 2)
								{
									Triangles.Add(idx + 1 + NumX);
									Triangles.Add(idx + 2*NumX);
									Triangles.Add(idx + 2*NumX + 1);
								}
								

							}

						}
						else
						{
							
							if (i > 0 && i<NumY - 2)
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1);

								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							else
							{
								if(i==0 && StitchY0)
								{
									Triangles.Add(idx);
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + NumX + 1);
								}
								else
								{
									Triangles.Add(idx);
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + 1);

									Triangles.Add(idx + 1);
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + NumX + 1);
								}

								
							}
							
						}
						
					}
					if (j == NumX - 2)
					{

						if (StitchXN)
						{
							if (i % 2 == 0 && i < NumY - 2)
							{

								Triangles.Add(idx+1);								
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1 + 2 * NumX);

								if (i > 0)
								{
									Triangles.Add(idx + 1);
									Triangles.Add(idx);
									Triangles.Add(idx + NumX);
								}

								if (i + 2 < NumY - 2)
								{
									Triangles.Add(idx + NumX);
									Triangles.Add(idx + 2 * NumX);
									Triangles.Add(idx + 2 * NumX + 1);
								}


							}

						}
						else
						{
							
							if(i>0 && i<NumY - 2)
							{
								Triangles.Add(idx);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + 1);

								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							else if(i<NumY - 2)
							{
								Triangles.Add(idx + 1);
								Triangles.Add(idx + NumX);
								Triangles.Add(idx + NumX + 1);
							}
							else
							{

							
							}
							

							
						}
						
						
						
						
					}


				}


			}
		}
	}
}

void AGeometryClipMapWorld::UpdateCameraLocation()
{
	int GUseStreamingManagerForCameras = 0;

	UWorld* World = GetWorld();

	static TArray<FVector> OldCameras;
	TArray<FVector>* Cameras = nullptr;
	if (GUseStreamingManagerForCameras == 0)
	{
		if (OldCameras.Num() || World->ViewLocationsRenderedLastFrame.Num())
		{
			Cameras = &OldCameras;
			// there is a bug here, which often leaves us with no cameras in the editor
			if (World->ViewLocationsRenderedLastFrame.Num())
			{
				check(IsInGameThread());
				Cameras = &World->ViewLocationsRenderedLastFrame;
				OldCameras = *Cameras;

				CamLocation=World->ViewLocationsRenderedLastFrame[0];
			}
		}
	}
	else
	{
		int32 Num = IStreamingManager::Get().GetNumViews();
		if (Num)
		{
			CamLocation=IStreamingManager::Get().GetViewInformation(0).ViewOrigin;
			/*
			OldCameras.Reset(Num);
			for (int32 Index = 0; Index < Num; Index++)
			{
				auto& ViewInfo = IStreamingManager::Get().GetViewInformation(Index);
				OldCameras.Add(ViewInfo.ViewOrigin);

				if(Index==0)
					CamLocation=ViewInfo.ViewOrigin;
			}
			Cameras = &OldCameras;
			*/
		}
	}
}

float AGeometryClipMapWorld::HeightToClosestCollisionMesh()
{
	UProceduralMeshComponent* ClosestMesh = nullptr;
	float ClosestDistance = -1.f;

	for(int& i : UsedCollisionMesh)
	{
		FVector CompToCam = CollisionMesh[i].Mesh->GetComponentLocation()-CamLocation;
		CompToCam.Z=0.f;

		if(ClosestDistance<0.f || CompToCam.Size()<ClosestDistance)
		{
			ClosestDistance=CompToCam.Size();
			ClosestMesh = CollisionMesh[i].Mesh;
		}

	}

	if(ClosestMesh)
	{
		FProcMeshSection* Section = ClosestMesh->GetProcMeshSection(0);

		return (Section->SectionLocalBox.GetCenter()-CamLocation).Z;
	}

	return -1.f;
}

void AGeometryClipMapWorld::UpdateClipMap()
{

	


	float Height = FMath::Abs((CamLocation - GetActorLocation()).Z);
	float RelevantHeight = 0.f;

	if (GenerateCollision )
	{
		RelevantHeight = HeightToClosestCollisionMesh();


		Height=FMath::Abs(RelevantHeight);
	}

	for(int i=0; i< Meshes.Num(); i++)
	{
		FClipMapMeshElement& Elem = Meshes[i];
		
		if(!Elem.Mesh && !Elem.I_Mesh)
			continue;

		if(Height>Elem.GridSpacing*0.4f*N && Elem.Level>0)
		{
			if(Elem.IsSectionVisible(0))
				Elem.SetSectionVisible(0,false);
			if(Elem.IsSectionVisible(1))
				Elem.SetSectionVisible(1,false);
			if(Elem.IsSectionVisible(2))
				Elem.SetSectionVisible(2,false);
			if(Elem.IsSectionVisible(3))
				Elem.SetSectionVisible(3,false);
			if(Elem.IsSectionVisible(4))
				Elem.SetSectionVisible(4,false);
			if(Elem.IsSectionVisible(5))
				Elem.SetSectionVisible(5,false);

			Elem.Config = EClipMapInteriorConfig::NotVisible;
		}
		else
		{
			if(Height>Elem.GridSpacing*0.4f*N/2.f || Elem.Level==Level-1)
			{
				
				if(!Elem.IsSectionVisible(0))
					Elem.SetSectionVisible(0,true);
				if(Elem.IsSectionVisible(1))
					Elem.SetSectionVisible(1, false);
				if(Elem.IsSectionVisible(2))
					Elem.SetSectionVisible(2, false);
				if(Elem.IsSectionVisible(3))
					Elem.SetSectionVisible(3, false);
				if(Elem.IsSectionVisible(4))
					Elem.SetSectionVisible(4, false);
				if(Elem.IsSectionVisible(5))
					Elem.SetSectionVisible(5, false);

				Elem.Config = EClipMapInteriorConfig::NotVisible;
				
			}
			else
			{
				if(Elem.IsSectionVisible(0))
					Elem.SetSectionVisible(0, false);
				if(!Elem.IsSectionVisible(1))
					Elem.SetSectionVisible(1, true);

			}

				FVector CompToCam = CamLocation - Elem.Location;
				float MaxPlanarOffset = FMath::Max(FMath::Abs(CompToCam.X),FMath::Abs(CompToCam.Y));
			

				if(MaxPlanarOffset>Elem.GridSpacing)
				{

					FVector CompLoc = CamLocation/(2.0*Elem.GridSpacing);

					FVector LocRef = 2.0*Elem.GridSpacing*FVector(FMath::Floor(CompLoc.X),FMath::Floor(CompLoc.Y),0.f)+Elem.Location.Z*FVector(0.f,0.f,1);

					FVector Diff = (CamLocation-LocRef);//Elem.GridSpacing;

					FVector ToLoc = FVector(0.f,0.f,0.f);

					
					{
						ToLoc = -Elem.GridSpacing*FVector(1.f,1.f,0.f);

						if (Diff.X > 0.f && Diff.Y > 0.f)
						{
							ToLoc += 2.0 * Elem.GridSpacing * FVector(1.f, 1.f, 0.f);
						}
						else if (Diff.X > 0.f && Diff.Y <= 0.f)
						{
							ToLoc += 2.0 * Elem.GridSpacing * FVector(1.f, 0.f, 0.f);
						}
						else if (Diff.X <= 0.f && Diff.Y > 0.f)
						{
							ToLoc = 2.0 * Elem.GridSpacing * FVector(0.f, 1.f, 0.f);
						}
					}
					
					
					Elem.Location=LocRef + ToLoc;

					if(Elem.Mesh)
					{
						Elem.Mesh->SetWorldLocation(LocRef + ToLoc, false, nullptr, ETeleportType::TeleportPhysics);
						Elem.Mesh->MarkRenderTransformDirty();
					}
					if(Elem.I_Mesh)
					{
						Elem.I_Mesh->SetWorldLocation(LocRef + ToLoc, false, nullptr, ETeleportType::TeleportPhysics);
						Elem.I_Mesh->MarkRenderTransformDirty();
					}
					

					if(EnableCaching)
					{
						if (Elem.CacheMatDyn)
						{
							Elem.CacheMatDyn->SetVectorParameterValue("RingLocation", Elem.Location);
							Elem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 0.f);
							UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.HeightMap, FLinearColor::Black);
							UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.HeightMap, Elem.CacheMatDyn);
							Elem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 1.f);
							UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.NormalMap, FLinearColor::Black);
							UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.NormalMap, Elem.CacheMatDyn);

							if (Elem.LayerMatDyn && Elem.LandLayers.Num()>0 && Elem.LandLayers[0])
							{
								int CacheRes = Elem.LandLayers[0]->SizeX;
								// required for Position to UV coord
								Elem.LayerMatDyn->SetVectorParameterValue("RingLocation", Elem.Location);
								Elem.LayerMatDyn->SetScalarParameterValue("MeshScale", (N - 1)* Elem.GridSpacing* CacheRes / (CacheRes - 1));
								Elem.LayerMatDyn->SetScalarParameterValue("N", N);
								Elem.LayerMatDyn->SetScalarParameterValue("CacheRes", CacheRes);
								Elem.LayerMatDyn->SetScalarParameterValue("LocalGridScaling", Elem.GridSpacing);

								Elem.LayerMatDyn->SetTextureParameterValue("HeightMap", Elem.HeightMap);
								Elem.LayerMatDyn->SetTextureParameterValue("NormalMap", Elem.NormalMap);
								UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.LandLayers[0], FLinearColor::Black);
								UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.LandLayers[0], Elem.LayerMatDyn);								
							}
						}
						else
						{
							if (CacheMat)
							{
								Elem.CacheMatDyn = UMaterialInstanceDynamic::Create(CacheMat, this);

								// required for Position to UV coord
								Elem.CacheMatDyn->SetVectorParameterValue("RingLocation", Elem.Location);
								Elem.CacheMatDyn->SetScalarParameterValue("N", N);
								Elem.CacheMatDyn->SetScalarParameterValue("LocalGridScaling", Elem.GridSpacing);
								//

								Elem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 0.f);
								UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.HeightMap, FLinearColor::Black);
								UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.HeightMap, Elem.CacheMatDyn);
								Elem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 1.f);
								UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.NormalMap, FLinearColor::Black);
								UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.NormalMap, Elem.CacheMatDyn);

								if (Elem.LandLayers.Num()>0)
								{
									//TODO add an easy way to draw materials into a 2D_RT_Array
									for (FClipMapLayer& layer : LandDataLayers)
									{
										if (layer.MaterialToGenerateLayer)
										{
											//draw landscape layer

											Elem.LayerMatDyn = UMaterialInstanceDynamic::Create(layer.MaterialToGenerateLayer, this);
											// required for Position to UV coord
											Elem.LayerMatDyn->SetVectorParameterValue("RingLocation", Elem.Location);
											Elem.LayerMatDyn->SetScalarParameterValue("N", N);
											Elem.LayerMatDyn->SetScalarParameterValue("LocalGridScaling", Elem.GridSpacing);
											
											Elem.LayerMatDyn->SetTextureParameterValue("HeightMap", Elem.HeightMap);
											Elem.LayerMatDyn->SetTextureParameterValue("NormalMap", Elem.NormalMap);
											UKismetRenderingLibrary::ClearRenderTarget2D(this, Elem.LandLayers[0], FLinearColor::Black);
											UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Elem.LandLayers[0], Elem.LayerMatDyn);
											//
										}

										//Support only a single layer texture for now, so 4 channels
										break;
									}
								}
							}

						}
					}
					

					
					if(Elem.MatDyn)
						Elem.MatDyn->SetVectorParameterValue("RingLocation",Elem.Location);
					else
					{
						UMaterialInstanceDynamic* MatDyn_ = nullptr;
						if(Elem.Mesh)
							MatDyn_ = Cast<UMaterialInstanceDynamic>(Elem.Mesh->GetMaterial(0));
						if (Elem.I_Mesh)
							MatDyn_ = Cast<UMaterialInstanceDynamic>(Elem.I_Mesh->GetMaterial(0));

						if (MatDyn_)
							MatDyn_->SetVectorParameterValue("RingLocation", Elem.Location);
					
					}


					

					if (Elem.Level > 0)
						UpdateParentInnerMesh(Elem.Level, RelativeLocationToParentInnerMeshConfig(Elem.Location - Meshes[Elem.Level - 1].Location));

					

					
				}

				//TODO Remove ?
				if (Elem.Level > 0 && Meshes[Elem.Level - 1].Config!=RelativeLocationToParentInnerMeshConfig(Elem.Location - Meshes[Elem.Level - 1].Location))
					UpdateParentInnerMesh(Elem.Level, RelativeLocationToParentInnerMeshConfig(Elem.Location - Meshes[Elem.Level - 1].Location));

			

			
		}
	}
}

void AGeometryClipMapWorld::UpdateCollisionMesh()
{



		FVector CompLoc = CamLocation / (CollisionMeshWorldDimension);
		int CamX = FMath::Floor(CompLoc.X);
		int CamY = FMath::Floor(CompLoc.Y);


		FVector LocRef = CollisionMeshWorldDimension * FVector(CamX, CamY, 0.f) + GetActorLocation().Z * FVector(0.f, 0.f, 1);

		for(int i = UsedCollisionMesh.Num()-1 ;i>=0 ; i--)
		{
			FCollisionMeshElement& El = CollisionMesh[UsedCollisionMesh[i]];
			FVector ToComp = (El.Mesh->GetComponentLocation()-LocRef)/CollisionMeshWorldDimension;
			if(FMath::Abs(ToComp.X)>CollisionMeshPerQuadrantAroundPlayer || FMath::Abs(ToComp.Y)>CollisionMeshPerQuadrantAroundPlayer)
			{
				
				
				AvailableCollisionMesh.Add(El.ID);
				UsedCollisionMesh.RemoveAt(i);
				
				
				for (auto It = GroundCollisionLayout.CreateConstIterator(); It; ++It)
				{
					if (It->Value.Mesh == El.Mesh)
					{
						GroundCollisionLayout.Remove(It->Key);
						break;
					}
				}
				
			}
				
		}

		

		for(int i =-CollisionMeshPerQuadrantAroundPlayer; i<=CollisionMeshPerQuadrantAroundPlayer; i++)
		{
			for (int j = -CollisionMeshPerQuadrantAroundPlayer; j <= CollisionMeshPerQuadrantAroundPlayer; j++)
			{
				FIntVector LocMeshInt = FIntVector(CamX+i,CamY+j,0);

				FVector MeshLoc = CollisionMeshWorldDimension*FVector(LocMeshInt) + GetActorLocation().Z * FVector(0.f, 0.f, 1);
				

				if(!GroundCollisionLayout.Contains(LocMeshInt))
				{
					FCollisionMeshElement& Mesh = GetACollisionMesh();

					Mesh.Location=MeshLoc;
					Mesh.Mesh->SetWorldLocation(MeshLoc, false, nullptr, ETeleportType::TeleportPhysics);

					UpdateCollisionMeshData(Mesh);					
				
					GroundCollisionLayout.Add(LocMeshInt,Mesh);

				}

			}
		
		}

		

}


double AGeometryClipMapWorld::GetHeightFromGPURead(FColor& ReadLoc)
{

	int Height = 0;
	//int* HeightPtr = &Height;
	uint8* HeightAs8 = reinterpret_cast<uint8*>(&Height);

	HeightAs8[0] = ReadLoc.A;
	HeightAs8[1] = ReadLoc.B;
	HeightAs8[2] = ReadLoc.G;
	HeightAs8[3] = ReadLoc.R;



	return Height;



}
void AGeometryClipMapWorld::ProcessCollisionsPending()
{
	//TODO add physic material support ?

	for(int& ElID : CollisionReadToProcess)
	{
	
		FCollisionMeshElement& Mesh = CollisionMesh[ElID];

		FVector MesgLoc = Mesh.Mesh->GetComponentLocation();
		//SetProcMeshSection
		FProcMeshSection* Section = Mesh.Mesh->GetProcMeshSection(0);

		const int NumOfVertex = Section->ProcVertexBuffer.Num();

		TArray<FVector> Vertices;
		Vertices.SetNum(NumOfVertex);
		TArray<FVector> Normals;
		Normals.SetNum(NumOfVertex);
		TArray<FVector2D> UV;
		UV.SetNum(NumOfVertex);
		TArray<FColor> Colors;
		Colors.SetNum(NumOfVertex);

	
		

		ParallelFor(NumOfVertex, [&](int32 k)
		{
			if(k<NumOfVertex)
			{

				float height = GetHeightFromGPURead(Mesh.HeightData[k]);

				FVector LocationfVertice_WS = Section->ProcVertexBuffer[k].Position * FVector(1.f, 1.f, 0.f) + height * FVector(0.f, 0.f, 1.f);
				

				//Section->ProcVertexBuffer[k].Position = LocationfVertice_WS;

				Vertices[k] = LocationfVertice_WS;
				Normals[k] = FVector(0.f, 0.f, 1.f);
				UV[k] = FVector2D(0.f, 0.f);
				Colors[k] = FColor::Blue;

			}
			
		});

		TArray<FProcMeshTangent> Tangents;
		Tangents.Init(FProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());

		//continue;

		Mesh.Mesh->UpdateMeshSection(0,Vertices,Normals,UV,Colors,Tangents);
		//updatecollisionmesh

		if(HasActorBegunPlay())
			Mesh.Mesh->ClearCollisionConvexMeshes();
		// 		
	}

	CollisionReadToProcess.Empty();

}

double AGeometryClipMapWorld::ComputeWorldHeightAt(FVector WorldLocation)
{
	//Implement your noise here // same one as the one in shader



	return 0.f;


}

void ReadPixelsFromRT(UTextureRenderTarget2D* InRT, FCollisionMeshElement& Mesh)
{
	ENQUEUE_RENDER_COMMAND(ReadGeoClipMapRTCmd)(
		[InRT, &Mesh](FRHICommandListImmediate& RHICmdList)
	{		
		check(IsInRenderingThread());

			Mesh.HeightData.SetNum(InRT->GetRenderTargetResource()->GetSizeX()*InRT->GetRenderTargetResource()->GetSizeX(),false);
			RHICmdList.ReadSurfaceData(
				InRT->GetRenderTargetResource()->GetRenderTargetTexture(),
				FIntRect(0, 0, InRT->GetRenderTargetResource()->GetSizeX(), InRT->GetRenderTargetResource()->GetSizeY()),
				Mesh.HeightData,
				FReadSurfaceDataFlags());
			
		
		
	});
	FlushRenderingCommands();
}

void AGeometryClipMapWorld::UpdateCollisionMeshData(FCollisionMeshElement& Mesh)
{
	// Couple options i see here, either make a readback from a render target applying the same noise than the geoclipmap mesh
	// or implement the same noise in C++ and compute it in parallel/on another thread

	FVector MesgLoc = Mesh.Mesh->GetComponentLocation();

	
	if (CollisionMat_HeightRead)
	{
		//OPTION A : Compute collision form GPU readback

		UMaterialInstanceDynamic* DynCollisionMat = UMaterialInstanceDynamic::Create(CollisionMat_HeightRead, this);
		DynCollisionMat->SetVectorParameterValue("MeshLocation",MesgLoc);
		DynCollisionMat->SetScalarParameterValue("MeshScale",CollisionMeshWorldDimension*CollisionMeshVerticeNumber/(CollisionMeshVerticeNumber-1));
		UKismetRenderingLibrary::ClearRenderTarget2D(this, Mesh.CollisionRT, FLinearColor::Black);
		//Mesh.CollisionRT->UpdateResourceImmediate();

		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Mesh.CollisionRT, DynCollisionMat);

		Mesh.HeightData.Empty();
		Mesh.HeightData.SetNum(CollisionMeshVerticeNumber*CollisionMeshVerticeNumber,false);


		ReadPixelsFromRT(Mesh.CollisionRT,Mesh);

		CollisionReadToProcess.Add(Mesh.ID);
		
		return;
	}
	
	return;

	//OPTION B : Implement in c++ the same noise as the one in Shader graph and evaluate the noise here to generate the collision mesh
	
	
	/*
	FProcMeshSection* Section = Mesh.Mesh->GetProcMeshSection(0);

	int NumOfVertex = Section->ProcVertexBuffer.Num();

	TArray<FVector> Vertices;
	Vertices.SetNum(NumOfVertex);
	TArray<FVector> Normals;
	Normals.SetNum(NumOfVertex);
	TArray<FVector2D> UV;
	UV.SetNum(NumOfVertex);
	TArray<FColor> Colors;
	Colors.SetNum(NumOfVertex);

	
	ParallelFor(NumOfVertex, [&](int32 k)
	{
		FVector LocationfVertice_WS = Section->ProcVertexBuffer[k].Position*FVector(1.f,1.f,0.f) + MesgLoc;

		// ComputeWorldHeightAt is empty / not Implemented

		LocationfVertice_WS.Z = ComputeWorldHeightAt(LocationfVertice_WS);

		Vertices[k] = LocationfVertice_WS - Mesh.Mesh->GetComponentLocation();
		Normals[k] = FVector(0.f,0.f,1.f);
		UV[k] = FVector2D(0.f,0.f);
		Colors[k] = FColor::Blue;
	});

	TArray<FProcMeshTangent> Tangents;
	Tangents.Init(FProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());


	Mesh.Mesh->UpdateMeshSection(0,Vertices,Normals,UV,Colors,Tangents);
	*/

}

FTransform AGeometryClipMapWorld::GetWorldTransformOfSpawnable(const FVector& CompLoc, FColor& LocX,FColor& LocY,FColor& LocZ,FColor& Rot)
{
	int X = 0;
	uint8* XAs8 = reinterpret_cast<uint8*>(&X);

	XAs8[0] = LocX.A;
	XAs8[1] = LocX.B;
	XAs8[2] = LocX.G;
	XAs8[3] = LocX.R;

	int Y = 0;
	uint8* YAs8 = reinterpret_cast<uint8*>(&Y);

	YAs8[0] = LocY.A;
	YAs8[1] = LocY.B;
	YAs8[2] = LocY.G;
	YAs8[3] = LocY.R;

	int Z = 0;
	uint8* ZAs8 = reinterpret_cast<uint8*>(&Z);

	ZAs8[0] = LocZ.A;
	ZAs8[1] = LocZ.B;
	ZAs8[2] = LocZ.G;
	ZAs8[3] = LocZ.R;


	// Rot.R : Yaw
	// Rot.G : Pitch
	// Rot.B : Roll
	// Rot.A : Scale

	float Yaw = ((float)Rot.R)/255.f*360.f;
	float Pitch = ((float)Rot.G)/255.f*360.f;
	float Roll = ((float)Rot.B)/255.f*360.f;

	float Scale = ((float)Rot.A)/255.f*3.f;


	return FTransform(FRotator(Pitch,Yaw,Roll).Quaternion(),FVector(X,Y,Z)-CompLoc,FVector(Scale,Scale,Scale));

}

void AGeometryClipMapWorld::ProcessSpawnablePending()
{
	for (FSpawnableMesh& Spawn : Spawnables)
	{
		//Spawn.SpawnablesElemReadToProcess
		for (int& ElID : Spawn.SpawnablesElemReadToProcess)
		{
			//Spawn.SpawnablesElem
			FSpawnableMeshElement& Mesh = Spawn.SpawnablesElem[ElID];

			FVector MesgLoc = Mesh.Location;
			
			const int NumOfVertex = Spawn.RT_Dim*Spawn.RT_Dim;
			const FVector CompLocation = Spawn.HIM_Mesh[0]->GetComponentLocation();

			TArray<TArray<FTransform>> InstancesT;

			InstancesT.SetNum(Spawn.HIM_Mesh.Num(), false);
			for(int i = 0; i< Spawn.HIM_Mesh.Num();i++)
			{
				TArray<FTransform>& T = InstancesT[i];
				T.SetNum(Spawn.NumInstancePerHIM[i], false);
			}		


			ParallelFor(NumOfVertex, [&](int32 k)
			{
				if (k < NumOfVertex)
				{	
					(InstancesT[Spawn.InstanceIndexToHIMIndex[k]])[Spawn.InstanceIndexToIndexForHIM[k]]=GetWorldTransformOfSpawnable(CompLocation,Mesh.LocationXData[k],Mesh.LocationYData[k],Mesh.LocationZData[k],Mesh.RotationData[k]);				

				}

			});

		

			if(Mesh.InstancesIndexes.Num()>0)
			{
				
				for (int i = 0; i < Spawn.HIM_Mesh.Num(); i++)
				{
					Spawn.HIM_Mesh[i]->BatchUpdateInstancesTransforms(Mesh.InstanceOffset[i]+1,InstancesT[i],false,true);
				}
			}
			else
			{

				Mesh.InstancesIndexes.SetNum(Spawn.NumInstancePerHIM.Num());
				Mesh.InstanceOffset.SetNum(Spawn.NumInstancePerHIM.Num());

				for(int i=0; i<Spawn.HIM_Mesh.Num();i++)
				{
					Mesh.InstanceOffset[i] = Spawn.HIM_Mesh[i]->GetInstanceCount();
					Mesh.InstancesIndexes[i].InstancesIndexes = Spawn.HIM_Mesh[i]->AddInstances(InstancesT[i],true);	
				}
	
			}
			
		}

		Spawn.SpawnablesElemReadToProcess.Empty();
	}
}

EClipMapInteriorConfig AGeometryClipMapWorld::RelativeLocationToParentInnerMeshConfig(FVector RelativeLocation)
{
	if(RelativeLocation.X>0 && RelativeLocation.Y>0)
		return EClipMapInteriorConfig::BotLeft;
	else if (RelativeLocation.X > 0 && RelativeLocation.Y <= 0)
		return EClipMapInteriorConfig::BotRight ;
	else if (RelativeLocation.X <= 0 && RelativeLocation.Y > 0)
		return EClipMapInteriorConfig::TopLeft;
	else
		return EClipMapInteriorConfig::TopRight;

}

void AGeometryClipMapWorld::UpdateParentInnerMesh(int ChildLevel,EClipMapInteriorConfig NewConfig)
{
	
	int ParentIndice = ChildLevel-1;
	if(ParentIndice>=0)
	{
		//if(Meshes[ParentIndice].Config!=NewConfig)
		{
			bool VisibilityFlag[4]={NewConfig==EClipMapInteriorConfig::BotLeft,NewConfig==EClipMapInteriorConfig::TopLeft,NewConfig==EClipMapInteriorConfig::BotRight,NewConfig==EClipMapInteriorConfig::TopRight};
			for(int i=0;i<4;i++)
			{
				Meshes[ParentIndice].SetSectionVisible(2+i,VisibilityFlag[i]);
			}

			Meshes[ParentIndice].Config = NewConfig;
		}
	}
}

FCollisionMeshElement& AGeometryClipMapWorld::GetACollisionMesh()
{
	if(AvailableCollisionMesh.Num()>0)
	{
		FCollisionMeshElement& Elem = CollisionMesh[AvailableCollisionMesh[AvailableCollisionMesh.Num()-1]];
		UsedCollisionMesh.Add(Elem.ID);
		AvailableCollisionMesh.RemoveAt(AvailableCollisionMesh.Num()-1);
		return Elem;
	}

	FCollisionMeshElement NewElem;
	NewElem.ID=CollisionMesh.Num();

	UWorld* World = GetWorld();

	uint32 SizeT = (uint32)CollisionMeshVerticeNumber;

	NewElem.CollisionRT = UKismetRenderingLibrary::CreateRenderTarget2D(World, SizeT, SizeT, RTF_RGBA8,
		FLinearColor(0, 0, 0, 1), false);

	NewElem.CollisionRT->ClearColor = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
	
	NewElem.CollisionRT->UpdateResourceImmediate();



	NewElem.Mesh = NewObject<UProceduralMeshComponent>(this, NAME_None, RF_Transient);

	NewElem.Mesh->bUseAsyncCooking=true;

	NewElem.Mesh->SetupAttachment(RootComponent);
	NewElem.Mesh->RegisterComponent();

	NewElem.Mesh->bUseComplexAsSimpleCollision = true;

	NewElem.Mesh->SetRelativeLocation(FVector(0.f,0.f, 0.f));

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector2D> UV;

	float Spacing = CollisionMeshWorldDimension/(CollisionMeshVerticeNumber-1);

	UKismetProceduralMeshLibrary::CreateGridMeshWelded(CollisionMeshVerticeNumber,CollisionMeshVerticeNumber,Triangles,Vertices,UV,Spacing);

	TArray<FVector> Normals;
	Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
	TArray<FColor> Colors;
	Colors.Init(FColor::Blue, Vertices.Num());
	TArray<FProcMeshTangent> Tangents;
	Tangents.Init(FProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());

	NewElem.Mesh->CreateMeshSection(0,Vertices,Triangles,Normals,UV,Colors,Tangents,true);
	
	if(CollisionMat)
		NewElem.Mesh->SetMaterial(0,CollisionMat);

	UsedCollisionMesh.Add(NewElem.ID);
	CollisionMesh.Add(NewElem);

	return CollisionMesh[CollisionMesh.Num()-1];
}

void AGeometryClipMapWorld::ReleaseCollisionMesh(int ID)
{
	if(ID>=0 && ID< CollisionMesh.Num())
	{		
		AvailableCollisionMesh.Add(ID);
		
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("cant release mesh"));
	}
}

void AGeometryClipMapWorld::InitiateWorld()
{
	if(Meshes.Num()>0)
		return;

	for(int i=0; i<Level;i++)
	{
		int LOD = Level-1-i;
		FClipMapMeshElement NewElem;	

		NewElem.Level=i;
		NewElem.GridSpacing=pow(2.0,-i)*GridSpacing;

		int LocalM = (N+1)/4;

		int CacheRes = (i< Level-LOD_above_doubleCacheResolution  /*Level/2*/?2.0f:1.0f)*ClipMapCacheIntraVerticesTexel*(N-1) +1;
		//int CacheRes = ClipMapCacheIntraVerticesTexel*N;



		if(EnableCaching)
		{
			NewElem.HeightMap = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), CacheRes, CacheRes, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
			NewElem.HeightMap->Filter = TF_Nearest;
			NewElem.HeightMap->AddressX = TA_Clamp;
			NewElem.HeightMap->AddressY = TA_Clamp;
			NewElem.HeightMap->UpdateResourceImmediate();
			NewElem.NormalMap = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), CacheRes, CacheRes, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
			NewElem.NormalMap->AddressX = TA_Clamp;
			NewElem.NormalMap->AddressY = TA_Clamp;
			NewElem.NormalMap->UpdateResourceImmediate();

			if(LandDataLayers.Num()>0 && LandDataLayers[0].MaterialToGenerateLayer)
			{
				NewElem.LandLayers.Empty();
				UTextureRenderTarget2D* Layer = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), CacheRes, CacheRes, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);				
				Layer->AddressX = TA_Clamp;
				Layer->AddressY = TA_Clamp;
				Layer->UpdateResourceImmediate();
				NewElem.LandLayers.Add(Layer);
			}
			
		}

		NewElem.Location = RootComponent->GetComponentLocation() + FVector(-NewElem.GridSpacing, -NewElem.GridSpacing, 0.f);
		
		if(WorldPresentation==EWorldPresentation::InstancedMesh)
		{
			NewElem.I_Mesh = NewObject<UInstancedStaticMeshComponent>(this, NAME_None, RF_Transient);
			NewElem.I_Mesh->SetupAttachment(RootComponent);
			NewElem.I_Mesh->RegisterComponent();

			
			if(VisualRepresentation)
				NewElem.I_Mesh->SetStaticMesh(VisualRepresentation);

			NewElem.I_Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

			NewElem.I_Mesh->NumCustomDataFloats=5;			
			NewElem.I_Mesh->bNeverDistanceCull = true;
			NewElem.I_Mesh->SetRelativeLocation(FVector(-NewElem.GridSpacing, -NewElem.GridSpacing, 0.f));
			NewElem.I_Mesh->CastShadow=true;
			NewElem.I_Mesh->bCastFarShadow=true;
			
		}
		else
		{
			NewElem.Mesh = NewObject<UGeoClipmapMeshComponent>(this, NAME_None, RF_Transient);
			NewElem.Mesh->SetupAttachment(RootComponent);
			NewElem.Mesh->RegisterComponent();

			NewElem.Mesh->bUseComplexAsSimpleCollision = true;
			NewElem.Mesh->bNeverDistanceCull = true;

			NewElem.Mesh->CastShadow = true;
			NewElem.Mesh->bCastFarShadow = true;

			NewElem.Mesh->SetRelativeLocation(FVector(-NewElem.GridSpacing, -NewElem.GridSpacing, 0.f));
		}

		


		
		

		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector2D> UV;
		TArray<FVector2D> UV1;
		TArray<FVector2D> UV2;
		TArray<FVector2D> UV_dummy;
		TArray<FColor> Color_dummy;


		float LocalExtent = ((N - 1) * NewElem.GridSpacing) / 2.f;
		FVector LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f);	

		// StichingProfile
		// 1<<3 X=0
		// 1<<2 X=N-1
		// 1<<1 Y=0
		// 1 Y=N-1
		uint8 StichingProfile = 1<<3|1<<2|1<<1|1;

		if(NewElem.I_Mesh)
			StichingProfile = 0;

		
		CreateGridMeshWelded(LOD,N,N,Triangles,Vertices,UV,UV1,UV2,NewElem.GridSpacing,LocalOffset,StichingProfile);

		if(NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0,-i+Level-1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);		
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f* FVector(1.f,1.f,1.f));
				}

			});

			const TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			
				ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(0.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);

					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
			else
			{
				UE_LOG(LogTemp,Warning,TEXT("Indexes.Num %d UV num %d UV1 num %d"),Indexes.Num(),UV.Num(),UV1.Num());
			}


						
		}

		//stiching



		
		TArray<FVector> Normals;
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		TArray<FGeoCProcMeshTangent> Tangents;
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());

		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(0,Vertices,Triangles,Normals,UV,UV1,UV2,UV_dummy,Color_dummy,Tangents,false);
		


		Vertices.Empty();
		Triangles.Empty();
		UV.Empty();
		UV1.Empty();
		UV2.Empty();
		
		StichingProfile = 1<<3|1<<2|1<<1;
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,N,3,Triangles,Vertices,UV,UV1,UV2,NewElem.GridSpacing,LocalOffset,StichingProfile);		

		
		StichingProfile = 0;
		LocalOffset = FVector(-LocalExtent,-LocalExtent,0.f) + 2.f*NewElem.GridSpacing*FVector(0.f,1.f,0.f)  + (LocalM-1)*NewElem.GridSpacing*FVector(1.f,0.f,0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,(LocalM-1)*2+3,(LocalM-1)-2+1, Triangles, Vertices, UV, UV1,UV2, NewElem.GridSpacing, LocalOffset, StichingProfile);
		LocalOffset = FVector(-LocalExtent,-LocalExtent,0.f) + ((LocalM-1)*3 + 2)*NewElem.GridSpacing*FVector(0.f,1.f,0.f)  + (LocalM-1)*NewElem.GridSpacing*FVector(1.f,0.f,0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,(LocalM-1)*2+3, (LocalM-1)-2+1, Triangles, Vertices, UV, UV1,UV2, NewElem.GridSpacing, LocalOffset, StichingProfile);
		
		
		StichingProfile = 1<<3|1<<2|1;
		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f)+ ((N-1) - 2) *NewElem.GridSpacing*FVector(0.f,1.f,0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,N,3,Triangles,Vertices,UV,UV1,UV2,NewElem.GridSpacing,LocalOffset,StichingProfile);
		
		StichingProfile = 1<<3;
		LocalOffset = FVector(-LocalExtent,-LocalExtent,0.f) + (2) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM, N-4 /*LocalM*2+1+2*/, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		StichingProfile = 1<<2;
		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + (2) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f) + ((LocalM - 1)*3+2) * NewElem.GridSpacing * FVector(1.f, 0.f, 0.f) ;
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM, N-4/*LocalM*2+1 +2*/, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		Normals.Empty();
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		Tangents.Empty();
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());

		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(1, Vertices, Triangles, Normals, UV, UV1, UV2, UV_dummy, Color_dummy, Tangents, false);

		if (NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0, -i + Level - 1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f*FVector(1.f, 1.f, 1.f));
				}

			});

			TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(1.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);
					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
		}


		Vertices.Empty();
		Triangles.Empty();
		UV.Empty();
		UV1.Empty();
		UV2.Empty();
		//inner L Shape have no stiching
		StichingProfile = 0;

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM*2+1, 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f) + (1.0) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,2, LocalM * 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		Normals.Empty();
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		Tangents.Empty();
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());
		
		// botleft
		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(2, Vertices, Triangles, Normals, UV, UV1, UV2, UV_dummy, Color_dummy, Tangents, false); 

		if (NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0, -i + Level - 1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f*FVector(1.f, 1.f, 1.f));
				}

			});

			TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(2.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);
					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
		}

		Vertices.Empty();
		Triangles.Empty();
		UV.Empty();
		UV1.Empty();
		UV2.Empty();

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM * 2 + 1, 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f) + (1.0) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f)+ (LocalM *2 -1) * NewElem.GridSpacing * FVector(1.f, 0.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,2, LocalM * 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		Normals.Empty();
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		Tangents.Empty();
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());
		
		// topleft
		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(3, Vertices, Triangles, Normals, UV, UV1, UV2, UV_dummy, Color_dummy, Tangents, false);

		if (NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0, -i + Level - 1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f*FVector(1.f, 1.f, 1.f));
				}

			});

			TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(3.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);
					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
		}

		Vertices.Empty();
		Triangles.Empty();
		UV.Empty();
		UV1.Empty();
		UV2.Empty();

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,2, LocalM * 2 + 1, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f) + (LocalM*2.0-1.0) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f)+ (1.0) * NewElem.GridSpacing * FVector(1.f, 0.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM * 2, 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		Normals.Empty();
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		Tangents.Empty();
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());
		
		// botright
		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(4, Vertices, Triangles, Normals, UV, UV1, UV2, UV_dummy, Color_dummy, Tangents, false);

		if (NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0, -i + Level - 1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f*FVector(1.f, 1.f, 1.f));
				}

			});

			TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(4.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);
					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
		}

		Vertices.Empty();
		Triangles.Empty();
		UV.Empty();
		UV1.Empty();
		UV2.Empty();

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f)+ (LocalM * 2.0 - 1.0) * NewElem.GridSpacing * FVector(1.f, 0.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,2, LocalM * 2 + 1, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		LocalOffset = FVector(-LocalExtent, -LocalExtent, 0.f) + ((LocalM - 1)) * NewElem.GridSpacing * FVector(1.f, 1.f, 0.f) + (LocalM * 2.0 - 1.0) * NewElem.GridSpacing * FVector(0.f, 1.f, 0.f);
		if (NewElem.I_Mesh)
			StichingProfile = 0;
		CreateGridMeshWelded(LOD,LocalM * 2, 2, Triangles, Vertices, UV,UV1,UV2, NewElem.GridSpacing, LocalOffset,StichingProfile);

		Normals.Empty();
		Normals.Init(FVector(0.f, 0.f, 1.f), Vertices.Num());
		Tangents.Empty();
		Tangents.Init(FGeoCProcMeshTangent(FVector(0.f, 0.f, 1.f), false), Vertices.Num());
		
		// topright
		if(NewElem.Mesh)
		NewElem.Mesh->CreateMeshSection(5, Vertices, Triangles, Normals, UV, UV1, UV2, UV_dummy, Color_dummy, Tangents, false);


		if (NewElem.I_Mesh)
		{
			int NumI = Vertices.Num();
			TArray<FTransform> InstanceT;
			InstanceT.SetNum(NumI);
			float ScaleLocal = pow(2.0, -i + Level - 1);

			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					FTransform& T = InstanceT[k];
					T.SetLocation(Vertices[k]);
					T.SetRotation(FQuat::Identity);
					T.SetScale3D(NewElem.GridSpacing/100.f*FVector(1.f, 1.f, 1.f));
				}

			});

			TArray<int32> Indexes = NewElem.I_Mesh->AddInstances(InstanceT,true);

			if(!(Indexes.Num()!=NumI || UV.Num()!=NumI|| UV1.Num()!=NumI))
			ParallelFor(NumI, [&](int32 k)
			{
				if (k < NumI)
				{
					TArray<float> CustomData;
					//Section Indentifier
					CustomData.Add(5.f);
					CustomData.Add(UV[k].X);
					CustomData.Add(UV[k].Y);
					CustomData.Add(UV1[k].X);
					CustomData.Add(UV1[k].Y);
					NewElem.I_Mesh->SetCustomData(Indexes[k], CustomData);
				}

			});
		}


		LocalOffset = FVector(-LocalExtent,-LocalExtent,0.f);

		if(NewElem.SectionVisibility.Num()!=6)
		{
			NewElem.SectionVisibility.SetNum(6);
			for(bool& el : NewElem.SectionVisibility)
				el = true;
		}
			
		
		if (i == Level - 1)
			NewElem.SetSectionVisible(1, false);
		else
			NewElem.SetSectionVisible(0, false);

		// botleft
		NewElem.SetSectionVisible(2, true);
		// topleft
		NewElem.SetSectionVisible(3, false);
		// botright
		NewElem.SetSectionVisible(4, false);
		// topright
		NewElem.SetSectionVisible(5, false);
		

		NewElem.Config= EClipMapInteriorConfig::BotLeft;

		if (EnableCaching && CacheMat)
		{
			NewElem.CacheMatDyn = UMaterialInstanceDynamic::Create(CacheMat, this);
			NewElem.CacheMatDyn->SetVectorParameterValue("RingLocation", NewElem.Location);
			NewElem.CacheMatDyn->SetScalarParameterValue("MeshScale", (N - 1) * NewElem.GridSpacing * CacheRes / (CacheRes - 1));
			NewElem.CacheMatDyn->SetScalarParameterValue("N", N);
			NewElem.CacheMatDyn->SetScalarParameterValue("CacheRes", CacheRes);
			NewElem.CacheMatDyn->SetScalarParameterValue("LocalGridScaling", NewElem.GridSpacing);
			NewElem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 0.f);
			UKismetRenderingLibrary::ClearRenderTarget2D(this, NewElem.HeightMap, FLinearColor::Black);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, NewElem.HeightMap, NewElem.CacheMatDyn);
			NewElem.CacheMatDyn->SetScalarParameterValue("NormalMapSelect", 1.f);
			UKismetRenderingLibrary::ClearRenderTarget2D(this, NewElem.NormalMap, FLinearColor::Black);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, NewElem.NormalMap, NewElem.CacheMatDyn);

			if(LandDataLayers.Num()>0 && LandDataLayers[0].MaterialToGenerateLayer)
			{
				//draw landscape layer

				NewElem.LayerMatDyn = UMaterialInstanceDynamic::Create(LandDataLayers[0].MaterialToGenerateLayer, this);
				// required for Position to UV coord
				NewElem.LayerMatDyn->SetVectorParameterValue("RingLocation", NewElem.Location);
				NewElem.LayerMatDyn->SetScalarParameterValue("MeshScale", (N - 1) * NewElem.GridSpacing * CacheRes / (CacheRes - 1));
				NewElem.LayerMatDyn->SetScalarParameterValue("N", N);
				NewElem.LayerMatDyn->SetScalarParameterValue("CacheRes", CacheRes);
				NewElem.LayerMatDyn->SetScalarParameterValue("LocalGridScaling", NewElem.GridSpacing);

				NewElem.LayerMatDyn->SetTextureParameterValue("HeightMap", NewElem.HeightMap);
				NewElem.LayerMatDyn->SetTextureParameterValue("NormalMap", NewElem.NormalMap);
				UKismetRenderingLibrary::ClearRenderTarget2D(this, NewElem.LandLayers[0], FLinearColor::Black);
				UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, NewElem.LandLayers[0], NewElem.LayerMatDyn);
				//				

			}
			
		}

		if( Mat)
		{
			if(NewElem.Mesh)
			{
				if (EnableCaching && MatwCaching)
					NewElem.MatDyn = UMaterialInstanceDynamic::Create(MatwCaching, this);
				else
					NewElem.MatDyn = UMaterialInstanceDynamic::Create(Mat, this);
			}
			else
			{
				if(Material_InstancedMeshRepresentation)
					NewElem.MatDyn = UMaterialInstanceDynamic::Create(Material_InstancedMeshRepresentation, this);
					
			}
			

			
		}

		if(NewElem.MatDyn)
		{
			if(NewElem.Mesh)
			{
				NewElem.Mesh->SetMaterial(0, NewElem.MatDyn);
				NewElem.Mesh->SetMaterial(1, NewElem.MatDyn);
				NewElem.Mesh->SetMaterial(2, NewElem.MatDyn);
				NewElem.Mesh->SetMaterial(3, NewElem.MatDyn);
				NewElem.Mesh->SetMaterial(4, NewElem.MatDyn);
				NewElem.Mesh->SetMaterial(5, NewElem.MatDyn);
			}
			if(NewElem.I_Mesh)
				NewElem.I_Mesh->SetMaterial(0, NewElem.MatDyn);
			

			NewElem.MatDyn->SetVectorParameterValue("RingLocation", NewElem.Location);
			NewElem.MatDyn->SetScalarParameterValue("MeshScale", (N - 1) * NewElem.GridSpacing * CacheRes / (CacheRes - 1));
			NewElem.MatDyn->SetScalarParameterValue("N", N);
			NewElem.MatDyn->SetScalarParameterValue("LocalGridScaling", NewElem.GridSpacing);
			NewElem.MatDyn->SetScalarParameterValue("CacheRes", CacheRes);

			NewElem.MatDyn->SetTextureParameterValue("HeightMap", NewElem.HeightMap);
			NewElem.MatDyn->SetTextureParameterValue("NormalMap", NewElem.NormalMap);

			if(NewElem.LandLayers.Num()>0)
				NewElem.MatDyn->SetTextureParameterValue("LayerDataMap", NewElem.LandLayers[0]);
		}

		
		

		Meshes.Add(NewElem);

	}
}


void AGeometryClipMapWorld::UpdateSpawnables()
{
	bool SkipToLastStop = false;
	if(!Spawnable_Stopped)
	{
		for (FSpawnableMesh& Spawn : Spawnables)
		{
			if(Spawn.Mesh.Num()>0 &&  Spawn.Mesh[0] == Spawnable_Stopped)
			{
				SkipToLastStop = true;
				break;
			}
		}
		//Spawnable_Stopped couldn't be found, set back to nullptr
		if(!SkipToLastStop)
			Spawnable_Stopped=nullptr;
	}
	for (FSpawnableMesh& Spawn : Spawnables)
	{
		if (Spawn.Mesh.Num()==0 || Spawn.Mesh.Num()>0 && !Spawn.Mesh[0])
			continue;
		if (!Spawn.Owner)
			Spawn.Initiate(this);

		if(SkipToLastStop && Spawn.Mesh[0]!=Spawnable_Stopped)
			continue;
		else if(SkipToLastStop && Spawn.Mesh[0]==Spawnable_Stopped)
		{
			Spawnable_Stopped=nullptr;
			SkipToLastStop=false;
		}
			
		
		
		FVector CompLoc = CamLocation / (Spawn.RegionWorldDimension);
		int CamX = FMath::Floor(CompLoc.X);
		int CamY = FMath::Floor(CompLoc.Y);


		FVector LocRef = Spawn.RegionWorldDimension * FVector(CamX, CamY, 0.f) + GetActorLocation().Z * FVector(0.f, 0.f, 1);

		
		for (int i = Spawn.UsedSpawnablesElem.Num() - 1; i >= 0; i--)
		{
			//Spawn.SpawnablesElem
			FSpawnableMeshElement& El = Spawn.SpawnablesElem[Spawn.UsedSpawnablesElem[i]];
			FVector ToComp = (El.Location - LocRef) / Spawn.RegionWorldDimension;

			if (FMath::Abs(ToComp.X) > 3.1f || FMath::Abs(ToComp.Y) > 3.1f)
			{		

				Spawn.AvailableSpawnablesElem.Add(El.ID);	
				Spawn.UsedSpawnablesElem.RemoveAt(i);

				for (auto It = Spawn.SpawnablesLayout.CreateConstIterator(); It; ++It)
				{
					
					if (It->Value == El.ID)
					{
						Spawn.SpawnablesLayout.Remove(It->Key);
						break;
					}
				}

			}

		}

		bool InterruptUpdate = false;

		if (Spawn.IndexOfClipMapForCompute > 0 && Spawn.IndexOfClipMapForCompute < GetMeshNum())
		{
			FClipMapMeshElement& Elem = GetMesh(Spawn.IndexOfClipMapForCompute);

			if (!Elem.IsSectionVisible(0) && !Elem.IsSectionVisible(1))
				continue;
		}

		for (int i = -3; i <= 3; i++)
		{
			if(InterruptUpdate)
				break;

			for (int j = -3; j <= 3; j++)
			{

				

				FIntVector LocMeshInt = FIntVector(CamX + i, CamY + j, 0);

				FVector MeshLoc = Spawn.RegionWorldDimension * FVector(LocMeshInt) + GetActorLocation().Z * FVector(0.f, 0.f, 1);


				if (!Spawn.SpawnablesLayout.Contains(LocMeshInt))
				{
					if(CanUpdateSpawnables())
					{
						FSpawnableMeshElement& Mesh = Spawn.GetASpawnableElem();

						Mesh.Location = MeshLoc;

						Spawn.UpdateSpawnableData(Mesh);

						Spawn.SpawnablesLayout.Add(LocMeshInt, Mesh.ID);
					}
					else
					{
						InterruptUpdate=true;
						break;

					}
					

				}

			}

		}

		if(InterruptUpdate)
		{
			Spawnable_Stopped = Spawn.Mesh[0];
			break;
		}
	}
}


FSpawnableMeshElement& FSpawnableMesh::GetASpawnableElem()
{

		

	if (AvailableSpawnablesElem.Num() > 0)
	{
		FSpawnableMeshElement& Elem = SpawnablesElem[AvailableSpawnablesElem[AvailableSpawnablesElem.Num() - 1]];
		UsedSpawnablesElem.Add(Elem.ID);
		AvailableSpawnablesElem.RemoveAt(AvailableSpawnablesElem.Num() - 1);
		return Elem;
	}

	if(Mesh.Num()==0 || !Mesh[0])
	{
		FSpawnableMeshElement NewElem;
		SpawnablesElem.Add(NewElem);
		return SpawnablesElem[SpawnablesElem.Num() - 1];
	}
		

	if (!Owner)
	{
		UE_LOG(LogTemp,Warning,TEXT("ERROR : FSpawnableMesh has no owner"));
		FSpawnableMeshElement NewElem;
		SpawnablesElem.Add(NewElem);
		return SpawnablesElem[SpawnablesElem.Num() - 1];	
	}


	FSpawnableMeshElement NewElem;
	NewElem.ID = SpawnablesElem.Num();

	if(NumberOfInstanceToComputePerRegion<HIM_Mesh.Num()*2)
		NumberOfInstanceToComputePerRegion=HIM_Mesh.Num()*2;

	RT_Dim = FMath::Floor(FMath::Sqrt((float)NumberOfInstanceToComputePerRegion)) + (FMath::Frac(FMath::Sqrt((float)NumberOfInstanceToComputePerRegion))>0.f?1:0);
	//int Dim = FMath::Sqrt(NumberOfInstanceToComputePerRegion) + (FMath::Frac(FMath::Sqrt((float)NumberOfInstanceToComputePerRegion))>0.f?1:0);

	
	UWorld* World = Owner->GetWorld();

	uint32 SizeT = (uint32)RT_Dim;

	NewElem.LocationX = UKismetRenderingLibrary::CreateRenderTarget2D(World, SizeT, SizeT, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
	NewElem.LocationX->UpdateResourceImmediate();
	NewElem.LocationY = UKismetRenderingLibrary::CreateRenderTarget2D(World, SizeT, SizeT, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
	NewElem.LocationY->UpdateResourceImmediate();
	NewElem.LocationZ = UKismetRenderingLibrary::CreateRenderTarget2D(World, SizeT, SizeT, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
	NewElem.LocationZ->UpdateResourceImmediate();

	NewElem.Rotation = UKismetRenderingLibrary::CreateRenderTarget2D(World, SizeT, SizeT, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
	NewElem.Rotation->UpdateResourceImmediate();


	UsedSpawnablesElem.Add(NewElem.ID);
	SpawnablesElem.Add(NewElem);

	return SpawnablesElem[SpawnablesElem.Num() - 1];
	
}

void FSpawnableMesh::ReleaseSpawnableElem(int ID)
{
	AvailableSpawnablesElem.Add(ID);

}

void ReadPixelsFromRT_Spawn(FSpawnableMeshElement& Mesh)
{
	ENQUEUE_RENDER_COMMAND(ReadGeoClipMapRTCmd)(
		[&Mesh](FRHICommandListImmediate& RHICmdList)
	{
		check(IsInRenderingThread());

		Mesh.LocationXData.SetNum(Mesh.LocationX->GetRenderTargetResource()->GetSizeX() * Mesh.LocationX->GetRenderTargetResource()->GetSizeX(), false);
		RHICmdList.ReadSurfaceData(
			Mesh.LocationX->GetRenderTargetResource()->GetRenderTargetTexture(),
			FIntRect(0, 0, Mesh.LocationX->GetRenderTargetResource()->GetSizeX(), Mesh.LocationX->GetRenderTargetResource()->GetSizeY()),
			Mesh.LocationXData,
			FReadSurfaceDataFlags());

		Mesh.LocationYData.SetNum(Mesh.LocationY->GetRenderTargetResource()->GetSizeX() * Mesh.LocationY->GetRenderTargetResource()->GetSizeX(), false);
		RHICmdList.ReadSurfaceData(
			Mesh.LocationY->GetRenderTargetResource()->GetRenderTargetTexture(),
			FIntRect(0, 0, Mesh.LocationY->GetRenderTargetResource()->GetSizeX(), Mesh.LocationY->GetRenderTargetResource()->GetSizeY()),
			Mesh.LocationYData,
			FReadSurfaceDataFlags());

		Mesh.LocationZData.SetNum(Mesh.LocationZ->GetRenderTargetResource()->GetSizeX() * Mesh.LocationZ->GetRenderTargetResource()->GetSizeX(), false);
		RHICmdList.ReadSurfaceData(
			Mesh.LocationZ->GetRenderTargetResource()->GetRenderTargetTexture(),
			FIntRect(0, 0, Mesh.LocationZ->GetRenderTargetResource()->GetSizeX(), Mesh.LocationZ->GetRenderTargetResource()->GetSizeY()),
			Mesh.LocationZData,
			FReadSurfaceDataFlags());

		Mesh.RotationData.SetNum(Mesh.Rotation->GetRenderTargetResource()->GetSizeX() * Mesh.Rotation->GetRenderTargetResource()->GetSizeX(), false);
		RHICmdList.ReadSurfaceData(
			Mesh.Rotation->GetRenderTargetResource()->GetRenderTargetTexture(),
			FIntRect(0, 0, Mesh.Rotation->GetRenderTargetResource()->GetSizeX(), Mesh.Rotation->GetRenderTargetResource()->GetSizeY()),
			Mesh.RotationData,
			FReadSurfaceDataFlags());
	});
	FlushRenderingCommands();
}

void FSpawnableMesh::UpdateSpawnableData(FSpawnableMeshElement& MeshElem)
{
	FVector MesgLoc = MeshElem.Location;


	if (Owner && Owner->SpawnablesMat)
	{

		//OPTION A : Compute collision form GPU readback

		UMaterialInstanceDynamic* DynSpawnMat = MeshElem.ComputeSpawnTransformDyn ? MeshElem.ComputeSpawnTransformDyn : (UMaterialInstanceDynamic::Create(CustomSpawnablesMat?CustomSpawnablesMat:Owner->SpawnablesMat, Owner));
		
		 

		//Prevent recompute by reading HeightMap and NormalMap
		//would need a different material to switch
		if(IndexOfClipMapForCompute>0 && IndexOfClipMapForCompute<Owner->GetMeshNum())
		{		
			FClipMapMeshElement& Elem = Owner->GetMesh(IndexOfClipMapForCompute);

			if (!MeshElem.ComputeSpawnTransformDyn)
			{
				MeshElem.ComputeSpawnTransformDyn = DynSpawnMat;
				DynSpawnMat->SetScalarParameterValue("N", Owner->N);
				DynSpawnMat->SetScalarParameterValue("LocalGridScaling", Elem.GridSpacing);
				DynSpawnMat->SetTextureParameterValue("HeightMap", Elem.HeightMap);
				DynSpawnMat->SetTextureParameterValue("NormalMap", Elem.NormalMap);
				if (Elem.LandLayers.Num() > 0)
					DynSpawnMat->SetTextureParameterValue("LayerDataMap", Elem.LandLayers[0]);
			}

			if(Elem.IsSectionVisible(0)||Elem.IsSectionVisible(1))
			{
				DynSpawnMat->SetScalarParameterValue("ComputeToggle", 0.f);
				DynSpawnMat->SetVectorParameterValue("RingLocation", Elem.Location);
				

				
				
			}
			else
				return;

		}
		else
		{
			DynSpawnMat->SetScalarParameterValue("ComputeToggle", 1.f);
		}

		//

		DynSpawnMat->SetVectorParameterValue("MeshLocation", MesgLoc);
		DynSpawnMat->SetScalarParameterValue("MeshScale", RegionWorldDimension * RT_Dim / (RT_Dim - 1));

		DynSpawnMat->SetScalarParameterValue("RT_Dim", RT_Dim);
		DynSpawnMat->SetScalarParameterValue("OutputRotationScale", 0.f);

		DynSpawnMat->SetScalarParameterValue("AlignMaxAngle", AlignMaxAngle);
		DynSpawnMat->SetScalarParameterValue("MinSpawnHeight", AltitudeRange.Min);
		DynSpawnMat->SetScalarParameterValue("MaxSpawnHeight", AltitudeRange.Max);

		DynSpawnMat->SetScalarParameterValue("MinScale", ScaleRange.Min);
		DynSpawnMat->SetScalarParameterValue("MaxScale", ScaleRange.Max);

		DynSpawnMat->SetScalarParameterValue("MinGroundSlope", GroundSlopeAngle.Min);
		DynSpawnMat->SetScalarParameterValue("MaxGroundSlope", GroundSlopeAngle.Max);
		
		
		// 0.f = X
		// 2.f = Y
		// 4.f = Z
		// 6.f = Rotation
		float IndexOutput = 0.f;
		DynSpawnMat->SetScalarParameterValue("OutputIndex", IndexOutput);
		UKismetRenderingLibrary::ClearRenderTarget2D(Owner, MeshElem.LocationX, FLinearColor::Black);	
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Owner, MeshElem.LocationX, DynSpawnMat);
		
		MeshElem.LocationXData.Empty();
		MeshElem.LocationXData.SetNum(RT_Dim * RT_Dim, false);

		IndexOutput = 2.f;
		DynSpawnMat->SetScalarParameterValue("OutputIndex", IndexOutput);
		UKismetRenderingLibrary::ClearRenderTarget2D(Owner, MeshElem.LocationY, FLinearColor::Black);
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Owner, MeshElem.LocationY, DynSpawnMat);
		
		MeshElem.LocationYData.Empty();
		MeshElem.LocationYData.SetNum(RT_Dim * RT_Dim, false);

		IndexOutput = 4.f;
		DynSpawnMat->SetScalarParameterValue("OutputIndex", IndexOutput);
		UKismetRenderingLibrary::ClearRenderTarget2D(Owner, MeshElem.LocationZ, FLinearColor::Black);
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Owner, MeshElem.LocationZ, DynSpawnMat);
		
		MeshElem.LocationZData.Empty();
		MeshElem.LocationZData.SetNum(RT_Dim * RT_Dim, false);

		IndexOutput = 6.f;
		DynSpawnMat->SetScalarParameterValue("OutputIndex", IndexOutput);
		DynSpawnMat->SetScalarParameterValue("OutputRotationScale", 1.f);
		UKismetRenderingLibrary::ClearRenderTarget2D(Owner, MeshElem.Rotation, FLinearColor::Black);
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Owner, MeshElem.Rotation, DynSpawnMat);
		
		MeshElem.RotationData.Empty();
		MeshElem.RotationData.SetNum(RT_Dim * RT_Dim, false);
		
		ReadPixelsFromRT_Spawn(MeshElem);
		SpawnablesElemReadToProcess.Add(MeshElem.ID);
		

		return;
	}

	return;
}

void FSpawnableMesh::Initiate(AGeometryClipMapWorld* Owner_)
{
	CleanUp();	

	if(Owner_ && Mesh.Num()>0 && Mesh[0] && HIM_Mesh.Num()==0)
	{
		Owner=Owner_;



		/// Computation Optimization
		/// instead of evaluating the noise and generating the precise normal, we can use the already computed heightmap/NormalMap
		/// it adds a dependency to those maps/this ring but makes for far better performances
		
		for (int i = Owner->GetMeshNum()-1; i >=0 ; i--)
		{
			FClipMapMeshElement& Elem = Owner->GetMesh(i);
			
			if(Elem.GridSpacing*(Owner->N-1)/2.f>RegionWorldDimension*(3.5f + 0.1f/*margin*/))
			{				
				IndexOfClipMapForCompute=i;
				break;
			}
		}
		
		
		///


		int PoolItemCount=0;
		NumInstancePerHIM.Empty();
		for (UStaticMesh* Sm : Mesh)
		{
			if (Sm)
			{
				PoolItemCount++;
				NumInstancePerHIM.Add(0);
			}
							
		}		

		int RT_Dim_early = FMath::Floor(FMath::Sqrt((float)NumberOfInstanceToComputePerRegion)) + (FMath::Frac(FMath::Sqrt((float)NumberOfInstanceToComputePerRegion))>0.f?1:0);
		const int NumOfVertex = RT_Dim_early*RT_Dim_early;

		for(int i=0; i<NumOfVertex;i++)
		{
			InstanceIndexToHIMIndex.Add(i%PoolItemCount);
			InstanceIndexToIndexForHIM.Add(NumInstancePerHIM[i%PoolItemCount]);
			NumInstancePerHIM[i%PoolItemCount] = NumInstancePerHIM[i%PoolItemCount] + 1;
			
		}

		int PoolTargetIncrement=0;

		for(UStaticMesh* Sm : Mesh)
		{
			if(Sm)
			{
				UHierarchicalInstancedStaticMeshComponent* NHISM = NewObject<UHierarchicalInstancedStaticMeshComponent>(Owner, NAME_None, RF_Transient);
				NHISM->SetupAttachment(Owner->GetRootComponent());
				NHISM->RegisterComponent();
				NHISM->SetStaticMesh(Sm);
				NHISM->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
				NHISM->SetCollisionEnabled(CollisionEnabled ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
				NHISM->SetCastShadow(CastShadows);
				HIM_Mesh.Add(NHISM);
			}
		}

	}
}

void FSpawnableMesh::CleanUp()
{
	
	for(FSpawnableMeshElement& El:SpawnablesElem)
	{
		El.LocationX=nullptr;
		El.LocationY=nullptr;
		El.LocationZ=nullptr;
		El.Rotation=nullptr;
	}

	SpawnablesElem.Empty();
	AvailableSpawnablesElem.Empty();
	UsedSpawnablesElem.Empty();	
	SpawnablesElemReadToProcess.Empty();

	SpawnablesLayout.Empty();

	for (UHierarchicalInstancedStaticMeshComponent* HISM : HIM_Mesh)
	{
		if(HISM && Owner && Owner->GetWorld())
		{
			HISM->ClearInstances();
			HISM->UnregisterComponent();
			HISM->DestroyComponent();
			HISM = nullptr;
		}		
	}
	HIM_Mesh.Empty();
	InstanceIndexToHIMIndex.Empty();
	NumInstancePerHIM.Empty();
	InstanceIndexToIndexForHIM.Empty();

	

	IndexOfClipMapForCompute=-1;


	Owner = nullptr;
	
}

FSpawnableMesh::~FSpawnableMesh()
{
	CleanUp();
}

bool FClipMapMeshElement::IsSectionVisible(int SectionID)
{
	if(SectionID>=0 && SectionID<SectionVisibility.Num())
	{
		return SectionVisibility[SectionID];
	}
	return false;
}

void FClipMapMeshElement::SetSectionVisible(int SectionID,bool NewVisibility)
{

	if (SectionID >= 0 && SectionID < SectionVisibility.Num())
	{
		SectionVisibility[SectionID]=NewVisibility;

		if(Mesh)
			Mesh->SetMeshSectionVisible(SectionID,NewVisibility);
		
		if(I_Mesh)
		{
			if(!SectionVisibility[0] && !SectionVisibility[1] && I_Mesh->IsVisible())
			{
				I_Mesh->SetVisibility(false);
			}
			if ((SectionVisibility[0] || SectionVisibility[1]) && !I_Mesh->IsVisible())
			{
				I_Mesh->SetVisibility(true);
			}

			if(MatDyn && NewVisibility)
			{
				if(SectionID<=1)
					MatDyn->SetScalarParameterValue("Ring_Main_Profile",SectionID);
				else
					MatDyn->SetScalarParameterValue("Ring_Second_Profile",SectionID);

			}
		}
		
		
	}
	
}
