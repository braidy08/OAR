// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamServerConnectFailure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamServerConnectFailure() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FSteamServerConnectFailure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerConnectFailure, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerConnectFailure"), sizeof(FSteamServerConnectFailure), Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerConnectFailure>()
{
	return FSteamServerConnectFailure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServerConnectFailure(FSteamServerConnectFailure::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServerConnectFailure"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure()
	{
		UScriptStruct::DeferCppStructOps<FSteamServerConnectFailure>(FName(TEXT("SteamServerConnectFailure")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure;
	struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStillRetrying_MetaData[];
#endif
		static void NewProp_bStillRetrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStillRetrying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamServerConnectFailure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerConnectFailure>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerConnectFailure" },
		{ "ModuleRelativePath", "Public/SteamServerConnectFailure.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerConnectFailure, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamServerConnectFailure" },
		{ "ModuleRelativePath", "Public/SteamServerConnectFailure.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit(void* Obj)
	{
		((FSteamServerConnectFailure*)Obj)->bStillRetrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying = { "bStillRetrying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamServerConnectFailure), &Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerConnectFailure",
		sizeof(FSteamServerConnectFailure),
		alignof(FSteamServerConnectFailure),
		Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServerConnectFailure"), sizeof(FSteamServerConnectFailure), Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash() { return 3528225539U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
