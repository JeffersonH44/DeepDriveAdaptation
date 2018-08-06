// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/DeepDrivePluginBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepDrivePluginBPFunctionLibrary() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary_NoRegister();
	DEEPDRIVEPLUGIN_API UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UFunction* Z_Construct_UFunction_UDeepDrivePluginBPFunctionLibrary_Capture();
// End Cross Module References
	void UDeepDrivePluginBPFunctionLibrary::StaticRegisterNativesUDeepDrivePluginBPFunctionLibrary()
	{
		UClass* Class = UDeepDrivePluginBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Capture", (Native)&UDeepDrivePluginBPFunctionLibrary::execCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDeepDrivePluginBPFunctionLibrary_Capture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DeepDrivePlugin" },
				{ "ModuleRelativePath", "Public/DeepDrivePluginBPFunctionLibrary.h" },
				{ "ToolTip", "Register a capture camera component with DeepDriveCapture" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary, "Capture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary_NoRegister()
	{
		return UDeepDrivePluginBPFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDeepDrivePluginBPFunctionLibrary_Capture, "Capture" }, // 1242746292
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DeepDrivePluginBPFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/DeepDrivePluginBPFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDeepDrivePluginBPFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDeepDrivePluginBPFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UDeepDrivePluginBPFunctionLibrary, 1560751019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeepDrivePluginBPFunctionLibrary(Z_Construct_UClass_UDeepDrivePluginBPFunctionLibrary, &UDeepDrivePluginBPFunctionLibrary::StaticClass, TEXT("/Script/DeepDrivePlugin"), TEXT("UDeepDrivePluginBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeepDrivePluginBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
