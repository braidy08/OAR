// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageUnsubscribePublishedFileResult;
#ifdef STEAMCORE_OnRemoteStorageUnsubscribePublishedFileResultDelegate_generated_h
#error "OnRemoteStorageUnsubscribePublishedFileResultDelegate.generated.h already included, missing '#pragma once' in OnRemoteStorageUnsubscribePublishedFileResultDelegate.h"
#endif
#define STEAMCORE_OnRemoteStorageUnsubscribePublishedFileResultDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRemoteStorageUnsubscribePublishedFileResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageUnsubscribePublishedFileResult Data; \
}; \
static inline void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& Data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms; \
	Parms.Data=Data; \
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRemoteStorageUnsubscribePublishedFileResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS