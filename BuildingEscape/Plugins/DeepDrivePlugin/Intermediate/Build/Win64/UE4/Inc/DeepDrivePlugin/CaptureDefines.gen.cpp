// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/Capture/CaptureDefines.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureDefines() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UEnum* Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
// End Cross Module References
	static UEnum* EDeepDriveCameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType, Z_Construct_UPackage__Script_DeepDrivePlugin(), TEXT("EDeepDriveCameraType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDeepDriveCameraType(EDeepDriveCameraType_StaticEnum, TEXT("/Script/DeepDrivePlugin"), TEXT("EDeepDriveCameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType_CRC() { return 953465585U; }
	UEnum* Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeepDrivePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDeepDriveCameraType"), 0, Get_Z_Construct_UEnum_DeepDrivePlugin_EDeepDriveCameraType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDeepDriveCameraType::DDC_CAMERA_NONE", (int64)EDeepDriveCameraType::DDC_CAMERA_NONE },
				{ "EDeepDriveCameraType::DDC_CAMERA_FRONT", (int64)EDeepDriveCameraType::DDC_CAMERA_FRONT },
				{ "EDeepDriveCameraType::DDC_CAMERA_LEFT", (int64)EDeepDriveCameraType::DDC_CAMERA_LEFT },
				{ "EDeepDriveCameraType::DDC_CAMERA_RIGHT", (int64)EDeepDriveCameraType::DDC_CAMERA_RIGHT },
				{ "EDeepDriveCameraType::DDC_CAMERA_FRONT_LEFT", (int64)EDeepDriveCameraType::DDC_CAMERA_FRONT_LEFT },
				{ "EDeepDriveCameraType::DDC_CAMERA_FRONT_RIGHT", (int64)EDeepDriveCameraType::DDC_CAMERA_FRONT_RIGHT },
				{ "EDeepDriveCameraType::DDC_CAMERA_BACK_LEFT", (int64)EDeepDriveCameraType::DDC_CAMERA_BACK_LEFT },
				{ "EDeepDriveCameraType::DDC_CAMERA_BACK_RIGHT", (int64)EDeepDriveCameraType::DDC_CAMERA_BACK_RIGHT },
				{ "EDeepDriveCameraType::DDC_CAMERA_BACK", (int64)EDeepDriveCameraType::DDC_CAMERA_BACK },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DDC_CAMERA_BACK.DisplayName", "BackCamera" },
				{ "DDC_CAMERA_BACK_LEFT.DisplayName", "BackLeftCamera" },
				{ "DDC_CAMERA_BACK_RIGHT.DisplayName", "BackRightCamera" },
				{ "DDC_CAMERA_FRONT.DisplayName", "FrontCamera" },
				{ "DDC_CAMERA_FRONT_LEFT.DisplayName", "FrontLeftCamera" },
				{ "DDC_CAMERA_FRONT_RIGHT.DisplayName", "FrontRightCamera" },
				{ "DDC_CAMERA_LEFT.DisplayName", "LeftCamera" },
				{ "DDC_CAMERA_NONE.DisplayName", "None" },
				{ "DDC_CAMERA_RIGHT.DisplayName", "RightCamera" },
				{ "ModuleRelativePath", "Public/Capture/CaptureDefines.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDeepDriveCameraType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDeepDriveCameraType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
