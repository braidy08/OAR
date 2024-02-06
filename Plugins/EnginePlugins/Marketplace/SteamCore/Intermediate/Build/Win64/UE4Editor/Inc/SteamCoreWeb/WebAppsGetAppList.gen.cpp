// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebAppsGetAppList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAppsGetAppList() {}
// Cross Module References
	STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
class UScriptStruct* FWebAppsGetAppList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCOREWEB_API uint32 Get_Z_Construct_UScriptStruct_FWebAppsGetAppList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAppsGetAppList, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("WebAppsGetAppList"), sizeof(FWebAppsGetAppList), Get_Z_Construct_UScriptStruct_FWebAppsGetAppList_Hash());
	}
	return Singleton;
}
template<> STEAMCOREWEB_API UScriptStruct* StaticStruct<FWebAppsGetAppList>()
{
	return FWebAppsGetAppList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWebAppsGetAppList(FWebAppsGetAppList::StaticStruct, TEXT("/Script/SteamCoreWeb"), TEXT("WebAppsGetAppList"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCoreWeb_StaticRegisterNativesFWebAppsGetAppList
{
	FScriptStruct_SteamCoreWeb_StaticRegisterNativesFWebAppsGetAppList()
	{
		UScriptStruct::DeferCppStructOps<FWebAppsGetAppList>(FName(TEXT("WebAppsGetAppList")));
	}
} ScriptStruct_SteamCoreWeb_StaticRegisterNativesFWebAppsGetAppList;
	struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebAppsGetAppList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAppsGetAppList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WebAppsGetAppList" },
		{ "ModuleRelativePath", "Public/WebAppsGetAppList.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWebAppsGetAppList, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WebAppsGetAppList" },
		{ "ModuleRelativePath", "Public/WebAppsGetAppList.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWebAppsGetAppList, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
		nullptr,
		&NewStructOps,
		"WebAppsGetAppList",
		sizeof(FWebAppsGetAppList),
		alignof(FWebAppsGetAppList),
		Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWebAppsGetAppList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WebAppsGetAppList"), sizeof(FWebAppsGetAppList), Get_Z_Construct_UScriptStruct_FWebAppsGetAppList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWebAppsGetAppList_Hash() { return 2348342540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
