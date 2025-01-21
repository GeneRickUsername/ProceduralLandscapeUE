// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralLandscape/Public/Actor/GeometryClipMapWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryClipMapWorld() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_AGeometryClipMapWorld();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_AGeometryClipMapWorld_NoRegister();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister();
PROCEDURALLANDSCAPE_API UEnum* Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig();
PROCEDURALLANDSCAPE_API UEnum* Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType();
PROCEDURALLANDSCAPE_API UEnum* Z_Construct_UEnum_ProceduralLandscape_ENValue();
PROCEDURALLANDSCAPE_API UEnum* Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FClipMapLayer();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FClipMapMeshElement();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionMeshElement();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceIndexes();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshElementOffset();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMesh();
PROCEDURALLANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMeshElement();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralLandscape();
// End Cross Module References

// Begin Enum EGeoClipWorldType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeoClipWorldType;
static UEnum* EGeoClipWorldType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGeoClipWorldType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGeoClipWorldType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("EGeoClipWorldType"));
	}
	return Z_Registration_Info_UEnum_EGeoClipWorldType.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UEnum* StaticEnum<EGeoClipWorldType>()
{
	return EGeoClipWorldType_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlatWorld.DisplayName", "Flat world generation" },
		{ "FlatWorld.Name", "EGeoClipWorldType::FlatWorld" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "SphericalWorld.DisplayName", "Spherical world generation" },
		{ "SphericalWorld.Name", "EGeoClipWorldType::SphericalWorld" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGeoClipWorldType::FlatWorld", (int64)EGeoClipWorldType::FlatWorld },
		{ "EGeoClipWorldType::SphericalWorld", (int64)EGeoClipWorldType::SphericalWorld },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	"EGeoClipWorldType",
	"EGeoClipWorldType",
	Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType()
{
	if (!Z_Registration_Info_UEnum_EGeoClipWorldType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeoClipWorldType.InnerSingleton, Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGeoClipWorldType.InnerSingleton;
}
// End Enum EGeoClipWorldType

// Begin Enum EWorldPresentation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPresentation;
static UEnum* EWorldPresentation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldPresentation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldPresentation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("EWorldPresentation"));
	}
	return Z_Registration_Info_UEnum_EWorldPresentation.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UEnum* StaticEnum<EWorldPresentation>()
{
	return EWorldPresentation_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InstancedMesh.DisplayName", "InstancedMesh Shaped" },
		{ "InstancedMesh.Name", "EWorldPresentation::InstancedMesh" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "Smooth.DisplayName", "Triangle Based Terrain" },
		{ "Smooth.Name", "EWorldPresentation::Smooth" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldPresentation::Smooth", (int64)EWorldPresentation::Smooth },
		{ "EWorldPresentation::InstancedMesh", (int64)EWorldPresentation::InstancedMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	"EWorldPresentation",
	"EWorldPresentation",
	Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation()
{
	if (!Z_Registration_Info_UEnum_EWorldPresentation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPresentation.InnerSingleton, Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldPresentation.InnerSingleton;
}
// End Enum EWorldPresentation

// Begin Enum EClipMapInteriorConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClipMapInteriorConfig;
static UEnum* EClipMapInteriorConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClipMapInteriorConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClipMapInteriorConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("EClipMapInteriorConfig"));
	}
	return Z_Registration_Info_UEnum_EClipMapInteriorConfig.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UEnum* StaticEnum<EClipMapInteriorConfig>()
{
	return EClipMapInteriorConfig_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BotLeft.DisplayName", "BotLeft" },
		{ "BotLeft.Name", "EClipMapInteriorConfig::BotLeft" },
		{ "BotRight.DisplayName", "BotRight" },
		{ "BotRight.Name", "EClipMapInteriorConfig::BotRight" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "NotVisible.DisplayName", "NotVisible" },
		{ "NotVisible.Name", "EClipMapInteriorConfig::NotVisible" },
		{ "TopLeft.DisplayName", "TopLeft" },
		{ "TopLeft.Name", "EClipMapInteriorConfig::TopLeft" },
		{ "TopRight.DisplayName", "TopRight" },
		{ "TopRight.Name", "EClipMapInteriorConfig::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClipMapInteriorConfig::BotLeft", (int64)EClipMapInteriorConfig::BotLeft },
		{ "EClipMapInteriorConfig::TopLeft", (int64)EClipMapInteriorConfig::TopLeft },
		{ "EClipMapInteriorConfig::BotRight", (int64)EClipMapInteriorConfig::BotRight },
		{ "EClipMapInteriorConfig::TopRight", (int64)EClipMapInteriorConfig::TopRight },
		{ "EClipMapInteriorConfig::NotVisible", (int64)EClipMapInteriorConfig::NotVisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	"EClipMapInteriorConfig",
	"EClipMapInteriorConfig",
	Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig()
{
	if (!Z_Registration_Info_UEnum_EClipMapInteriorConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClipMapInteriorConfig.InnerSingleton, Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClipMapInteriorConfig.InnerSingleton;
}
// End Enum EClipMapInteriorConfig

// Begin Enum ENValue
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENValue;
static UEnum* ENValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralLandscape_ENValue, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("ENValue"));
	}
	return Z_Registration_Info_UEnum_ENValue.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UEnum* StaticEnum<ENValue>()
{
	return ENValue_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "N127.DisplayName", "127" },
		{ "N127.Name", "ENValue::N127" },
		{ "N15.DisplayName", "15" },
		{ "N15.Name", "ENValue::N15" },
		{ "N255.DisplayName", "255" },
		{ "N255.Name", "ENValue::N255" },
		{ "N31.DisplayName", "31" },
		{ "N31.Name", "ENValue::N31" },
		{ "N511.DisplayName", "511" },
		{ "N511.Name", "ENValue::N511" },
		{ "N63.DisplayName", "63" },
		{ "N63.Name", "ENValue::N63" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENValue::N511", (int64)ENValue::N511 },
		{ "ENValue::N255", (int64)ENValue::N255 },
		{ "ENValue::N127", (int64)ENValue::N127 },
		{ "ENValue::N63", (int64)ENValue::N63 },
		{ "ENValue::N31", (int64)ENValue::N31 },
		{ "ENValue::N15", (int64)ENValue::N15 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	"ENValue",
	"ENValue",
	Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralLandscape_ENValue()
{
	if (!Z_Registration_Info_UEnum_ENValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENValue.InnerSingleton, Z_Construct_UEnum_ProceduralLandscape_ENValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENValue.InnerSingleton;
}
// End Enum ENValue

// Begin ScriptStruct FClipMapMeshElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClipMapMeshElement;
class UScriptStruct* FClipMapMeshElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClipMapMeshElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClipMapMeshElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClipMapMeshElement, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("ClipMapMeshElement"));
	}
	return Z_Registration_Info_UScriptStruct_ClipMapMeshElement.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FClipMapMeshElement>()
{
	return FClipMapMeshElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClipMapMeshElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_I_Mesh_MetaData[] = {
		{ "Comment", "//In case we're using instancedMesh for rendering\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "In case we're using instancedMesh for rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandLayers_MetaData[] = {
		{ "Comment", "/*\n\x09// Would need new further developement | Sticking to the RT array for ease to implement\n\x09UPROPERTY(Transient)\n\x09\x09UTextureRenderTarget2DArray* LandLayers = nullptr;\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "// Would need new further developement | Sticking to the RT array for ease to implement\nUPROPERTY(Transient)\n        UTextureRenderTarget2DArray* LandLayers = nullptr;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerMatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_I_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Config_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatDyn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheMatDyn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerMatDyn;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SectionVisibility_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClipMapMeshElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, Mesh), Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh = { "I_Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, I_Mesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_I_Mesh_MetaData), NewProp_I_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, GridSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSpacing_MetaData), NewProp_GridSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, Config), Z_Construct_UEnum_ProceduralLandscape_EClipMapInteriorConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 696504634
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn = { "MatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, MatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatDyn_MetaData), NewProp_MatDyn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, HeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMap_MetaData), NewProp_HeightMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap = { "NormalMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, NormalMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMap_MetaData), NewProp_NormalMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn = { "CacheMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, CacheMatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMatDyn_MetaData), NewProp_CacheMatDyn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_Inner = { "LandLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers = { "LandLayers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, LandLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandLayers_MetaData), NewProp_LandLayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn = { "LayerMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, LayerMatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerMatDyn_MetaData), NewProp_LayerMatDyn_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_Inner = { "SectionVisibility", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility = { "SectionVisibility", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapMeshElement, SectionVisibility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionVisibility_MetaData), NewProp_SectionVisibility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"ClipMapMeshElement",
	Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers),
	sizeof(FClipMapMeshElement),
	alignof(FClipMapMeshElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClipMapMeshElement()
{
	if (!Z_Registration_Info_UScriptStruct_ClipMapMeshElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClipMapMeshElement.InnerSingleton, Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClipMapMeshElement.InnerSingleton;
}
// End ScriptStruct FClipMapMeshElement

// Begin ScriptStruct FClipMapLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClipMapLayer;
class UScriptStruct* FClipMapLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClipMapLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClipMapLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClipMapLayer, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("ClipMapLayer"));
	}
	return Z_Registration_Info_UScriptStruct_ClipMapLayer.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FClipMapLayer>()
{
	return FClipMapLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClipMapLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToGenerateLayer_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToGenerateLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClipMapLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer = { "MaterialToGenerateLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapLayer, MaterialToGenerateLayer), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialToGenerateLayer_MetaData), NewProp_MaterialToGenerateLayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClipMapLayer, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"ClipMapLayer",
	Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers),
	sizeof(FClipMapLayer),
	alignof(FClipMapLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClipMapLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClipMapLayer()
{
	if (!Z_Registration_Info_UScriptStruct_ClipMapLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClipMapLayer.InnerSingleton, Z_Construct_UScriptStruct_FClipMapLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClipMapLayer.InnerSingleton;
}
// End ScriptStruct FClipMapLayer

// Begin ScriptStruct FCollisionMeshElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionMeshElement;
class UScriptStruct* FCollisionMeshElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionMeshElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionMeshElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionMeshElement, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("CollisionMeshElement"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionMeshElement.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FCollisionMeshElement>()
{
	return FCollisionMeshElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionMeshElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionRT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionMeshElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionMeshElement, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT = { "CollisionRT", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionMeshElement, CollisionRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRT_MetaData), NewProp_CollisionRT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionMeshElement, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_Inner = { "HeightData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionMeshElement, HeightData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightData_MetaData), NewProp_HeightData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"CollisionMeshElement",
	Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers),
	sizeof(FCollisionMeshElement),
	alignof(FCollisionMeshElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionMeshElement()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionMeshElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionMeshElement.InnerSingleton, Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionMeshElement.InnerSingleton;
}
// End ScriptStruct FCollisionMeshElement

// Begin ScriptStruct FMeshElementOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshElementOffset;
class UScriptStruct* FMeshElementOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshElementOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshElementOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementOffset, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("MeshElementOffset"));
	}
	return Z_Registration_Info_UScriptStruct_MeshElementOffset.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FMeshElementOffset>()
{
	return FMeshElementOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshElementOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshElementOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshElementOffset_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshElementOffset, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshElementOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshElementOffset, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshElementOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementOffset_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshElementOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"MeshElementOffset",
	Z_Construct_UScriptStruct_FMeshElementOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementOffset_Statics::PropPointers),
	sizeof(FMeshElementOffset),
	alignof(FMeshElementOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshElementOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshElementOffset()
{
	if (!Z_Registration_Info_UScriptStruct_MeshElementOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshElementOffset.InnerSingleton, Z_Construct_UScriptStruct_FMeshElementOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshElementOffset.InnerSingleton;
}
// End ScriptStruct FMeshElementOffset

// Begin ScriptStruct FInstanceIndexes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstanceIndexes;
class UScriptStruct* FInstanceIndexes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceIndexes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstanceIndexes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceIndexes, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("InstanceIndexes"));
	}
	return Z_Registration_Info_UScriptStruct_InstanceIndexes.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FInstanceIndexes>()
{
	return FInstanceIndexes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstanceIndexes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstancesIndexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceIndexes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceIndexes, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancesIndexes_MetaData), NewProp_InstancesIndexes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"InstanceIndexes",
	Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers),
	sizeof(FInstanceIndexes),
	alignof(FInstanceIndexes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstanceIndexes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstanceIndexes()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceIndexes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstanceIndexes.InnerSingleton, Z_Construct_UScriptStruct_FInstanceIndexes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstanceIndexes.InnerSingleton;
}
// End ScriptStruct FInstanceIndexes

// Begin ScriptStruct FSpawnableMeshElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnableMeshElement;
class UScriptStruct* FSpawnableMeshElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableMeshElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnableMeshElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableMeshElement, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("SpawnableMeshElement"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnableMeshElement.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FSpawnableMeshElement>()
{
	return FSpawnableMeshElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeSpawnTransformDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationXData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationYData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationZData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancesTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[] = {
		{ "Comment", "/*TArray<int>*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "TArray<int>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComputeSpawnTransformDyn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationXData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationXData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationYData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationYData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationZData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationZData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesTransform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesIndexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceOffset_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableMeshElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationX), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationX_MetaData), NewProp_LocationX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationY), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationY_MetaData), NewProp_LocationY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ = { "LocationZ", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationZ), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationZ_MetaData), NewProp_LocationZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, Rotation), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn = { "ComputeSpawnTransformDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, ComputeSpawnTransformDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeSpawnTransformDyn_MetaData), NewProp_ComputeSpawnTransformDyn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_Inner = { "LocationXData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData = { "LocationXData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationXData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationXData_MetaData), NewProp_LocationXData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_Inner = { "LocationYData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData = { "LocationYData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationYData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationYData_MetaData), NewProp_LocationYData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_Inner = { "LocationZData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData = { "LocationZData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationZData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationZData_MetaData), NewProp_LocationZData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_Inner = { "RotationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData = { "RotationData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, RotationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationData_MetaData), NewProp_RotationData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_Inner = { "InstancesTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform = { "InstancesTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstancesTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancesTransform_MetaData), NewProp_InstancesTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstanceIndexes, METADATA_PARAMS(0, nullptr) }; // 3165735614
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancesIndexes_MetaData), NewProp_InstancesIndexes_MetaData) }; // 3165735614
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_Inner = { "InstanceOffset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset = { "InstanceOffset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstanceOffset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceOffset_MetaData), NewProp_InstanceOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceCount = { "InstanceCount", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstanceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceCount_MetaData), NewProp_InstanceCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"SpawnableMeshElement",
	Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers),
	sizeof(FSpawnableMeshElement),
	alignof(FSpawnableMeshElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMeshElement()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableMeshElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnableMeshElement.InnerSingleton, Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnableMeshElement.InnerSingleton;
}
// End ScriptStruct FSpawnableMeshElement

// Begin ScriptStruct FSpawnableMesh
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnableMesh;
class UScriptStruct* FSpawnableMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnableMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableMesh, (UObject*)Z_Construct_UPackage__Script_ProceduralLandscape(), TEXT("SpawnableMesh"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnableMesh.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<FSpawnableMesh>()
{
	return FSpawnableMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnableMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignMaxAngle_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeRange_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HIM_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndexToHIMIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInstancePerHIM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndexToIndexForHIM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfInstanceToComputePerRegion_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionWorldDimension_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_Dim_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnablesElem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableSpawnablesElem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedSpawnablesElem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnablesElemReadToProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnablesLayout_MetaData[] = {
		{ "Comment", "/*FSpawnableMeshElement*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "FSpawnableMeshElement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexOfClipMapForCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSpawnablesMat_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CollisionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionEnabled;
	static void NewProp_CastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignMaxAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AltitudeRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HIM_Mesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HIM_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndexToHIMIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIndexToHIMIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstancePerHIM_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumInstancePerHIM;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndexToIndexForHIM_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIndexToIndexForHIM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfInstanceToComputePerRegion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegionWorldDimension;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RT_Dim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnablesElem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnablesElem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableSpawnablesElem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableSpawnablesElem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UsedSpawnablesElem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedSpawnablesElem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnablesElemReadToProcess_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnablesElemReadToProcess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnablesLayout_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnablesLayout_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnablesLayout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexOfClipMapForCompute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomSpawnablesMat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_SetBit(void* Obj)
{
	((FSpawnableMesh*)Obj)->CollisionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnableMesh), &Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_SetBit(void* Obj)
{
	((FSpawnableMesh*)Obj)->CastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnableMesh), &Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows_MetaData), NewProp_CastShadows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle = { "AlignMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, AlignMaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignMaxAngle_MetaData), NewProp_AlignMaxAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange = { "AltitudeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, AltitudeRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeRange_MetaData), NewProp_AltitudeRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, ScaleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRange_MetaData), NewProp_ScaleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSlopeAngle_MetaData), NewProp_GroundSlopeAngle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_Inner = { "HIM_Mesh", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh = { "HIM_Mesh", nullptr, (EPropertyFlags)0x0010008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, HIM_Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HIM_Mesh_MetaData), NewProp_HIM_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_Inner = { "InstanceIndexToHIMIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex = { "InstanceIndexToHIMIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, InstanceIndexToHIMIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndexToHIMIndex_MetaData), NewProp_InstanceIndexToHIMIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_Inner = { "NumInstancePerHIM", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM = { "NumInstancePerHIM", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, NumInstancePerHIM), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInstancePerHIM_MetaData), NewProp_NumInstancePerHIM_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_Inner = { "InstanceIndexToIndexForHIM", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM = { "InstanceIndexToIndexForHIM", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, InstanceIndexToIndexForHIM), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndexToIndexForHIM_MetaData), NewProp_InstanceIndexToIndexForHIM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, Owner), Z_Construct_UClass_AGeometryClipMapWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion = { "NumberOfInstanceToComputePerRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, NumberOfInstanceToComputePerRegion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfInstanceToComputePerRegion_MetaData), NewProp_NumberOfInstanceToComputePerRegion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension = { "RegionWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, RegionWorldDimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionWorldDimension_MetaData), NewProp_RegionWorldDimension_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim = { "RT_Dim", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, RT_Dim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_Dim_MetaData), NewProp_RT_Dim_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_Inner = { "SpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnableMeshElement, METADATA_PARAMS(0, nullptr) }; // 2656679457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem = { "SpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnablesElem_MetaData), NewProp_SpawnablesElem_MetaData) }; // 2656679457
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_Inner = { "AvailableSpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem = { "AvailableSpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, AvailableSpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableSpawnablesElem_MetaData), NewProp_AvailableSpawnablesElem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_Inner = { "UsedSpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem = { "UsedSpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, UsedSpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedSpawnablesElem_MetaData), NewProp_UsedSpawnablesElem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_Inner = { "SpawnablesElemReadToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess = { "SpawnablesElemReadToProcess", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesElemReadToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnablesElemReadToProcess_MetaData), NewProp_SpawnablesElemReadToProcess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_ValueProp = { "SpawnablesLayout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_Key_KeyProp = { "SpawnablesLayout_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout = { "SpawnablesLayout", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesLayout), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnablesLayout_MetaData), NewProp_SpawnablesLayout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute = { "IndexOfClipMapForCompute", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, IndexOfClipMapForCompute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexOfClipMapForCompute_MetaData), NewProp_IndexOfClipMapForCompute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat = { "CustomSpawnablesMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnableMesh, CustomSpawnablesMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSpawnablesMat_MetaData), NewProp_CustomSpawnablesMat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
	nullptr,
	&NewStructOps,
	"SpawnableMesh",
	Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers),
	sizeof(FSpawnableMesh),
	alignof(FSpawnableMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnableMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMesh()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnableMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnableMesh.InnerSingleton, Z_Construct_UScriptStruct_FSpawnableMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnableMesh.InnerSingleton;
}
// End ScriptStruct FSpawnableMesh

// Begin Class AGeometryClipMapWorld
void AGeometryClipMapWorld::StaticRegisterNativesAGeometryClipMapWorld()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryClipMapWorld);
UClass* Z_Construct_UClass_AGeometryClipMapWorld_NoRegister()
{
	return AGeometryClipMapWorld::StaticClass();
}
struct Z_Construct_UClass_AGeometryClipMapWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/GeometryClipMapWorld.h" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRatePerSecond_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipMapCacheIntraVerticesTexel_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "Comment", "/*Number of texel we're storing in between each vertices, with 4 texels, 255 vertices and 12 LODs, it's 50MB of video ram*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Number of texel we're storing in between each vertices, with 4 texels, 255 vertices and 12 LODs, it's 50MB of video ram" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAcu_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateCollision_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCaching_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "Comment", "/*If defining a static landscape, cache the landscape computation instead of computing it each frame*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "If defining a static landscape, cache the landscape computation instead of computing it each frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_above_doubleCacheResolution_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rebuild_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rebuildVegetationOnly_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "Comment", "/*Valid Value for N: 255/127/63/31/15 */" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Valid Value for N: 255/127/63/31/15" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N_Select_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRangeMeters_MetaData[] = {
		{ "Category", "ClipMap Hack Culling" },
		{ "Comment", "/*Hack the culling of the landscape with vertical noise*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Hack the culling of the landscape with vertical noise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[] = {
		{ "Comment", "/*EditAnywhere, BlueprintReadWrite, Category = \"ClipMap Settings\"*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, Category = \"ClipMap Settings\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPresentation_MetaData[] = {
		{ "Comment", "/*EditAnywhere, BlueprintReadWrite, Category = \"ClipMap Settings\"*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, Category = \"ClipMap Settings\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mat_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatwCaching_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMat_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandDataLayers_MetaData[] = {
		{ "Category", "ClipMap Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshVerticeNumber_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshWorldDimension_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMat_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMat_HeightRead_MetaData[] = {
		{ "Category", "Collision Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAcuSpawnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateSpanablesPerSecond_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnablesMat_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawCallBudget_Spawnables_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualRepresentation_MetaData[] = {
		{ "Category", "ClipMap WorldPresentation" },
		{ "Comment", "/*Relevant Only if using InstancedMesh representation*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Relevant Only if using InstancedMesh representation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_InstancedMeshRepresentation_MetaData[] = {
		{ "Category", "ClipMap WorldPresentation" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshesOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableCollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedCollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionReadToProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCollisionLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRatePerSecond;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipMapCacheIntraVerticesTexel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAcu;
	static void NewProp_GenerateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateCollision;
	static void NewProp_EnableCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCaching;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD_above_doubleCacheResolution;
	static void NewProp_rebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_rebuild;
	static void NewProp_rebuildVegetationOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_rebuildVegetationOnly;
	static void NewProp_debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_N;
	static const UECodeGen_Private::FBytePropertyParams NewProp_N_Select_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_N_Select;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRangeMeters;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPresentation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPresentation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatwCaching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatDyn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheMat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandDataLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CacheMatDyn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionMeshPerQuadrantAroundPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionMeshVerticeNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMeshWorldDimension;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMat_HeightRead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAcuSpawnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRateSpanablesPerSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawnables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnablesMat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawCallBudget_Spawnables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualRepresentation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material_InstancedMeshRepresentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshesOffset_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableCollisionMesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableCollisionMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UsedCollisionMesh_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedCollisionMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionReadToProcess_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionReadToProcess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCollisionLayout_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCollisionLayout_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GroundCollisionLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryClipMapWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond = { "UpdateRatePerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, UpdateRatePerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRatePerSecond_MetaData), NewProp_UpdateRatePerSecond_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel = { "ClipMapCacheIntraVerticesTexel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, ClipMapCacheIntraVerticesTexel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipMapCacheIntraVerticesTexel_MetaData), NewProp_ClipMapCacheIntraVerticesTexel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu = { "TimeAcu", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, TimeAcu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAcu_MetaData), NewProp_TimeAcu_MetaData) };
void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_SetBit(void* Obj)
{
	((AGeometryClipMapWorld*)Obj)->GenerateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision = { "GenerateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateCollision_MetaData), NewProp_GenerateCollision_MetaData) };
void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_SetBit(void* Obj)
{
	((AGeometryClipMapWorld*)Obj)->EnableCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching = { "EnableCaching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCaching_MetaData), NewProp_EnableCaching_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution = { "LOD_above_doubleCacheResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LOD_above_doubleCacheResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_above_doubleCacheResolution_MetaData), NewProp_LOD_above_doubleCacheResolution_MetaData) };
void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_SetBit(void* Obj)
{
	((AGeometryClipMapWorld*)Obj)->rebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild = { "rebuild", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rebuild_MetaData), NewProp_rebuild_MetaData) };
void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_SetBit(void* Obj)
{
	((AGeometryClipMapWorld*)Obj)->rebuildVegetationOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly = { "rebuildVegetationOnly", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rebuildVegetationOnly_MetaData), NewProp_rebuildVegetationOnly_MetaData) };
void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_debug_SetBit(void* Obj)
{
	((AGeometryClipMapWorld*)Obj)->debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debug_MetaData), NewProp_debug_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, GridSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSpacing_MetaData), NewProp_GridSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, N), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N_MetaData), NewProp_N_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_Select_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_Select = { "N_Select", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, N_Select), Z_Construct_UEnum_ProceduralLandscape_ENValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N_Select_MetaData), NewProp_N_Select_MetaData) }; // 3916381030
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters = { "VerticalRangeMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, VerticalRangeMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRangeMeters_MetaData), NewProp_VerticalRangeMeters_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, WorldType), Z_Construct_UEnum_ProceduralLandscape_EGeoClipWorldType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldType_MetaData), NewProp_WorldType_MetaData) }; // 3864176876
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation = { "WorldPresentation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, WorldPresentation), Z_Construct_UEnum_ProceduralLandscape_EWorldPresentation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPresentation_MetaData), NewProp_WorldPresentation_MetaData) }; // 361146283
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Mat = { "Mat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mat_MetaData), NewProp_Mat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatwCaching = { "MatwCaching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, MatwCaching), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatwCaching_MetaData), NewProp_MatwCaching_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn = { "MatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, MatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatDyn_MetaData), NewProp_MatDyn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CacheMat = { "CacheMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CacheMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMat_MetaData), NewProp_CacheMat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_Inner = { "LandDataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClipMapLayer, METADATA_PARAMS(0, nullptr) }; // 2056301982
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers = { "LandDataLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LandDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandDataLayers_MetaData), NewProp_LandDataLayers_MetaData) }; // 2056301982
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CacheMatDyn = { "CacheMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CacheMatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMatDyn_MetaData), NewProp_CacheMatDyn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer = { "CollisionMeshPerQuadrantAroundPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshPerQuadrantAroundPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData), NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber = { "CollisionMeshVerticeNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshVerticeNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshVerticeNumber_MetaData), NewProp_CollisionMeshVerticeNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension = { "CollisionMeshWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshWorldDimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshWorldDimension_MetaData), NewProp_CollisionMeshWorldDimension_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat = { "CollisionMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMat_MetaData), NewProp_CollisionMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead = { "CollisionMat_HeightRead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMat_HeightRead), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMat_HeightRead_MetaData), NewProp_CollisionMat_HeightRead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcuSpawnable = { "TimeAcuSpawnable", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, TimeAcuSpawnable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAcuSpawnable_MetaData), NewProp_TimeAcuSpawnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRateSpanablesPerSecond = { "UpdateRateSpanablesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, UpdateRateSpanablesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateSpanablesPerSecond_MetaData), NewProp_UpdateRateSpanablesPerSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_Inner = { "Spawnables", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnableMesh, METADATA_PARAMS(0, nullptr) }; // 3656720061
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables = { "Spawnables", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Spawnables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawnables_MetaData), NewProp_Spawnables_MetaData) }; // 3656720061
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat = { "SpawnablesMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, SpawnablesMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnablesMat_MetaData), NewProp_SpawnablesMat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables = { "DrawCallBudget_Spawnables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, DrawCallBudget_Spawnables), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawCallBudget_Spawnables_MetaData), NewProp_DrawCallBudget_Spawnables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation = { "VisualRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, VisualRepresentation), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualRepresentation_MetaData), NewProp_VisualRepresentation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation = { "Material_InstancedMeshRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Material_InstancedMeshRepresentation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_InstancedMeshRepresentation_MetaData), NewProp_Material_InstancedMeshRepresentation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClipMapMeshElement, METADATA_PARAMS(0, nullptr) }; // 4180804644
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 4180804644
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MeshesOffset_Inner = { "MeshesOffset", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshElementOffset, METADATA_PARAMS(0, nullptr) }; // 286616130
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MeshesOffset = { "MeshesOffset", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, MeshesOffset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshesOffset_MetaData), NewProp_MeshesOffset_MetaData) }; // 286616130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_Inner = { "CollisionMesh", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionMeshElement, METADATA_PARAMS(0, nullptr) }; // 2582460397
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMesh_MetaData), NewProp_CollisionMesh_MetaData) }; // 2582460397
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_Inner = { "AvailableCollisionMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh = { "AvailableCollisionMesh", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, AvailableCollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableCollisionMesh_MetaData), NewProp_AvailableCollisionMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_Inner = { "UsedCollisionMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh = { "UsedCollisionMesh", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, UsedCollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedCollisionMesh_MetaData), NewProp_UsedCollisionMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_Inner = { "CollisionReadToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess = { "CollisionReadToProcess", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionReadToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionReadToProcess_MetaData), NewProp_CollisionReadToProcess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_ValueProp = { "GroundCollisionLayout", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCollisionMeshElement, METADATA_PARAMS(0, nullptr) }; // 2582460397
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_Key_KeyProp = { "GroundCollisionLayout_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout = { "GroundCollisionLayout", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryClipMapWorld, GroundCollisionLayout), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCollisionLayout_MetaData), NewProp_GroundCollisionLayout_MetaData) }; // 2582460397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_Select_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_Select,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Mat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatwCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CacheMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CacheMatDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcuSpawnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRateSpanablesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MeshesOffset_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MeshesOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryClipMapWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::ClassParams = {
	&AGeometryClipMapWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryClipMapWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryClipMapWorld()
{
	if (!Z_Registration_Info_UClass_AGeometryClipMapWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryClipMapWorld.OuterSingleton, Z_Construct_UClass_AGeometryClipMapWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryClipMapWorld.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UClass* StaticClass<AGeometryClipMapWorld>()
{
	return AGeometryClipMapWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryClipMapWorld);
AGeometryClipMapWorld::~AGeometryClipMapWorld() {}
// End Class AGeometryClipMapWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGeoClipWorldType_StaticEnum, TEXT("EGeoClipWorldType"), &Z_Registration_Info_UEnum_EGeoClipWorldType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3864176876U) },
		{ EWorldPresentation_StaticEnum, TEXT("EWorldPresentation"), &Z_Registration_Info_UEnum_EWorldPresentation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 361146283U) },
		{ EClipMapInteriorConfig_StaticEnum, TEXT("EClipMapInteriorConfig"), &Z_Registration_Info_UEnum_EClipMapInteriorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 696504634U) },
		{ ENValue_StaticEnum, TEXT("ENValue"), &Z_Registration_Info_UEnum_ENValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3916381030U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClipMapMeshElement::StaticStruct, Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewStructOps, TEXT("ClipMapMeshElement"), &Z_Registration_Info_UScriptStruct_ClipMapMeshElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClipMapMeshElement), 4180804644U) },
		{ FClipMapLayer::StaticStruct, Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewStructOps, TEXT("ClipMapLayer"), &Z_Registration_Info_UScriptStruct_ClipMapLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClipMapLayer), 2056301982U) },
		{ FCollisionMeshElement::StaticStruct, Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewStructOps, TEXT("CollisionMeshElement"), &Z_Registration_Info_UScriptStruct_CollisionMeshElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionMeshElement), 2582460397U) },
		{ FMeshElementOffset::StaticStruct, Z_Construct_UScriptStruct_FMeshElementOffset_Statics::NewStructOps, TEXT("MeshElementOffset"), &Z_Registration_Info_UScriptStruct_MeshElementOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshElementOffset), 286616130U) },
		{ FInstanceIndexes::StaticStruct, Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewStructOps, TEXT("InstanceIndexes"), &Z_Registration_Info_UScriptStruct_InstanceIndexes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstanceIndexes), 3165735614U) },
		{ FSpawnableMeshElement::StaticStruct, Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewStructOps, TEXT("SpawnableMeshElement"), &Z_Registration_Info_UScriptStruct_SpawnableMeshElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnableMeshElement), 2656679457U) },
		{ FSpawnableMesh::StaticStruct, Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewStructOps, TEXT("SpawnableMesh"), &Z_Registration_Info_UScriptStruct_SpawnableMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnableMesh), 3656720061U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryClipMapWorld, AGeometryClipMapWorld::StaticClass, TEXT("AGeometryClipMapWorld"), &Z_Registration_Info_UClass_AGeometryClipMapWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryClipMapWorld), 2155754027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_3518843528(TEXT("/Script/ProceduralLandscape"),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_GeometryClipMapWorld_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
