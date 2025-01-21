// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralLandscape/Public/Component/GeoClipmapMeshComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoClipmapMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_UGeoClipmapMeshComponent();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshSection();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshTangent();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshVertex();
UPackage* Z_Construct_UPackage__Script_ProceduralLandscape();
// End Cross Module References

// Begin ScriptStruct FGeoCProcMeshTangent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent;
class UScriptStruct* FGeoCProcMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoCProcMeshTangent, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("GeoCProcMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FGeoCProcMeshTangent>()
{
	return FGeoCProcMeshTangent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
	static void NewProp_bFlipTangentY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoCProcMeshTangent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentX_MetaData), NewProp_TangentX_MetaData) };
void Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
{
	((FGeoCProcMeshTangent*)Obj)->bFlipTangentY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeoCProcMeshTangent), &Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipTangentY_MetaData), NewProp_bFlipTangentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_TangentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewProp_bFlipTangentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"GeoCProcMeshTangent",
	Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::PropPointers),
	sizeof(FGeoCProcMeshTangent),
	alignof(FGeoCProcMeshTangent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshTangent()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent.InnerSingleton;
}
// End ScriptStruct FGeoCProcMeshTangent

// Begin ScriptStruct FGeoCProcMeshVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex;
class UScriptStruct* FGeoCProcMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoCProcMeshVertex, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("GeoCProcMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FGeoCProcMeshVertex>()
{
	return FGeoCProcMeshVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex position */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex normal */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex tangent */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex color */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoCProcMeshVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, Tangent), Z_Construct_UScriptStruct_FGeoCProcMeshTangent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 779946998
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewProp_UV3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"GeoCProcMeshVertex",
	Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::PropPointers),
	sizeof(FGeoCProcMeshVertex),
	alignof(FGeoCProcMeshVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshVertex()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex.InnerSingleton;
}
// End ScriptStruct FGeoCProcMeshVertex

