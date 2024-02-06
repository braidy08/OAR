// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamEconomy.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamEconomy() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamEconomy::execCanTrade)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CanTrade(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_TargetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execFinalizeAssetTransaction)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_TxnId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_TxnId,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetClassInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClassCount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ClassId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetClassInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Language,Z_Param_ClassCount,Z_Param_ClassId,Z_Param_InstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetPrices(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Currency,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetExportedAssetsForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExportedAssetsForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_ContextId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetMarketPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMarketPrices(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execStartAssetTransaction)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_Referer);
		P_GET_UBOOL(Z_Param_bClientAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_AssetId,Z_Param_AssetQuantity,Z_Param_Currency,Z_Param_Language,Z_Param_Ipaddress,Z_Param_Referer,Z_Param_bClientAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execStartTrade)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamIDd);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrade(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamIDd,Z_Param_SteamId2);
		P_NATIVE_END;
	}
	void UWebSteamEconomy::StaticRegisterNativesUWebSteamEconomy()
	{
		UClass* Class = UWebSteamEconomy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrade", &UWebSteamEconomy::execCanTrade },
			{ "FinalizeAssetTransaction", &UWebSteamEconomy::execFinalizeAssetTransaction },
			{ "GetAssetClassInfo", &UWebSteamEconomy::execGetAssetClassInfo },
			{ "GetAssetPrices", &UWebSteamEconomy::execGetAssetPrices },
			{ "GetExportedAssetsForUser", &UWebSteamEconomy::execGetExportedAssetsForUser },
			{ "GetMarketPrices", &UWebSteamEconomy::execGetMarketPrices },
			{ "StartAssetTransaction", &UWebSteamEconomy::execStartAssetTransaction },
			{ "StartTrade", &UWebSteamEconomy::execStartTrade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics
	{
		struct WebSteamEconomy_eventCanTrade_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString TargetId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, TargetId), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "CanTrade", nullptr, nullptr, sizeof(WebSteamEconomy_eventCanTrade_Parms), Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_CanTrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics
	{
		struct WebSteamEconomy_eventFinalizeAssetTransaction_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString TxnId;
			FString Language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TxnId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TxnId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, TxnId), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "FinalizeAssetTransaction", nullptr, nullptr, sizeof(WebSteamEconomy_eventFinalizeAssetTransaction_Parms), Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics
	{
		struct WebSteamEconomy_eventGetAssetClassInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Language;
			int32 ClassCount;
			FString ClassId;
			FString InstanceID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClassCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, ClassCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId = { "ClassId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, ClassId), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceID = { "InstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, InstanceID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetClassInfo", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetAssetClassInfo_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics
	{
		struct WebSteamEconomy_eventGetAssetPrices_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Currency;
			FString Language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetPrices", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetAssetPrices_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics
	{
		struct WebSteamEconomy_eventGetExportedAssetsForUser_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString ContextId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, ContextId), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetExportedAssetsForUser", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetExportedAssetsForUser_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics
	{
		struct WebSteamEconomy_eventGetMarketPrices_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetMarketPrices", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetMarketPrices_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics
	{
		struct WebSteamEconomy_eventStartAssetTransaction_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString AssetId;
			int32 AssetQuantity;
			FString Currency;
			FString Language;
			FString Ipaddress;
			FString Referer;
			bool bClientAuth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ipaddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Referer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Referer;
		static void NewProp_bClientAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AssetId), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetQuantity = { "AssetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AssetQuantity), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Ipaddress), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer = { "Referer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Referer), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer_MetaData)) };
	void Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit(void* Obj)
	{
		((WebSteamEconomy_eventStartAssetTransaction_Parms*)Obj)->bClientAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamEconomy_eventStartAssetTransaction_Parms), &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartAssetTransaction", nullptr, nullptr, sizeof(WebSteamEconomy_eventStartAssetTransaction_Parms), Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics
	{
		struct WebSteamEconomy_eventStartTrade_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamIDd;
			FString SteamId2;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamIDd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamId2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamId2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd = { "SteamIDd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, SteamIDd), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, SteamId2), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartTrade", nullptr, nullptr, sizeof(WebSteamEconomy_eventStartTrade_Parms), Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartTrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister()
	{
		return UWebSteamEconomy::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamEconomy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamEconomy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamEconomy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamEconomy_CanTrade, "CanTrade" }, // 1149350235
		{ &Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction, "FinalizeAssetTransaction" }, // 197798125
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo, "GetAssetClassInfo" }, // 847565796
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices, "GetAssetPrices" }, // 1800593722
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser, "GetExportedAssetsForUser" }, // 1836849408
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices, "GetMarketPrices" }, // 3988046105
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction, "StartAssetTransaction" }, // 180202214
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartTrade, "StartTrade" }, // 1316763474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamEconomy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamEconomy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamEconomy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamEconomy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams = {
		&UWebSteamEconomy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamEconomy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamEconomy, 1438349941);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamEconomy>()
	{
		return UWebSteamEconomy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamEconomy(Z_Construct_UClass_UWebSteamEconomy, &UWebSteamEconomy::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamEconomy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamEconomy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
