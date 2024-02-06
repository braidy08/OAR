// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNumberOfCurrentPlayers;
#ifdef STEAMCORE_OnGetNumberOfCurrentPlayersDelegate_generated_h
#error "OnGetNumberOfCurrentPlayersDelegate.generated.h already included, missing '#pragma once' in OnGetNumberOfCurrentPlayersDelegate.h"
#endif
#define STEAMCORE_OnGetNumberOfCurrentPlayersDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGetNumberOfCurrentPlayersDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms \
{ \
	FNumberOfCurrentPlayers Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetNumberOfCurrentPlayers_DelegateWrapper(const FScriptDelegate& OnGetNumberOfCurrentPlayers, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetNumberOfCurrentPlayers.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGetNumberOfCurrentPlayersDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
