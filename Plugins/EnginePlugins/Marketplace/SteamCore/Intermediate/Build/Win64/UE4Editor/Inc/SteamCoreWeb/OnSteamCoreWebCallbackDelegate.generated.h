// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_OnSteamCoreWebCallbackDelegate_generated_h
#error "OnSteamCoreWebCallbackDelegate.generated.h already included, missing '#pragma once' in OnSteamCoreWebCallbackDelegate.h"
#endif
#define STEAMCOREWEB_OnSteamCoreWebCallbackDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebCallbackDelegate_h_5_DELEGATE \
struct _Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms \
{ \
	FString Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamCoreWebCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebCallback, const FString& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamCoreWebCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
