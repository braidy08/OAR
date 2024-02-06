// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttachLeaderboardUGCData;
#ifdef STEAMCORE_OnAttachLeaderboardUGCDelegate_generated_h
#error "OnAttachLeaderboardUGCDelegate.generated.h already included, missing '#pragma once' in OnAttachLeaderboardUGCDelegate.h"
#endif
#define STEAMCORE_OnAttachLeaderboardUGCDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnAttachLeaderboardUGCDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAttachLeaderboardUGC_Parms \
{ \
	FAttachLeaderboardUGCData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAttachLeaderboardUGC_DelegateWrapper(const FScriptDelegate& OnAttachLeaderboardUGC, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAttachLeaderboardUGC.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnAttachLeaderboardUGCDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
