// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/Capture/CaptureCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureCameraComponent() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureCameraComponent_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_UCaptureCameraComponent_ActivateCapturing();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_UCaptureCameraComponent_DeactivateCapturing();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_UCaptureCameraComponent_Initialize();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	DEEPDRIVEPLUGIN_API UEnum* Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType();
// End Cross Module References
	void UCaptureCameraComponent::StaticRegisterNativesUCaptureCameraComponent()
	{
		UClass* Class = UCaptureCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCapturing", (Native)&UCaptureCameraComponent::execActivateCapturing },
			{ "DeactivateCapturing", (Native)&UCaptureCameraComponent::execDeactivateCapturing },
			{ "Initialize", (Native)&UCaptureCameraComponent::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCaptureCameraComponent_ActivateCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capturing" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureCameraComponent, "ActivateCapturing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCaptureCameraComponent_DeactivateCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capturing" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureCameraComponent, "DeactivateCapturing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCaptureCameraComponent_Initialize()
	{
		struct CaptureCameraComponent_eventInitialize_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CaptureCameraComponent_eventInitialize_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capturing" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureCameraComponent, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CaptureCameraComponent_eventInitialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCaptureCameraComponent_NoRegister()
	{
		return UCaptureCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCaptureCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCameraComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCaptureCameraComponent_ActivateCapturing, "ActivateCapturing" }, // 2230855446
				{ &Z_Construct_UFunction_UCaptureCameraComponent_DeactivateCapturing, "DeactivateCapturing" }, // 2456650277
				{ &Z_Construct_UFunction_UCaptureCameraComponent_Initialize, "Initialize" }, // 1772138274
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "Category", "DeepDrivePlugin" },
				{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
				{ "IncludePath", "Capture/CaptureCameraComponent.h" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SceneCapture_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_SceneCapture = { UE4CodeGen_Private::EPropertyClass::Object, "m_SceneCapture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UCaptureCameraComponent, m_SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_m_SceneCapture_MetaData, ARRAY_COUNT(NewProp_m_SceneCapture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRenderTarget_MetaData[] = {
				{ "Category", "CaptureCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "SceneRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCaptureCameraComponent, SceneRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_SceneRenderTarget_MetaData, ARRAY_COUNT(NewProp_SceneRenderTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSceneEveryFrame_MetaData[] = {
				{ "Category", "CaptureCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			auto NewProp_CaptureSceneEveryFrame_SetBit = [](void* Obj){ ((UCaptureCameraComponent*)Obj)->CaptureSceneEveryFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CaptureSceneEveryFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "CaptureSceneEveryFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCaptureCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CaptureSceneEveryFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CaptureSceneEveryFrame_MetaData, ARRAY_COUNT(NewProp_CaptureSceneEveryFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCapturingActive_MetaData[] = {
				{ "Category", "CaptureCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			auto NewProp_IsCapturingActive_SetBit = [](void* Obj){ ((UCaptureCameraComponent*)Obj)->IsCapturingActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCapturingActive = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCapturingActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCaptureCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsCapturingActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsCapturingActive_MetaData, ARRAY_COUNT(NewProp_IsCapturingActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraId_MetaData[] = {
				{ "Category", "CaptureCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraId = { UE4CodeGen_Private::EPropertyClass::Int, "CameraId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UCaptureCameraComponent, CameraId), METADATA_PARAMS(NewProp_CameraId_MetaData, ARRAY_COUNT(NewProp_CameraId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraType_MetaData[] = {
				{ "Category", "CaptureCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraType = { UE4CodeGen_Private::EPropertyClass::Enum, "CameraType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCaptureCameraComponent, CameraType), Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType, METADATA_PARAMS(NewProp_CameraType_MetaData, ARRAY_COUNT(NewProp_CameraType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_SceneCapture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureSceneEveryFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsCapturingActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraType_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCaptureCameraComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCaptureCameraComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCaptureCameraComponent, 2853109381);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCaptureCameraComponent(Z_Construct_UClass_UCaptureCameraComponent, &UCaptureCameraComponent::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("UCaptureCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
