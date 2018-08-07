// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DEEPDRIVEPLUGIN_DeepDriveServerProxy_generated_h
#error "DeepDriveServerProxy.generated.h already included, missing '#pragma once' in DeepDriveServerProxy.h"
#endif
#define DEEPDRIVEPLUGIN_DeepDriveServerProxy_generated_h

#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_RPC_WRAPPERS
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_EVENT_PARMS \
	struct DeepDriveServerProxy_eventRegisterCamera_Parms \
	{ \
		float FieldOfView; \
		int32 CaptureWidth; \
		int32 CaptureHeight; \
		FVector RelativePosition; \
		FVector RelativeRotation; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DeepDriveServerProxy_eventRegisterCamera_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct DeepDriveServerProxy_eventRequestAgentControl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DeepDriveServerProxy_eventRequestAgentControl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DeepDriveServerProxy_eventSetAgentControlValues_Parms \
	{ \
		float steering; \
		float throttle; \
		float brake; \
		bool handbrake; \
	};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_CALLBACK_WRAPPERS
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeepDriveServerProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveServerProxy(); \
public: \
	DECLARE_CLASS(ADeepDriveServerProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveServerProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADeepDriveServerProxy(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_ADeepDriveServerProxy(); \
public: \
	DECLARE_CLASS(ADeepDriveServerProxy, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADeepDriveServerProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeepDriveServerProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeepDriveServerProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeepDriveServerProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeepDriveServerProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeepDriveServerProxy(ADeepDriveServerProxy&&); \
	NO_API ADeepDriveServerProxy(const ADeepDriveServerProxy&); \
public:


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeepDriveServerProxy(ADeepDriveServerProxy&&); \
	NO_API ADeepDriveServerProxy(const ADeepDriveServerProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeepDriveServerProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeepDriveServerProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeepDriveServerProxy)


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_12_PROLOG \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_EVENT_PARMS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_RPC_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_CALLBACK_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_INCLASS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_CALLBACK_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Server_DeepDriveServerProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
