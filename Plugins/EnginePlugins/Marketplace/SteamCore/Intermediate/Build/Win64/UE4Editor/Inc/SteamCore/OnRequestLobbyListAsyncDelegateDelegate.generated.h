// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyMatchList;
#ifdef STEAMCORE_OnRequestLobbyListAsyncDelegateDelegate_generated_h
#error "OnRequestLobbyListAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestLobbyListAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestLobbyListAsyncDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestLobbyListAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms \
{ \
	FLobbyMatchList Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestLobbyListAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
