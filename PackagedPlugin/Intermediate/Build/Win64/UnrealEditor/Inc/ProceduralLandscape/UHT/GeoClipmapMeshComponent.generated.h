// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/GeoClipmapMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FGeoCProcMeshTangent;
struct FLinearColor;
#ifdef PROCEDURALLANDSCAPE_GeoClipmapMeshComponent_generated_h
#error "GeoClipmapMeshComponent.generated.h already included, missing '#pragma once' in GeoClipmapMeshComponent.h"
#endif
#define PROCEDURALLANDSCAPE_GeoClipmapMeshComponent_generated_h

#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics; \
	PROCEDURALLANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<struct FGeoCProcMeshTangent>();

#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics; \
	PROCEDURALLANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<struct FGeoCProcMeshVertex>();

#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics; \
	PROCEDURALLANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALLANDSCAPE_API UScriptStruct* StaticStruct<struct FGeoCProcMeshSection>();

#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeoClipmapMeshComponent(); \
	friend struct Z_Construct_UClass_UGeoClipmapMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGeoClipmapMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralLandscape"), NO_API) \
	DECLARE_SERIALIZER(UGeoClipmapMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeoClipmapMeshComponent*>(this); }


#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeoClipmapMeshComponent(UGeoClipmapMeshComponent&&); \
	UGeoClipmapMeshComponent(const UGeoClipmapMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoClipmapMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoClipmapMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoClipmapMeshComponent) \
	NO_API virtual ~UGeoClipmapMeshComponent();


#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_154_PROLOG
#define FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_INCLASS_NO_PURE_DECLS \
	FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALLANDSCAPE_API UClass* StaticClass<class UGeoClipmapMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tired_GitHub_ProceduralLandscapeUE_PackagedPlugin_HostProject_Plugins_ProceduralLandscape_Source_ProceduralLandscape_Public_Component_GeoClipmapMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
