// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiskCaptureSinkComponent() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UDiskCaptureSinkComponent_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UDiskCaptureSinkComponent();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureSinkComponentBase();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UEnum* Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType();
// End Cross Module References
	void UDiskCaptureSinkComponent::StaticRegisterNativesUDiskCaptureSinkComponent()
	{
	}
	UClass* Z_Construct_UClass_UDiskCaptureSinkComponent_NoRegister()
	{
		return UDiskCaptureSinkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDiskCaptureSinkComponent()
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
				{ "IncludePath", "CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
				{ "ModuleRelativePath", "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFileName_MetaData[] = {
				{ "Category", "Destination" },
				{ "ModuleRelativePath", "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseFileName = { UE4CodeGen_Private::EPropertyClass::Str, "BaseFileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDiskCaptureSinkComponent, BaseFileName), METADATA_PARAMS(NewProp_BaseFileName_MetaData, ARRAY_COUNT(NewProp_BaseFileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTypePaths_MetaData[] = {
				{ "Category", "Destination" },
				{ "ModuleRelativePath", "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_CameraTypePaths = { UE4CodeGen_Private::EPropertyClass::Map, "CameraTypePaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDiskCaptureSinkComponent, CameraTypePaths), METADATA_PARAMS(NewProp_CameraTypePaths_MetaData, ARRAY_COUNT(NewProp_CameraTypePaths_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraTypePaths_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Enum, "CameraTypePaths_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraTypePaths_Key_KeyProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraTypePaths_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "CameraTypePaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePathOnLinux_MetaData[] = {
				{ "Category", "Destination" },
				{ "ModuleRelativePath", "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePathOnLinux = { UE4CodeGen_Private::EPropertyClass::Str, "BasePathOnLinux", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDiskCaptureSinkComponent, BasePathOnLinux), METADATA_PARAMS(NewProp_BasePathOnLinux_MetaData, ARRAY_COUNT(NewProp_BasePathOnLinux_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePathOnWindows_MetaData[] = {
				{ "Category", "Destination" },
				{ "ModuleRelativePath", "Public/CaptureSink/DiskCaptureSink/DiskCaptureSinkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePathOnWindows = { UE4CodeGen_Private::EPropertyClass::Str, "BasePathOnWindows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDiskCaptureSinkComponent, BasePathOnWindows), METADATA_PARAMS(NewProp_BasePathOnWindows_MetaData, ARRAY_COUNT(NewProp_BasePathOnWindows_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseFileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTypePaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTypePaths_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTypePaths_Key_KeyProp_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTypePaths_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePathOnLinux,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePathOnWindows,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDiskCaptureSinkComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDiskCaptureSinkComponent::StaticClass,
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
	IMPLEMENT_CLASS(UDiskCaptureSinkComponent, 3085292877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiskCaptureSinkComponent(Z_Construct_UClass_UDiskCaptureSinkComponent, &UDiskCaptureSinkComponent::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("UDiskCaptureSinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiskCaptureSinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
