// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/Capture/DeepDriveCaptureProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepDriveCaptureProxy() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureCyle();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UEnum* Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveCaptureProxy_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveCaptureProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveCaptureProxy_BeginCapture();
	DEEPDRIVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveDataOut();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveCaptureProxy_Capture();
// End Cross Module References
class UScriptStruct* FCaptureCyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEEPDRIVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCaptureCyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureCyle, Z_Construct_UPackage__Script_DeepDrivePlugin(), TEXT("CaptureCyle"), sizeof(FCaptureCyle), Get_Z_Construct_UScriptStruct_FCaptureCyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCaptureCyle(FCaptureCyle::StaticStruct, TEXT("/Script/DeepDrivePlugin"), TEXT("CaptureCyle"), false, nullptr, nullptr);
static struct FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFCaptureCyle
{
	FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFCaptureCyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CaptureCyle")),new UScriptStruct::TCppStructOps<FCaptureCyle>);
	}
} ScriptStruct_DeepDrivePlugin_StaticRegisterNativesFCaptureCyle;
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureCyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCaptureCyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DeepDrivePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CaptureCyle"), sizeof(FCaptureCyle), Get_Z_Construct_UScriptStruct_FCaptureCyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureCyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cameras = { UE4CodeGen_Private::EPropertyClass::Array, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCaptureCyle, Cameras), METADATA_PARAMS(NewProp_Cameras_MetaData, ARRAY_COUNT(NewProp_Cameras_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cameras_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "Cameras", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cameras_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cameras,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cameras_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cameras_Inner_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CaptureCyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCaptureCyle),
				alignof(FCaptureCyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCaptureCyle_CRC() { return 3940764321U; }
	static FName NAME_ADeepDriveCaptureProxy_BeginCapture = FName(TEXT("BeginCapture"));
	FDeepDriveDataOut ADeepDriveCaptureProxy::BeginCapture()
	{
		DeepDriveCaptureProxy_eventBeginCapture_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveCaptureProxy_BeginCapture),&Parms);
		return Parms.ReturnValue;
	}
	void ADeepDriveCaptureProxy::StaticRegisterNativesADeepDriveCaptureProxy()
	{
		UClass* Class = ADeepDriveCaptureProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Capture", (Native)&ADeepDriveCaptureProxy::execCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADeepDriveCaptureProxy_BeginCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DeepDriveCaptureProxy_eventBeginCapture_Parms, ReturnValue), Z_Construct_UScriptStruct_FDeepDriveDataOut, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DeepDrivePlugin" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveCaptureProxy, "BeginCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(DeepDriveCaptureProxy_eventBeginCapture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADeepDriveCaptureProxy_Capture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DeepDrivePlugin" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveCaptureProxy, "Capture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADeepDriveCaptureProxy_NoRegister()
	{
		return ADeepDriveCaptureProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ADeepDriveCaptureProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADeepDriveCaptureProxy_BeginCapture, "BeginCapture" }, // 2291275044
				{ &Z_Construct_UFunction_ADeepDriveCaptureProxy_Capture, "Capture" }, // 1704631108
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Capture/DeepDriveCaptureProxy.h" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureCycles_MetaData[] = {
				{ "Category", "Capturing" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CaptureCycles = { UE4CodeGen_Private::EPropertyClass::Array, "CaptureCycles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveCaptureProxy, CaptureCycles), METADATA_PARAMS(NewProp_CaptureCycles_MetaData, ARRAY_COUNT(NewProp_CaptureCycles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureCycles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CaptureCycles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCaptureCyle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureInterval_MetaData[] = {
				{ "Category", "Capturing" },
				{ "ModuleRelativePath", "Public/Capture/DeepDriveCaptureProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureInterval = { UE4CodeGen_Private::EPropertyClass::Float, "CaptureInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveCaptureProxy, CaptureInterval), METADATA_PARAMS(NewProp_CaptureInterval_MetaData, ARRAY_COUNT(NewProp_CaptureInterval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureCycles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureCycles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureInterval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADeepDriveCaptureProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADeepDriveCaptureProxy::StaticClass,
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
	IMPLEMENT_CLASS(ADeepDriveCaptureProxy, 525623929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeepDriveCaptureProxy(Z_Construct_UClass_ADeepDriveCaptureProxy, &ADeepDriveCaptureProxy::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("ADeepDriveCaptureProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeepDriveCaptureProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
