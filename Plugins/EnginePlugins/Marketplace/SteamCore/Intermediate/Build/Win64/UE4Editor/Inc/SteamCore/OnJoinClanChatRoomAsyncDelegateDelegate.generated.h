// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinClanChatRoomCompletionResult;
#ifdef STEAMCORE_OnJoinClanChatRoomAsyncDelegateDelegate_generated_h
#error "OnJoinClanChatRoomAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnJoinClanChatRoomAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnJoinClanChatRoomAsyncDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms \
{ \
	FJoinClanChatRoomCompletionResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinClanChatRoomAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnJoinClanChatRoomAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
