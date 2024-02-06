// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDownloadClanActivityCountsResult;
#ifdef STEAMCORE_OnDownloadClanActivityCountsDelegate_generated_h
#error "OnDownloadClanActivityCountsDelegate.generated.h already included, missing '#pragma once' in OnDownloadClanActivityCountsDelegate.h"
#endif
#define STEAMCORE_OnDownloadClanActivityCountsDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadClanActivityCounts_Parms \
{ \
	FDownloadClanActivityCountsResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadClanActivityCounts_DelegateWrapper(const FScriptDelegate& OnDownloadClanActivityCounts, FDownloadClanActivityCountsResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadClanActivityCounts_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadClanActivityCounts.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
