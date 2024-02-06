// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebCheatReporting.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebCheatReporting() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebCheatReporting::execEndSecureMultiplayerSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execGetCheatingReports)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReportidMin);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_TimeEnd,Z_Param_TimeBegin,Z_Param_ReportidMin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRemovePlayerGameBan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execReportCheatData)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathAndFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WebCheatURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimeNow);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimeStarted);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimeStopped);
		P_GET_PROPERTY(FStrProperty,Z_Param_CheatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameProcessId);
		P_GET_PROPERTY(FIntProperty,Z_Param_CheatProcessId);
		P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam1);
		P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportCheatData(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_PathAndFileName,Z_Param_WebCheatURL,Z_Param_TimeNow,Z_Param_TimeStarted,Z_Param_TimeStopped,Z_Param_CheatName,Z_Param_GameProcessId,Z_Param_CheatProcessId,Z_Param_CheatParam1,Z_Param_CheatParam2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execReportPlayerCheating)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdReporter);
		P_GET_PROPERTY(FStrProperty,Z_Param_AppData);
		P_GET_UBOOL(Z_Param_bHeuristic);
		P_GET_UBOOL(Z_Param_bDetection);
		P_GET_UBOOL(Z_Param_bPlayerReport);
		P_GET_UBOOL(Z_Param_bNoReportID);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_SuspicionStartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Severity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportPlayerCheating(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_SteamIdReporter,Z_Param_AppData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_GameMode,Z_Param_SuspicionStartTime,Z_Param_Severity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRequestPlayerGameBan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReportID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CheatDescription);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bDelayBan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_ReportID,Z_Param_CheatDescription,Z_Param_Duration,Z_Param_bDelayBan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRequestVacStatusForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestVacStatusForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execStartSecureMultiplayerSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	void UWebCheatReporting::StaticRegisterNativesUWebCheatReporting()
	{
		UClass* Class = UWebCheatReporting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSecureMultiplayerSession", &UWebCheatReporting::execEndSecureMultiplayerSession },
			{ "GetCheatingReports", &UWebCheatReporting::execGetCheatingReports },
			{ "RemovePlayerGameBan", &UWebCheatReporting::execRemovePlayerGameBan },
			{ "ReportCheatData", &UWebCheatReporting::execReportCheatData },
			{ "ReportPlayerCheating", &UWebCheatReporting::execReportPlayerCheating },
			{ "RequestPlayerGameBan", &UWebCheatReporting::execRequestPlayerGameBan },
			{ "RequestVacStatusForUser", &UWebCheatReporting::execRequestVacStatusForUser },
			{ "StartSecureMultiplayerSession", &UWebCheatReporting::execStartSecureMultiplayerSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics
	{
		struct WebCheatReporting_eventEndSecureMultiplayerSession_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString SessionID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "EndSecureMultiplayerSession", nullptr, nullptr, sizeof(WebCheatReporting_eventEndSecureMultiplayerSession_Parms), Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics
	{
		struct WebCheatReporting_eventGetCheatingReports_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 TimeEnd;
			int32 TimeBegin;
			FString ReportidMin;
			bool bIncludeReports;
			bool bIncludeBans;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportidMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportidMin;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, TimeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, TimeBegin), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportidMin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportidMin = { "ReportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, ReportidMin), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportidMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportidMin_MetaData)) };
	void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportidMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "GetCheatingReports", nullptr, nullptr, sizeof(WebCheatReporting_eventGetCheatingReports_Parms), Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics
	{
		struct WebCheatReporting_eventRemovePlayerGameBan_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RemovePlayerGameBan", nullptr, nullptr, sizeof(WebCheatReporting_eventRemovePlayerGameBan_Parms), Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics
	{
		struct WebCheatReporting_eventReportCheatData_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString PathAndFileName;
			FString WebCheatURL;
			FString TimeNow;
			FString TimeStarted;
			FString TimeStopped;
			FString CheatName;
			int32 GameProcessId;
			int32 CheatProcessId;
			FString CheatParam1;
			FString CheatParam2;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathAndFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathAndFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebCheatURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WebCheatURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameProcessId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheatProcessId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatParam1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheatParam1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatParam2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheatParam2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, PathAndFileName), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL = { "WebCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, WebCheatURL), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeNow), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeStarted), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeStopped), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatName), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, GameProcessId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatProcessId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatParam1), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatParam2), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_GameProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatProcessId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportCheatData", nullptr, nullptr, sizeof(WebCheatReporting_eventReportCheatData_Parms), Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportCheatData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics
	{
		struct WebCheatReporting_eventReportPlayerCheating_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString SteamIdReporter;
			FString AppData;
			bool bHeuristic;
			bool bDetection;
			bool bPlayerReport;
			bool bNoReportID;
			int32 GameMode;
			int32 SuspicionStartTime;
			int32 Severity;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIdReporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamIdReporter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppData;
		static void NewProp_bHeuristic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
		static void NewProp_bDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetection;
		static void NewProp_bPlayerReport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
		static void NewProp_bNoReportID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoReportID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuspicionStartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SteamIdReporter), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, AppData), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData_MetaData)) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bHeuristic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bPlayerReport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bNoReportID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, GameMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SuspicionStartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Severity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SuspicionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Severity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportPlayerCheating", nullptr, nullptr, sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics
	{
		struct WebCheatReporting_eventRequestPlayerGameBan_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString ReportID;
			FString CheatDescription;
			int32 Duration;
			bool bDelayBan;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheatDescription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
		static void NewProp_bDelayBan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID = { "ReportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, ReportID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, CheatDescription), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit(void* Obj)
	{
		((WebCheatReporting_eventRequestPlayerGameBan_Parms*)Obj)->bDelayBan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventRequestPlayerGameBan_Parms), &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestPlayerGameBan", nullptr, nullptr, sizeof(WebCheatReporting_eventRequestPlayerGameBan_Parms), Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics
	{
		struct WebCheatReporting_eventRequestVacStatusForUser_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString SessionID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestVacStatusForUser", nullptr, nullptr, sizeof(WebCheatReporting_eventRequestVacStatusForUser_Parms), Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics
	{
		struct WebCheatReporting_eventStartSecureMultiplayerSession_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "StartSecureMultiplayerSession", nullptr, nullptr, sizeof(WebCheatReporting_eventStartSecureMultiplayerSession_Parms), Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister()
	{
		return UWebCheatReporting::StaticClass();
	}
	struct Z_Construct_UClass_UWebCheatReporting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebCheatReporting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebCheatReporting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession, "EndSecureMultiplayerSession" }, // 3426055285
		{ &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports, "GetCheatingReports" }, // 2051666539
		{ &Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan, "RemovePlayerGameBan" }, // 1913288883
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportCheatData, "ReportCheatData" }, // 1133638917
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating, "ReportPlayerCheating" }, // 2693899183
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan, "RequestPlayerGameBan" }, // 847454966
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser, "RequestVacStatusForUser" }, // 632559950
		{ &Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession, "StartSecureMultiplayerSession" }, // 1914424228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebCheatReporting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebCheatReporting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebCheatReporting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebCheatReporting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams = {
		&UWebCheatReporting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebCheatReporting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebCheatReporting, 2428018184);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebCheatReporting>()
	{
		return UWebCheatReporting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebCheatReporting(Z_Construct_UClass_UWebCheatReporting, &UWebCheatReporting::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebCheatReporting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebCheatReporting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
