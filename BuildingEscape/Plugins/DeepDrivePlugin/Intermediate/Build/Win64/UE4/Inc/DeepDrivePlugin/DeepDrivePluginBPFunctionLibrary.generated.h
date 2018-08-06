// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEEPDRIVEPLUGIN_DeepDrivePluginBPFunctionLibrary_generated_h
#error "DeepDrivePluginBPFunctionLibrary.generated.h already included, missing '#pragma once' in DeepDrivePluginBPFunctionLibrary.h"
#endif
#define DEEPDRIVEPLUGIN_DeepDrivePluginBPFunctionLibrary_generated_h

#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDeepDrivePluginBPFunctionLibrary::Capture(); \
		P_NATIVE_END; \
	}


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDeepDrivePluginBPFunctionLibrary::Capture(); \
		P_NATIVE_END; \
	}


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDeepDrivePluginBPFunctionLibrary(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary(); \
	public: \
	DECLARE_CLASS(UDeepDrivePluginBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDeepDrivePluginBPFunctionLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUDeepDrivePluginBPFunctionLibrary(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary(); \
	public: \
	DECLARE_CLASS(UDeepDrivePluginBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDeepDrivePluginBPFunctionLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
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


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
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


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_12_PROLOG
#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_DeepDrivePluginBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS