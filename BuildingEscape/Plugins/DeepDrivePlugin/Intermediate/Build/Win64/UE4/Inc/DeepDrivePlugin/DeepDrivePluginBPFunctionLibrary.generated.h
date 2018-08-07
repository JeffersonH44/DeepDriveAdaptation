// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEEPDRIVEPLUGIN_DeepDrivePluginBPFunctionLibrary_generated_h
#error "DeepDrivePluginBPFunctionLibrary.generated.h already included, missing '#pragma once' in DeepDrivePluginBPFunctionLibrary.h"
#endif
#define DEEPDRIVEPLUGIN_DeepDrivePluginBPFunctionLibrary_generated_h

#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDeepDrivePluginBPFunctionLibrary::Capture(); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDeepDrivePluginBPFunctionLibrary::Capture(); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeepDrivePluginBPFunctionLibrary(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UDeepDrivePluginBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDeepDrivePluginBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDeepDrivePluginBPFunctionLibrary(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UDeepDrivePluginBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDeepDrivePluginBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeepDrivePluginBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeepDrivePluginBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeepDrivePluginBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeepDrivePluginBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeepDrivePluginBPFunctionLibrary(UDeepDrivePluginBPFunctionLibrary&&); \
	NO_API UDeepDrivePluginBPFunctionLibrary(const UDeepDrivePluginBPFunctionLibrary&); \
public:


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeepDrivePluginBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeepDrivePluginBPFunctionLibrary(UDeepDrivePluginBPFunctionLibrary&&); \
	NO_API UDeepDrivePluginBPFunctionLibrary(const UDeepDrivePluginBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeepDrivePluginBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeepDrivePluginBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeepDrivePluginBPFunctionLibrary)


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_12_PROLOG
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
