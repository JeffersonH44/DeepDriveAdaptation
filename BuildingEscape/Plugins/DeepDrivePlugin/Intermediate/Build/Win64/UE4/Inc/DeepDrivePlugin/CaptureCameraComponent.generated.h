// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef DEEPDRIVEPLUGIN_CaptureCameraComponent_generated_h
#error "CaptureCameraComponent.generated.h already included, missing '#pragma once' in CaptureCameraComponent.h"
#endif
#define DEEPDRIVEPLUGIN_CaptureCameraComponent_generated_h

#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeactivateCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(Z_Param_RenderTarget); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeactivateCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCapturing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateCapturing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Initialize(Z_Param_RenderTarget); \
		P_NATIVE_END; \
	}


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureCameraComponent(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UCaptureCameraComponent(); \
public: \
	DECLARE_CLASS(UCaptureCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCaptureCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCaptureCameraComponent(); \
	friend DEEPDRIVEPLUGIN_API class UClass* Z_Construct_UClass_UCaptureCameraComponent(); \
public: \
	DECLARE_CLASS(UCaptureCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DeepDrivePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCaptureCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureCameraComponent(UCaptureCameraComponent&&); \
	NO_API UCaptureCameraComponent(const UCaptureCameraComponent&); \
public:


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureCameraComponent(UCaptureCameraComponent&&); \
	NO_API UCaptureCameraComponent(const UCaptureCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCaptureCameraComponent)


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_SceneCapture() { return STRUCT_OFFSET(UCaptureCameraComponent, m_SceneCapture); }


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_16_PROLOG
#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_RPC_WRAPPERS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_INCLASS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Plugins_DeepDrivePlugin_Source_DeepDrivePlugin_Public_Capture_CaptureCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
