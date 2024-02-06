// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebInventoryService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInventoryService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebInventoryService::execAddItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(int32,Z_Param_ItemdefId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestID);
		P_GET_UBOOL(Z_Param_bTradeRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_SteamID,Z_Param_bNotify,Z_Param_RequestID,Z_Param_bTradeRestriction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execAddPromoItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemdefId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPromoItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_ItemdefId,Z_Param_ItemPropsJson,Z_Param_SteamID,Z_Param_bNotify,Z_Param_RequestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execConsolidate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Consolidate(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_ItemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execConsumeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_ItemId,Z_Param_Quantity,Z_Param_SteamID,Z_Param_RequestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execExchangeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(int32,Z_Param_MaterialsItemID);
		P_GET_TARRAY(int32,Z_Param_MaterialsQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputItemdefId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExchangeItem(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_MaterialsItemID,Z_Param_MaterialsQuantity,Z_Param_OutputItemdefId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetInventory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInventory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetItemDefs)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ModifiedSince);
		P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
		P_GET_TARRAY(int32,Z_Param_WorkshopIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_CacheMaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemDefs(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_ModifiedSince,Z_Param_ItemdefIDs,Z_Param_WorkshopIDs,Z_Param_CacheMaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetPriceSheet)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_Currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPriceSheet(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Currency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetQuantity)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(int32,Z_Param_ItemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetQuantity(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_ItemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execModifyItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Timestamp);
		P_GET_PROPERTY(FStrProperty,Z_Param_Updates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyItems(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_InputJson,Z_Param_SteamID,Z_Param_Timestamp,Z_Param_Updates);
		P_NATIVE_END;
	}
	void UWebInventoryService::StaticRegisterNativesUWebInventoryService()
	{
		UClass* Class = UWebInventoryService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UWebInventoryService::execAddItem },
			{ "AddPromoItem", &UWebInventoryService::execAddPromoItem },
			{ "Consolidate", &UWebInventoryService::execConsolidate },
			{ "ConsumeItem", &UWebInventoryService::execConsumeItem },
			{ "ExchangeItem", &UWebInventoryService::execExchangeItem },
			{ "GetInventory", &UWebInventoryService::execGetInventory },
			{ "GetItemDefs", &UWebInventoryService::execGetItemDefs },
			{ "GetPriceSheet", &UWebInventoryService::execGetPriceSheet },
			{ "GetQuantity", &UWebInventoryService::execGetQuantity },
			{ "ModifyItems", &UWebInventoryService::execModifyItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebInventoryService_AddItem_Statics
	{
		struct WebInventoryService_eventAddItem_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			TArray<int32> ItemdefId;
			FString ItemPropsJson;
			FString SteamID;
			bool bNotify;
			FString RequestID;
			bool bTradeRestriction;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemdefId_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemdefId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPropsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static void NewProp_bTradeRestriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTradeRestriction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId_Inner = { "ItemdefId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, ItemdefId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, ItemPropsJson), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddItem_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, RequestID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestID_MetaData)) };
	void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddItem_Parms*)Obj)->bTradeRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemdefId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_ItemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_RequestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddItem", nullptr, nullptr, sizeof(WebInventoryService_eventAddItem_Parms), Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics
	{
		struct WebInventoryService_eventAddPromoItem_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 ItemdefId;
			FString ItemPropsJson;
			FString SteamID;
			bool bNotify;
			FString RequestID;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemdefId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPropsJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemdefId = { "ItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, ItemdefId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, ItemPropsJson), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddPromoItem_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddPromoItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, RequestID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemdefId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_ItemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(WebInventoryService_eventAddPromoItem_Parms), Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics
	{
		struct WebInventoryService_eventConsolidate_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			TArray<int32> ItemdefIDs;
			bool bForce;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((WebInventoryService_eventConsolidate_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventConsolidate_Parms), &Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_ItemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "Consolidate", nullptr, nullptr, sizeof(WebInventoryService_eventConsolidate_Parms), Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_Consolidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics
	{
		struct WebInventoryService_eventConsumeItem_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString ItemId;
			FString Quantity;
			FString SteamID;
			FString RequestID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, RequestID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(WebInventoryService_eventConsumeItem_Parms), Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics
	{
		struct WebInventoryService_eventExchangeItem_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			TArray<int32> MaterialsItemID;
			TArray<int32> MaterialsQuantity;
			FString OutputItemdefId;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialsItemID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialsItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialsQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialsQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputItemdefId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputItemdefId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID_Inner = { "MaterialsItemID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID = { "MaterialsItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, MaterialsItemID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, MaterialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId = { "OutputItemdefId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, OutputItemdefId), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_MaterialsQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_OutputItemdefId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ExchangeItem", nullptr, nullptr, sizeof(WebInventoryService_eventExchangeItem_Parms), Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ExchangeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics
	{
		struct WebInventoryService_eventGetInventory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetInventory", nullptr, nullptr, sizeof(WebInventoryService_eventGetInventory_Parms), Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics
	{
		struct WebInventoryService_eventGetItemDefs_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString ModifiedSince;
			TArray<int32> ItemdefIDs;
			TArray<int32> WorkshopIDs;
			int32 CacheMaxAgeSeconds;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedSince_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModifiedSince;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkshopIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkshopIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince = { "ModifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, ModifiedSince), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs_Inner = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs = { "WorkshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, WorkshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ModifiedSince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_ItemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_WorkshopIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetItemDefs", nullptr, nullptr, sizeof(WebInventoryService_eventGetItemDefs_Parms), Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetItemDefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics
	{
		struct WebInventoryService_eventGetPriceSheet_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 Currency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetPriceSheet", nullptr, nullptr, sizeof(WebInventoryService_eventGetPriceSheet_Parms), Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetPriceSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics
	{
		struct WebInventoryService_eventGetQuantity_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			TArray<int32> ItemdefIDs;
			bool bForce;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs_Inner = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs = { "ItemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, ItemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((WebInventoryService_eventGetQuantity_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventGetQuantity_Parms), &Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_ItemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetQuantity", nullptr, nullptr, sizeof(WebInventoryService_eventGetQuantity_Parms), Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics
	{
		struct WebInventoryService_eventModifyItems_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString InputJson;
			FString SteamID;
			int32 Timestamp;
			FString Updates;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Updates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Updates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_InputJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, InputJson), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_InputJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_InputJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates = { "Updates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, Updates), METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_InputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_Updates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ModifyItems", nullptr, nullptr, sizeof(WebInventoryService_eventModifyItems_Parms), Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ModifyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebInventoryService_NoRegister()
	{
		return UWebInventoryService::StaticClass();
	}
	struct Z_Construct_UClass_UWebInventoryService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInventoryService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebInventoryService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInventoryService_AddItem, "AddItem" }, // 1990149124
		{ &Z_Construct_UFunction_UWebInventoryService_AddPromoItem, "AddPromoItem" }, // 851984840
		{ &Z_Construct_UFunction_UWebInventoryService_Consolidate, "Consolidate" }, // 2335141570
		{ &Z_Construct_UFunction_UWebInventoryService_ConsumeItem, "ConsumeItem" }, // 987900134
		{ &Z_Construct_UFunction_UWebInventoryService_ExchangeItem, "ExchangeItem" }, // 2651495331
		{ &Z_Construct_UFunction_UWebInventoryService_GetInventory, "GetInventory" }, // 3277034901
		{ &Z_Construct_UFunction_UWebInventoryService_GetItemDefs, "GetItemDefs" }, // 1840857039
		{ &Z_Construct_UFunction_UWebInventoryService_GetPriceSheet, "GetPriceSheet" }, // 4106068559
		{ &Z_Construct_UFunction_UWebInventoryService_GetQuantity, "GetQuantity" }, // 2085870130
		{ &Z_Construct_UFunction_UWebInventoryService_ModifyItems, "ModifyItems" }, // 2535923870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebInventoryService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebInventoryService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInventoryService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInventoryService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebInventoryService_Statics::ClassParams = {
		&UWebInventoryService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInventoryService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebInventoryService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebInventoryService, 1552018198);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebInventoryService>()
	{
		return UWebInventoryService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebInventoryService(Z_Construct_UClass_UWebInventoryService, &UWebInventoryService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebInventoryService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInventoryService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
