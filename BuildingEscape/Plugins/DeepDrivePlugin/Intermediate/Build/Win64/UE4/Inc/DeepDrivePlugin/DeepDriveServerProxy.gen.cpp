// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/Server/DeepDriveServerProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepDriveServerProxy() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveServerProxy_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveServerProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_RegisterCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_ReleaseAgentControl();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_RequestAgentControl();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_SetAgentControlValues();
// End Cross Module References
	static FName NAME_ADeepDriveServerProxy_RegisterCamera = FName(TEXT("RegisterCamera"));
	int32 ADeepDriveServerProxy::RegisterCamera(float FieldOfView, int32 CaptureWidth, int32 CaptureHeight, FVector RelativePosition, FVector RelativeRotation)
	{
		DeepDriveServerProxy_eventRegisterCamera_Parms Parms;
		Parms.FieldOfView=FieldOfView;
		Parms.CaptureWidth=CaptureWidth;
		Parms.CaptureHeight=CaptureHeight;
		Parms.RelativePosition=RelativePosition;
		Parms.RelativeRotation=RelativeRotation;
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveServerProxy_RegisterCamera),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ADeepDriveServerProxy_ReleaseAgentControl = FName(TEXT("ReleaseAgentControl"));
	void ADeepDriveServerProxy::ReleaseAgentControl()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveServerProxy_ReleaseAgentControl),NULL);
	}
	static FName NAME_ADeepDriveServerProxy_RequestAgentControl = FName(TEXT("RequestAgentControl"));
	bool ADeepDriveServerProxy::RequestAgentControl()
	{
		DeepDriveServerProxy_eventRequestAgentControl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveServerProxy_RequestAgentControl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ADeepDriveServerProxy_SetAgentControlValues = FName(TEXT("SetAgentControlValues"));
	void ADeepDriveServerProxy::SetAgentControlValues(float steering, float throttle, float brake, bool handbrake)
	{
		DeepDriveServerProxy_eventSetAgentControlValues_Parms Parms;
		Parms.steering=steering;
		Parms.throttle=throttle;
		Parms.brake=brake;
		Parms.handbrake=handbrake ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveServerProxy_SetAgentControlValues),&Parms);
	}
	void ADeepDriveServerProxy::StaticRegisterNativesADeepDriveServerProxy()
	{
	}
	UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_RegisterCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, RelativeRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, RelativePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureHeight = { UE4CodeGen_Private::EPropertyClass::Int, "CaptureHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, CaptureHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureWidth = { UE4CodeGen_Private::EPropertyClass::Int, "CaptureWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, CaptureWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView = { UE4CodeGen_Private::EPropertyClass::Float, "FieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventRegisterCamera_Parms, FieldOfView), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FieldOfView,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CameraConfiguration" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveServerProxy, "RegisterCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(DeepDriveServerProxy_eventRegisterCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_ReleaseAgentControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveServerProxy, "ReleaseAgentControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_RequestAgentControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DeepDriveServerProxy_eventRequestAgentControl_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DeepDriveServerProxy_eventRequestAgentControl_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveServerProxy, "RequestAgentControl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(DeepDriveServerProxy_eventRequestAgentControl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADeepDriveServerProxy_SetAgentControlValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_handbrake_SetBit = [](void* Obj){ ((DeepDriveServerProxy_eventSetAgentControlValues_Parms*)Obj)->handbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_handbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DeepDriveServerProxy_eventSetAgentControlValues_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_handbrake_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brake = { UE4CodeGen_Private::EPropertyClass::Float, "brake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventSetAgentControlValues_Parms, brake), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throttle = { UE4CodeGen_Private::EPropertyClass::Float, "throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventSetAgentControlValues_Parms, throttle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_steering = { UE4CodeGen_Private::EPropertyClass::Float, "steering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DeepDriveServerProxy_eventSetAgentControlValues_Parms, steering), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_handbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_brake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_throttle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_steering,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Control" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveServerProxy, "SetAgentControlValues", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(DeepDriveServerProxy_eventSetAgentControlValues_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADeepDriveServerProxy_NoRegister()
	{
		return ADeepDriveServerProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ADeepDriveServerProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADeepDriveServerProxy_RegisterCamera, "RegisterCamera" }, // 2728025523
				{ &Z_Construct_UFunction_ADeepDriveServerProxy_ReleaseAgentControl, "ReleaseAgentControl" }, // 2900707092
				{ &Z_Construct_UFunction_ADeepDriveServerProxy_RequestAgentControl, "RequestAgentControl" }, // 485313312
				{ &Z_Construct_UFunction_ADeepDriveServerProxy_SetAgentControlValues, "SetAgentControlValues" }, // 3944736655
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Server/DeepDriveServerProxy.h" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
				{ "Category", "Server" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveServerProxy, Port), METADATA_PARAMS(NewProp_Port_MetaData, ARRAY_COUNT(NewProp_Port_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
				{ "Category", "Server" },
				{ "ModuleRelativePath", "Public/Server/DeepDriveServerProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress = { UE4CodeGen_Private::EPropertyClass::Str, "IPAddress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveServerProxy, IPAddress), METADATA_PARAMS(NewProp_IPAddress_MetaData, ARRAY_COUNT(NewProp_IPAddress_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Port,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IPAddress,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADeepDriveServerProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADeepDriveServerProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ADeepDriveServerProxy, 1885843804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeepDriveServerProxy(Z_Construct_UClass_ADeepDriveServerProxy, &ADeepDriveServerProxy::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("ADeepDriveServerProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeepDriveServerProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
