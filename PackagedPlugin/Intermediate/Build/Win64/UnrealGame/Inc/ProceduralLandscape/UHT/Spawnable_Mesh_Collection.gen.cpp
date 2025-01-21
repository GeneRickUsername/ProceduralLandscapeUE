// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralLandscape/Public/Data/Spawnable_Mesh_Collection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnable_Mesh_Collection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_USpawnable_Mesh_Collection();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_USpawnable_Mesh_Collection_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralLandscape();
// End Cross Module References

// Begin Class USpawnable_Mesh_Collection
void USpawnable_Mesh_Collection::StaticRegisterNativesUSpawnable_Mesh_Collection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnable_Mesh_Collection);
UClass* Z_Construct_UClass_USpawnable_Mesh_Collection_NoRegister()
{
	return USpawnable_Mesh_Collection::StaticClass();
}
struct Z_Construct_UClass_USpawnable_Mesh_Collection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/Spawnable_Mesh_Collection.h" },
		{ "ModuleRelativePath", "Public/Data/Spawnable_Mesh_Collection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnable_Mesh_Collection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::ClassParams = {
	&USpawnable_Mesh_Collection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnable_Mesh_Collection()
{
	if (!Z_Registration_Info_UClass_USpawnable_Mesh_Collection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnable_Mesh_Collection.OuterSingleton, Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnable_Mesh_Collection.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UClass* StaticClass<USpawnable_Mesh_Collection>()
{
	return USpawnable_Mesh_Collection::StaticClass();
}
USpawnable_Mesh_Collection::USpawnable_Mesh_Collection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnable_Mesh_Collection);
USpawnable_Mesh_Collection::~USpawnable_Mesh_Collection() {}
// End Class USpawnable_Mesh_Collection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Data_Spawnable_Mesh_Collection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnable_Mesh_Collection, USpawnable_Mesh_Collection::StaticClass, TEXT("USpawnable_Mesh_Collection"), &Z_Registration_Info_UClass_USpawnable_Mesh_Collection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnable_Mesh_Collection), 3283703222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Data_Spawnable_Mesh_Collection_h_603138308(TEXT("/Script/ProceduralLandscape"),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Data_Spawnable_Mesh_Collection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Data_Spawnable_Mesh_Collection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
