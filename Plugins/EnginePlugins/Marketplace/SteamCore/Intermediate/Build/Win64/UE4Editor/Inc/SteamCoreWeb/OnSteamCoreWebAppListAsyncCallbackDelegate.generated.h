// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAppsGetAppList;
#ifdef STEAMCOREWEB_OnSteamCoreWebAppListAsyncCallbackDelegate_generated_h
#error "OnSteamCoreWebAppListAsyncCallbackDelegate.generated.h already included, missing '#pragma once' in OnSteamCoreWebAppListAsyncCallbackDelegate.h"
#endif
#define STEAMCOREWEB_OnSteamCoreWebAppListAsyncCallbackDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebAppListAsyncCallbackDelegate_h_6_DELEGATE \
struct _Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms \
{ \
	TArray<FWebAppsGetAppList> Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamCoreWebAppListAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAppListAsyncCallback, TArray<FWebAppsGetAppList> const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamCoreWebAppListAsyncCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebAppListAsyncCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
