// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequestUserStatsData;
#ifdef STEAMCORE_OnRequestUserStatsDelegate_generated_h
#error "OnRequestUserStatsDelegate.generated.h already included, missing '#pragma once' in OnRequestUserStatsDelegate.h"
#endif
#define STEAMCORE_OnRequestUserStatsDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestUserStatsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestUserStats_Parms \
{ \
	FRequestUserStatsData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestUserStats_DelegateWrapper(const FScriptDelegate& OnRequestUserStats, FRequestUserStatsData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestUserStats_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestUserStats.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestUserStatsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
