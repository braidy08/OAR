// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsEnumerateFollowingList;
#ifdef STEAMCORE_OnEnumerateFollowingListAsyncDelegateDelegate_generated_h
#error "OnEnumerateFollowingListAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnEnumerateFollowingListAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnEnumerateFollowingListAsyncDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnEnumerateFollowingListAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms \
{ \
	FFriendsEnumerateFollowingList Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnEnumerateFollowingListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnEnumerateFollowingListAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
