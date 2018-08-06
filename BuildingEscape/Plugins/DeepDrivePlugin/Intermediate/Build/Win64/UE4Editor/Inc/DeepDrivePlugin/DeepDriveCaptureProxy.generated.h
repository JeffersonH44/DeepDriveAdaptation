// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDeepDriveDataOut;
#ifdef DEEPDRIVEPLUGIN_DeepDriveCaptureProxy_generated_h
#error "DeepDriveCaptureProxy.generated.h already included, missing '#pragma once' in DeepDriveCaptureProxy.h"
#endif
#define DEEPDRIVEPLUGIN_DeepDriveCaptureProxy_generated_h

#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_18_GENERATED_BODY \
	friend DEEPDRIVEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FCaptureCyle(); \
	DEEPDRIVEPLUGIN_API static class UScriptStruct* StaticStruct();


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Capture(); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Capture(); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_EVENT_PARMS \
	struct DeepDriveCaptureProxy_eventBeginCapture_Parms \
	{ \
		FDeepDriveDataOut ReturnValue; \
	};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeepDriveCaptureProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveCaptureProxy(); \
public: \
	DECLARE_CLASS(ADeepDriveCaptureProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveCaptureProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS \
private: \
	static void StaticRegisterNativesADeepDriveCaptureProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveCaptureProxy(); \
public: \
	DECLARE_CLASS(ADeepDriveCaptureProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveCaptureProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_STANDARD_CONSTRUCTORS \
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


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeepDriveCaptureProxy(ADeepDriveCaptureProxy&&); \
	NO_API ADeepDriveCaptureProxy(const ADeepDriveCaptureProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeepDriveCaptureProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeepDriveCaptureProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeepDriveCaptureProxy)


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_24_PROLOG \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_EVENT_PARMS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_CALLBACK_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_DeepDriveCaptureProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
