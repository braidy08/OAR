// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequestUserStatsData;
#ifdef STEAMCORE_OnRequestUserStatsAsyncDelegateDelegate_generated_h
#error "OnRequestUserStatsAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestUserStatsAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestUserStatsAsyncDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestUserStatsAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms \
{ \
	FRequestUserStatsData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestUserStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserStatsAsyncDelegate, FRequestUserStatsData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestUserStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestUserStatsAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
