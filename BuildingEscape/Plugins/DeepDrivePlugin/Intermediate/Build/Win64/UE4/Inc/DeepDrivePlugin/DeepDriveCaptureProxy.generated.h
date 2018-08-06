// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDeepDriveDataOut;
#ifdef DEEPDRIVEPLUGIN_DeepDriveCaptureProxy_generated_h
#error "DeepDriveCaptureProxy.generated.h already included, missing '#pragma once' in DeepDriveCaptureProxy.h"
#endif
#define DEEPDRIVEPLUGIN_DeepDriveCaptureProxy_generated_h

#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_18_GENERATED_BODY \
	friend DEEPDRIVEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FCaptureCyle(); \
	DEEPDRIVEPLUGIN_API static class UScriptStruct* StaticStruct();


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Capture(); \
		P_NATIVE_END; \
	}


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Capture(); \
		P_NATIVE_END; \
	}


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_EVENT_PARMS \
	struct DeepDriveCaptureProxy_eventBeginCapture_Parms \
	{ \
		FDeepDriveDataOut ReturnValue; \
	};


extern DEEPDRIVEPLUGIN_API  FName DEEPDRIVEPLUGIN_BeginCapture;
#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS
#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADeepDriveCaptureProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveCaptureProxy(); \
	public: \
	DECLARE_CLASS(ADeepDriveCaptureProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveCaptureProxy) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesADeepDriveCaptureProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveCaptureProxy(); \
	public: \
	DECLARE_CLASS(ADeepDriveCaptureProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveCaptureProxy) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeepDriveCaptureProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeepDriveCaptureProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeepDriveCaptureProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeepDriveCaptureProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeepDriveCaptureProxy(ADeepDriveCaptureProxy&&); \
	NO_API ADeepDriveCaptureProxy(const ADeepDriveCaptureProxy&); \
public:


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeepDriveCaptureProxy(ADeepDriveCaptureProxy&&); \
	NO_API ADeepDriveCaptureProxy(const ADeepDriveCaptureProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeepDriveCaptureProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeepDriveCaptureProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeepDriveCaptureProxy)


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET
#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_24_PROLOG \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_EVENT_PARMS


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS_NO_PURE_DECLS \
	deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID deepdrive_plugin_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
