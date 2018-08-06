// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DeepDrivePluginPrivatePCH.h"
#include "Public/DeepDriveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeepDriveData() {}
// Cross Module References
	DEEPDRIVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveControlData();
	UPackage* Z_Construct_UPackage__Script_DeepDrivePlugin();
	DEEPDRIVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveDataOut();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FDeepDriveControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEEPDRIVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDeepDriveControlData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeepDriveControlData, Z_Construct_UPackage__Script_DeepDrivePlugin(), TEXT("DeepDriveControlData"), sizeof(FDeepDriveControlData), Get_Z_Construct_UScriptStruct_FDeepDriveControlData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDeepDriveControlData(FDeepDriveControlData::StaticStruct, TEXT("/Script/DeepDrivePlugin"), TEXT("DeepDriveControlData"), false, nullptr, nullptr);
static struct FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveControlData
{
	FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveControlData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DeepDriveControlData")),new UScriptStruct::TCppStructOps<FDeepDriveControlData>);
	}
} ScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveControlData;
	UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDeepDriveControlData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DeepDrivePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DeepDriveControlData"), sizeof(FDeepDriveControlData), Get_Z_Construct_UScriptStruct_FDeepDriveControlData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeepDriveControlData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldReset_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewProp_ShouldReset_SetBit = [](void* Obj){ ((FDeepDriveControlData*)Obj)->ShouldReset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldReset = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDeepDriveControlData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldReset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldReset_MetaData, ARRAY_COUNT(NewProp_ShouldReset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGameDriving_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewProp_IsGameDriving_SetBit = [](void* Obj){ ((FDeepDriveControlData*)Obj)->IsGameDriving = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGameDriving = { UE4CodeGen_Private::EPropertyClass::Bool, "IsGameDriving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDeepDriveControlData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsGameDriving_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsGameDriving_MetaData, ARRAY_COUNT(NewProp_IsGameDriving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveControlData, Handbrake), METADATA_PARAMS(NewProp_Handbrake_MetaData, ARRAY_COUNT(NewProp_Handbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake = { UE4CodeGen_Private::EPropertyClass::Float, "Brake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveControlData, Brake), METADATA_PARAMS(NewProp_Brake_MetaData, ARRAY_COUNT(NewProp_Brake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveControlData, Throttle), METADATA_PARAMS(NewProp_Throttle_MetaData, ARRAY_COUNT(NewProp_Throttle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering = { UE4CodeGen_Private::EPropertyClass::Float, "Steering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveControlData, Steering), METADATA_PARAMS(NewProp_Steering_MetaData, ARRAY_COUNT(NewProp_Steering_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldReset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsGameDriving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Steering,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DeepDriveControlData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDeepDriveControlData),
				alignof(FDeepDriveControlData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDeepDriveControlData_CRC() { return 2024333866U; }
class UScriptStruct* FDeepDriveDataOut::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEEPDRIVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDeepDriveDataOut_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeepDriveDataOut, Z_Construct_UPackage__Script_DeepDrivePlugin(), TEXT("DeepDriveDataOut"), sizeof(FDeepDriveDataOut), Get_Z_Construct_UScriptStruct_FDeepDriveDataOut_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDeepDriveDataOut(FDeepDriveDataOut::StaticStruct, TEXT("/Script/DeepDrivePlugin"), TEXT("DeepDriveDataOut"), false, nullptr, nullptr);
static struct FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveDataOut
{
	FScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveDataOut()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DeepDriveDataOut")),new UScriptStruct::TCppStructOps<FDeepDriveDataOut>);
	}
} ScriptStruct_DeepDrivePlugin_StaticRegisterNativesFDeepDriveDataOut;
	UScriptStruct* Z_Construct_UScriptStruct_FDeepDriveDataOut()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDeepDriveDataOut_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DeepDrivePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DeepDriveDataOut"), sizeof(FDeepDriveDataOut), Get_Z_Construct_UScriptStruct_FDeepDriveDataOut_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
				{ "ToolTip", "Unreal -> (Python) Client" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeepDriveDataOut>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LapNumber_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LapNumber = { UE4CodeGen_Private::EPropertyClass::Int, "LapNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, LapNumber), METADATA_PARAMS(NewProp_LapNumber_MetaData, ARRAY_COUNT(NewProp_LapNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCenterOfLane_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCenterOfLane = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceToCenterOfLane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, DistanceToCenterOfLane), METADATA_PARAMS(NewProp_DistanceToCenterOfLane_MetaData, ARRAY_COUNT(NewProp_DistanceToCenterOfLane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongRoute_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongRoute = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceAlongRoute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, DistanceAlongRoute), METADATA_PARAMS(NewProp_DistanceAlongRoute_MetaData, ARRAY_COUNT(NewProp_DistanceAlongRoute_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewProp_Handbrake_SetBit = [](void* Obj){ ((FDeepDriveDataOut*)Obj)->Handbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Handbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "Handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDeepDriveDataOut), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Handbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Handbrake_MetaData, ARRAY_COUNT(NewProp_Handbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake = { UE4CodeGen_Private::EPropertyClass::Float, "Brake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Brake), METADATA_PARAMS(NewProp_Brake_MetaData, ARRAY_COUNT(NewProp_Brake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Throttle), METADATA_PARAMS(NewProp_Throttle_MetaData, ARRAY_COUNT(NewProp_Throttle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering = { UE4CodeGen_Private::EPropertyClass::Float, "Steering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Steering), METADATA_PARAMS(NewProp_Steering_MetaData, ARRAY_COUNT(NewProp_Steering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsResetting_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewProp_IsResetting_SetBit = [](void* Obj){ ((FDeepDriveDataOut*)Obj)->IsResetting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsResetting = { UE4CodeGen_Private::EPropertyClass::Bool, "IsResetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDeepDriveDataOut), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsResetting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsResetting_MetaData, ARRAY_COUNT(NewProp_IsResetting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGameDriving_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			auto NewProp_IsGameDriving_SetBit = [](void* Obj){ ((FDeepDriveDataOut*)Obj)->IsGameDriving = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGameDriving = { UE4CodeGen_Private::EPropertyClass::Bool, "IsGameDriving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDeepDriveDataOut), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsGameDriving_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsGameDriving_MetaData, ARRAY_COUNT(NewProp_IsGameDriving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimension = { UE4CodeGen_Private::EPropertyClass::Struct, "Dimension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Dimension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Dimension_MetaData, ARRAY_COUNT(NewProp_Dimension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularAcceleration_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularAcceleration_MetaData, ARRAY_COUNT(NewProp_AngularAcceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularVelocity_MetaData, ARRAY_COUNT(NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/DeepDriveData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDeepDriveDataOut, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LapNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceToCenterOfLane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceAlongRoute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Steering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsResetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsGameDriving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dimension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularAcceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DeepDrivePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DeepDriveDataOut",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDeepDriveDataOut),
				alignof(FDeepDriveDataOut),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDeepDriveDataOut_CRC() { return 2207394256U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
