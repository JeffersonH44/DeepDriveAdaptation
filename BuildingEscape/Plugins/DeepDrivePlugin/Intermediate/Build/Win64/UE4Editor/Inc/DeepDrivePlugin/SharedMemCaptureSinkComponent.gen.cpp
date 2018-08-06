// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemCaptureSinkComponent() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_USharedMemCaptureSinkComponent_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_USharedMemCaptureSinkComponent();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureSinkComponentBase();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
// End Cross Module References
	void USharedMemCaptureSinkComponent::StaticRegisterNativesUSharedMemCaptureSinkComponent()
	{
	}
	UClass* Z_Construct_UClass_USharedMemCaptureSinkComponent_NoRegister()
	{
		return USharedMemCaptureSinkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USharedMemCaptureSinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCaptureSinkComponentBase,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "Category", "DeepDrivePlugin" },
				{ "IncludePath", "CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h" },
				{ "ModuleRelativePath", "Public/CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSharedMemSize_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSharedMemSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSharedMemSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USharedMemCaptureSinkComponent, MaxSharedMemSize), METADATA_PARAMS(NewProp_MaxSharedMemSize_MetaData, ARRAY_COUNT(NewProp_MaxSharedMemSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMemNameWindows_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedMemNameWindows = { UE4CodeGen_Private::EPropertyClass::Str, "SharedMemNameWindows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USharedMemCaptureSinkComponent, SharedMemNameWindows), METADATA_PARAMS(NewProp_SharedMemNameWindows_MetaData, ARRAY_COUNT(NewProp_SharedMemNameWindows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMemNameLinux_MetaData[] = {
				{ "Category", "SharedMem" },
				{ "ModuleRelativePath", "Public/CaptureSink/SharedMemSink/SharedMemCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedMemNameLinux = { UE4CodeGen_Private::EPropertyClass::Str, "SharedMemNameLinux", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USharedMemCaptureSinkComponent, SharedMemNameLinux), METADATA_PARAMS(NewProp_SharedMemNameLinux_MetaData, ARRAY_COUNT(NewProp_SharedMemNameLinux_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSharedMemSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedMemNameWindows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedMemNameLinux,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USharedMemCaptureSinkComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USharedMemCaptureSinkComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(USharedMemCaptureSinkComponent, 1870285855);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USharedMemCaptureSinkComponent(Z_Construct_UClass_USharedMemCaptureSinkComponent, &USharedMemCaptureSinkComponent::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("USharedMemCaptureSinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemCaptureSinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
