// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/Control/DeepDriveControlProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepDriveControlProxy() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveControlProxy_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_ADeepDriveControlProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_ADeepDriveControlProxy_OnNewControlData();
	DEEPDRIVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveControlData();
// End Cross Module References
	static FName NAME_ADeepDriveControlProxy_OnNewControlData = FName(TEXT("OnNewControlData"));
	void ADeepDriveControlProxy::OnNewControlData(FDeepDriveControlData const& controlData)
	{
		DeepDriveControlProxy_eventOnNewControlData_Parms Parms;
		Parms.controlData=controlData;
		ProcessEvent(FindFunctionChecked(NAME_ADeepDriveControlProxy_OnNewControlData),&Parms);
	}
	void ADeepDriveControlProxy::StaticRegisterNativesADeepDriveControlProxy()
	{
	}
	UFunction* Z_Construct_UFunction_ADeepDriveControlProxy_OnNewControlData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_controlData = { UE4CodeGen_Private::EPropertyClass::Struct, "controlData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DeepDriveControlProxy_eventOnNewControlData_Parms, controlData), Z_Construct_UScriptStruct_FDeepDriveControlData, METADATA_PARAMS(NewProp_controlData_MetaData, ARRAY_COUNT(NewProp_controlData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controlData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DeepDriveControl" },
				{ "ModuleRelativePath", "Public/Control/DeepDriveControlProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeepDriveControlProxy, "OnNewControlData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(DeepDriveControlProxy_eventOnNewControlData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADeepDriveControlProxy_NoRegister()
	{
		return ADeepDriveControlProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_ADeepDriveControlProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADeepDriveControlProxy_OnNewControlData, "OnNewControlData" }, // 2376551760
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Control/DeepDriveControlProxy.h" },
				{ "ModuleRelativePath", "Public/Control/DeepDriveControlProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSharedMemSize_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/Control/DeepDriveControlProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSharedMemSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSharedMemSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveControlProxy, MaxSharedMemSize), METADATA_PARAMS(NewProp_MaxSharedMemSize_MetaData, ARRAY_COUNT(NewProp_MaxSharedMemSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMemNameWindows_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/Control/DeepDriveControlProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedMemNameWindows = { UE4CodeGen_Private::EPropertyClass::Str, "SharedMemNameWindows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveControlProxy, SharedMemNameWindows), METADATA_PARAMS(NewProp_SharedMemNameWindows_MetaData, ARRAY_COUNT(NewProp_SharedMemNameWindows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMemNameLinux_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/Control/DeepDriveControlProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedMemNameLinux = { UE4CodeGen_Private::EPropertyClass::Str, "SharedMemNameLinux", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ADeepDriveControlProxy, SharedMemNameLinux), METADATA_PARAMS(NewProp_SharedMemNameLinux_MetaData, ARRAY_COUNT(NewProp_SharedMemNameLinux_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSharedMemSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedMemNameWindows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedMemNameLinux,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADeepDriveControlProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADeepDriveControlProxy::StaticClass,
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
	IMPLEMENT_CLASS(ADeepDriveControlProxy, 1336799749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeepDriveControlProxy(Z_Construct_UClass_ADeepDriveControlProxy, &ADeepDriveControlProxy::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("ADeepDriveControlProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeepDriveControlProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
