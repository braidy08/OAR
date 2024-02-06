// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventoryEligiblePromoItemDefIDs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryEligiblePromoItemDefIDs() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FSteamInventoryEligiblePromoItemDefIDs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryEligiblePromoItemDefIDs"), sizeof(FSteamInventoryEligiblePromoItemDefIDs), Get_Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryEligiblePromoItemDefIDs>()
{
	return FSteamInventoryEligiblePromoItemDefIDs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs(FSteamInventoryEligiblePromoItemDefIDs::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryEligiblePromoItemDefIDs"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryEligiblePromoItemDefIDs
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryEligiblePromoItemDefIDs()
	{
		UScriptStruct::DeferCppStructOps<FSteamInventoryEligiblePromoItemDefIDs>(FName(TEXT("SteamInventoryEligiblePromoItemDefIDs")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryEligiblePromoItemDefIDs;
	struct Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEligiblePromoItemDefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEligiblePromoItemDefs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedData_MetaData[];
#endif
		static void NewProp_bCachedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventoryEligiblePromoItemDefIDs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryEligiblePromoItemDefIDs>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryEligiblePromoItemDefIDs" },
		{ "ModuleRelativePath", "Public/SteamInventoryEligiblePromoItemDefIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryEligiblePromoItemDefIDs" },
		{ "ModuleRelativePath", "Public/SteamInventoryEligiblePromoItemDefIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryEligiblePromoItemDefIDs" },
		{ "ModuleRelativePath", "Public/SteamInventoryEligiblePromoItemDefIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs = { "NumEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, NumEligiblePromoItemDefs), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryEligiblePromoItemDefIDs" },
		{ "ModuleRelativePath", "Public/SteamInventoryEligiblePromoItemDefIDs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit(void* Obj)
	{
		((FSteamInventoryEligiblePromoItemDefIDs*)Obj)->bCachedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamInventoryEligiblePromoItemDefIDs), &Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryEligiblePromoItemDefIDs",
		sizeof(FSteamInventoryEligiblePromoItemDefIDs),
		alignof(FSteamInventoryEligiblePromoItemDefIDs),
		Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryEligiblePromoItemDefIDs"), sizeof(FSteamInventoryEligiblePromoItemDefIDs), Get_Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Hash() { return 2367437138U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif