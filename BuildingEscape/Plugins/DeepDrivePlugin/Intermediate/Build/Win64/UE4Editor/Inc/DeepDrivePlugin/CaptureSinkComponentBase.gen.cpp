// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/CaptureSink/CaptureSinkComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureSinkComponentBase() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureSinkComponentBase_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UCaptureSinkComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
// End Cross Module References
	void UCaptureSinkComponentBase::StaticRegisterNativesUCaptureSinkComponentBase()
	{
	}
	UClass* Z_Construct_UClass_UCaptureSinkComponentBase_NoRegister()
	{
		return UCaptureSinkComponentBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UCaptureSinkComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "CaptureSink/CaptureSinkComponentBase.h" },
				{ "ModuleRelativePath", "Public/CaptureSink/CaptureSinkComponentBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCaptureSinkComponentBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCaptureSinkComponentBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCaptureSinkComponentBase, 4103599271);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCaptureSinkComponentBase(Z_Construct_UClass_UCaptureSinkComponentBase, &UCaptureSinkComponentBase::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("UCaptureSinkComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureSinkComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