// Begin ScriptStruct FGeoCProcMeshSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeoCProcMeshSection;
class UScriptStruct* FGeoCProcMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoCProcMeshSection, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("GeoCProcMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FGeoCProcMeshSection>()
{
	return FGeoCProcMeshSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One section of the procedural mesh. Each material has its own section. */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "One section of the procedural mesh. Each material has its own section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcVertexBuffer_MetaData[] = {
		{ "Comment", "/** Vertex buffer for this section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Vertex buffer for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[] = {
		{ "Comment", "/** Index buffer for this section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Index buffer for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[] = {
		{ "Comment", "/** Local bounding box of section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Local bounding box of section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Should we build collision data for triangles in this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[] = {
		{ "Comment", "/** Should we display this section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Should we display this section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcVertexBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcVertexBuffer;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcIndexBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static void NewProp_bSectionVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoCProcMeshSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshVertex, METADATA_PARAMS(0, nullptr) }; // 3944838507
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcVertexBuffer = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshSection, ProcVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcVertexBuffer_MetaData), NewProp_ProcVertexBuffer_MetaData) }; // 3944838507
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcIndexBuffer_MetaData), NewProp_ProcIndexBuffer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoCProcMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionLocalBox_MetaData), NewProp_SectionLocalBox_MetaData) };
void Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((FGeoCProcMeshSection*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeoCProcMeshSection), &Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
void Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
{
	((FGeoCProcMeshSection*)Obj)->bSectionVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeoCProcMeshSection), &Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSectionVisible_MetaData), NewProp_bSectionVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcVertexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_ProcIndexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_SectionLocalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewProp_bSectionVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"GeoCProcMeshSection",
	Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::PropPointers),
	sizeof(FGeoCProcMeshSection),
	alignof(FGeoCProcMeshSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeoCProcMeshSection()
{
	if (!Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeoCProcMeshSection.InnerSingleton;
}
// End ScriptStruct FGeoCProcMeshSection

// Begin Class UGeoClipmapMeshComponent Function AddCollisionConvexMesh
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics
{
	struct GeoClipmapMeshComponent_eventAddCollisionConvexMesh_Parms
	{
		TArray<FVector> ConvexVerts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add simple collision convex to this component */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Add simple collision convex to this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner = { "ConvexVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts = { "ConvexVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "AddCollisionConvexMesh", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::GeoClipmapMeshComponent_eventAddCollisionConvexMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::GeoClipmapMeshComponent_eventAddCollisionConvexMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execAddCollisionConvexMesh)
{
	P_GET_TARRAY(FVector,Z_Param_ConvexVerts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function AddCollisionConvexMesh

// Begin Class UGeoClipmapMeshComponent Function ClearAllMeshSections
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear all mesh sections and reset to empty state */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Clear all mesh sections and reset to empty state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execClearAllMeshSections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllMeshSections();
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function ClearAllMeshSections

// Begin Class UGeoClipmapMeshComponent Function ClearCollisionConvexMeshes
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Remove collision meshes from this component */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Remove collision meshes from this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "ClearCollisionConvexMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execClearCollisionConvexMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCollisionConvexMeshes();
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function ClearCollisionConvexMeshes

// Begin Class UGeoClipmapMeshComponent Function ClearMeshSection
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics
{
	struct GeoClipmapMeshComponent_eventClearMeshSection_Parms
	{
		int32 SectionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear a section of the procedural mesh. Other sections do not change index. */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Clear a section of the procedural mesh. Other sections do not change index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::GeoClipmapMeshComponent_eventClearMeshSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::GeoClipmapMeshComponent_eventClearMeshSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execClearMeshSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMeshSection(Z_Param_SectionIndex);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function ClearMeshSection

// Begin Class UGeoClipmapMeshComponent Function CreateMeshSection
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics
{
	struct GeoClipmapMeshComponent_eventCreateMeshSection_Parms
	{
		int32 SectionIndex;
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FColor> VertexColors;
		TArray<FGeoCProcMeshTangent> Tangents;
		bool bCreateCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Create Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static void NewProp_bCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 779946998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 779946998
void Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
{
	((GeoClipmapMeshComponent_eventCreateMeshSection_Parms*)Obj)->bCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoClipmapMeshComponent_eventCreateMeshSection_Parms), &Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "CreateMeshSection", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::GeoClipmapMeshComponent_eventCreateMeshSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::GeoClipmapMeshComponent_eventCreateMeshSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execCreateMeshSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
	P_GET_TARRAY_REF(FGeoCProcMeshTangent,Z_Param_Out_Tangents);
	P_GET_UBOOL(Z_Param_bCreateCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function CreateMeshSection

// Begin Class UGeoClipmapMeshComponent Function CreateMeshSection_LinearColor
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics
{
	struct GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms
	{
		int32 SectionIndex;
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FVector2D> UV1;
		TArray<FVector2D> UV2;
		TArray<FVector2D> UV3;
		TArray<FLinearColor> VertexColors;
		TArray<FGeoCProcMeshTangent> Tangents;
		bool bCreateCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "DisplayName", "Create Mesh Section" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static void NewProp_bCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 779946998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 779946998
void Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
{
	((GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms*)Obj)->bCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms), &Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "CreateMeshSection_LinearColor", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::GeoClipmapMeshComponent_eventCreateMeshSection_LinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execCreateMeshSection_LinearColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
	P_GET_TARRAY_REF(FGeoCProcMeshTangent,Z_Param_Out_Tangents);
	P_GET_UBOOL(Z_Param_bCreateCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function CreateMeshSection_LinearColor

// Begin Class UGeoClipmapMeshComponent Function GetNumSections
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics
{
	struct GeoClipmapMeshComponent_eventGetNumSections_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns number of sections currently created for this component */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Returns number of sections currently created for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::GeoClipmapMeshComponent_eventGetNumSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::GeoClipmapMeshComponent_eventGetNumSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execGetNumSections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumSections();
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function GetNumSections

// Begin Class UGeoClipmapMeshComponent Function IsMeshSectionVisible
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics
{
	struct GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms
	{
		int32 SectionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns whether a particular section is currently visible */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Returns whether a particular section is currently visible" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::GeoClipmapMeshComponent_eventIsMeshSectionVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execIsMeshSectionVisible)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function IsMeshSectionVisible

// Begin Class UGeoClipmapMeshComponent Function SetMeshSectionVisible
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics
{
	struct GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms
	{
		int32 SectionIndex;
		bool bNewVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Control visibility of a particular section */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Control visibility of a particular section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static void NewProp_bNewVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
{
	((GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::GeoClipmapMeshComponent_eventSetMeshSectionVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execSetMeshSectionVisible)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_UBOOL(Z_Param_bNewVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function SetMeshSectionVisible

// Begin Class UGeoClipmapMeshComponent Function UpdateMeshSection
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics
{
	struct GeoClipmapMeshComponent_eventUpdateMeshSection_Parms
	{
		int32 SectionIndex;
		TArray<FVector> Vertices;
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FColor> VertexColors;
		TArray<FGeoCProcMeshTangent> Tangents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 779946998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 779946998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "UpdateMeshSection", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::GeoClipmapMeshComponent_eventUpdateMeshSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::GeoClipmapMeshComponent_eventUpdateMeshSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execUpdateMeshSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
	P_GET_TARRAY_REF(FGeoCProcMeshTangent,Z_Param_Out_Tangents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function UpdateMeshSection

// Begin Class UGeoClipmapMeshComponent Function UpdateMeshSection_LinearColor
struct Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics
{
	struct GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms
	{
		int32 SectionIndex;
		TArray<FVector> Vertices;
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FVector2D> UV1;
		TArray<FVector2D> UV2;
		TArray<FVector2D> UV3;
		TArray<FLinearColor> VertexColors;
		TArray<FGeoCProcMeshTangent> Tangents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DisplayName", "Update Mesh Section" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshTangent, METADATA_PARAMS(0, nullptr) }; // 779946998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 779946998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoClipmapMeshComponent, nullptr, "UpdateMeshSection_LinearColor", nullptr, nullptr, Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::GeoClipmapMeshComponent_eventUpdateMeshSection_LinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeoClipmapMeshComponent::execUpdateMeshSection_LinearColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
	P_GET_TARRAY_REF(FGeoCProcMeshTangent,Z_Param_Out_Tangents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
	P_NATIVE_END;
}
// End Class UGeoClipmapMeshComponent Function UpdateMeshSection_LinearColor

// Begin Class UGeoClipmapMeshComponent
void UGeoClipmapMeshComponent::StaticRegisterNativesUGeoClipmapMeshComponent()
{
	UClass* Class = UGeoClipmapMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCollisionConvexMesh", &UGeoClipmapMeshComponent::execAddCollisionConvexMesh },
		{ "ClearAllMeshSections", &UGeoClipmapMeshComponent::execClearAllMeshSections },
		{ "ClearCollisionConvexMeshes", &UGeoClipmapMeshComponent::execClearCollisionConvexMeshes },
		{ "ClearMeshSection", &UGeoClipmapMeshComponent::execClearMeshSection },
		{ "CreateMeshSection", &UGeoClipmapMeshComponent::execCreateMeshSection },
		{ "CreateMeshSection_LinearColor", &UGeoClipmapMeshComponent::execCreateMeshSection_LinearColor },
		{ "GetNumSections", &UGeoClipmapMeshComponent::execGetNumSections },
		{ "IsMeshSectionVisible", &UGeoClipmapMeshComponent::execIsMeshSectionVisible },
		{ "SetMeshSectionVisible", &UGeoClipmapMeshComponent::execSetMeshSectionVisible },
		{ "UpdateMeshSection", &UGeoClipmapMeshComponent::execUpdateMeshSection },
		{ "UpdateMeshSection_LinearColor", &UGeoClipmapMeshComponent::execUpdateMeshSection_LinearColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoClipmapMeshComponent);
UClass* Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister()
{
	return UGeoClipmapMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UGeoClipmapMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry\n*\x09""Beware! This feature is experimental and may be substantially changed in future releases.\n*/" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "Component/GeoClipmapMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry\nBeware! This feature is experimental and may be substantially changed in future releases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** \n\x09 *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. \n\x09 *\x09Should be set to false if this component is going to be given simple collision and simulated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/**\n\x09*\x09""Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshBodySetup_MetaData[] = {
		{ "Comment", "/** Collision data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Collision data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshSections_MetaData[] = {
		{ "Comment", "/** Array of sections of mesh */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Array of sections of mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[] = {
		{ "Comment", "/** Convex shapes used for simple collision */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Convex shapes used for simple collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBoundsGeoC_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/Component/GeoClipmapMeshComponent.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
	static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcMeshBodySetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcMeshSections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
	static void NewProp_UseCustomBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBoundsGeoC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncBodySetupQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 1608047656
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 3094928678
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 513198384
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 1401795003
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection, "CreateMeshSection" }, // 4011436744
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_CreateMeshSection_LinearColor, "CreateMeshSection_LinearColor" }, // 3132319338
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_GetNumSections, "GetNumSections" }, // 3993053514
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 435345844
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 2504718170
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection, "UpdateMeshSection" }, // 884022220
		{ &Z_Construct_UFunction_UGeoClipmapMeshComponent_UpdateMeshSection_LinearColor, "UpdateMeshSection_LinearColor" }, // 2739642257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeoClipmapMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
{
	((UGeoClipmapMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeoClipmapMeshComponent), &Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexAsSimpleCollision_MetaData), NewProp_bUseComplexAsSimpleCollision_MetaData) };
void Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
{
	((UGeoClipmapMeshComponent*)Obj)->bUseAsyncCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeoClipmapMeshComponent), &Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncCooking_MetaData), NewProp_bUseAsyncCooking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshBodySetup = { "ProcMeshBodySetup", nullptr, (EPropertyFlags)0x0012000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, ProcMeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcMeshBodySetup_MetaData), NewProp_ProcMeshBodySetup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshSections_Inner = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoCProcMeshSection, METADATA_PARAMS(0, nullptr) }; // 1426602690
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshSections = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, ProcMeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcMeshSections_MetaData), NewProp_ProcMeshSections_MetaData) }; // 1426602690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(0, nullptr) }; // 3161735465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionConvexElems_MetaData), NewProp_CollisionConvexElems_MetaData) }; // 3161735465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBounds_MetaData), NewProp_LocalBounds_MetaData) };
void Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_UseCustomBounds_SetBit(void* Obj)
{
	((UGeoClipmapMeshComponent*)Obj)->UseCustomBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_UseCustomBounds = { "UseCustomBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeoClipmapMeshComponent), &Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_UseCustomBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomBounds_MetaData), NewProp_UseCustomBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_LocalBoundsGeoC = { "LocalBoundsGeoC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, LocalBoundsGeoC), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBoundsGeoC_MetaData), NewProp_LocalBoundsGeoC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, TargetHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHeight_MetaData), NewProp_TargetHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeoClipmapMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncBodySetupQueue_MetaData), NewProp_AsyncBodySetupQueue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_bUseAsyncCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshBodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_ProcMeshSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_CollisionConvexElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_LocalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_UseCustomBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_LocalBoundsGeoC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_TargetHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UGeoClipmapMeshComponent, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::ClassParams = {
	&UGeoClipmapMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeoClipmapMeshComponent()
{
	if (!Z_Registration_Info_UClass_UGeoClipmapMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeoClipmapMeshComponent.OuterSingleton, Z_Construct_UClass_UGeoClipmapMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeoClipmapMeshComponent.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UClass* StaticClass<UGeoClipmapMeshComponent>()
{
	return UGeoClipmapMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeoClipmapMeshComponent);
UGeoClipmapMeshComponent::~UGeoClipmapMeshComponent() {}
// End Class UGeoClipmapMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeoCProcMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics::NewStructOps, TEXT("GeoCProcMeshTangent"), &Z_Registration_Info_UScriptStruct_GeoCProcMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoCProcMeshTangent), 779946998U) },
		{ FGeoCProcMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics::NewStructOps, TEXT("GeoCProcMeshVertex"), &Z_Registration_Info_UScriptStruct_GeoCProcMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoCProcMeshVertex), 3944838507U) },
		{ FGeoCProcMeshSection::StaticStruct, Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics::NewStructOps, TEXT("GeoCProcMeshSection"), &Z_Registration_Info_UScriptStruct_GeoCProcMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoCProcMeshSection), 1426602690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeoClipmapMeshComponent, UGeoClipmapMeshComponent::StaticClass, TEXT("UGeoClipmapMeshComponent"), &Z_Registration_Info_UClass_UGeoClipmapMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoClipmapMeshComponent), 154793286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_2252758285(TEXT("/Script/ProceduralLandscape"),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
