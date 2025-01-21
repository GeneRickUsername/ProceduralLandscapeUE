// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralLandscape/Public/Actor/TickInEditorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickInEditorActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_ATickInEditorActor();
PROCEDURALLANDSCAPE_API UClass* Z_Construct_UClass_ATickInEditorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralLandscape();
// End Cross Module References

// Begin Class ATickInEditorActor Function Compute
static FName NAME_ATickInEditorActor_Compute = FName(TEXT("Compute"));
void ATickInEditorActor::Compute()
{
	ProcessEvent(FindFunctionChecked(NAME_ATickInEditorActor_Compute),NULL);
}
struct Z_Construct_UFunction_ATickInEditorActor_Compute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATickInEditorActor, nullptr, "Compute", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATickInEditorActor_Compute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATickInEditorActor Function Compute

// Begin Class ATickInEditorActor
void ATickInEditorActor::StaticRegisterNativesATickInEditorActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATickInEditorActor);
UClass* Z_Construct_UClass_ATickInEditorActor_NoRegister()
{
	return ATickInEditorActor::StaticClass();
}
struct Z_Construct_UClass_ATickInEditorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/TickInEditorActor.h" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Trigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATickInEditorActor_Compute, "Compute" }, // 3384558384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATickInEditorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_SetBit(void* Obj)
{
	((ATickInEditorActor*)Obj)->Trigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATickInEditorActor), &Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trigger_MetaData), NewProp_Trigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATickInEditorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLandscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATickInEditorActor_Statics::ClassParams = {
	&ATickInEditorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATickInEditorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATickInEditorActor()
{
	if (!Z_Registration_Info_UClass_ATickInEditorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATickInEditorActor.OuterSingleton, Z_Construct_UClass_ATickInEditorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATickInEditorActor.OuterSingleton;
}
template<> PROCEDURALLANDSCAPE_API UClass* StaticClass<ATickInEditorActor>()
{
	return ATickInEditorActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATickInEditorActor);
ATickInEditorActor::~ATickInEditorActor() {}
// End Class ATickInEditorActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_TickInEditorActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATickInEditorActor, ATickInEditorActor::StaticClass, TEXT("ATickInEditorActor"), &Z_Registration_Info_UClass_ATickInEditorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATickInEditorActor), 3430710690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_TickInEditorActor_h_860849656(TEXT("/Script/ProceduralLandscape"),
	Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_TickInEditorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Actor_TickInEditorActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
