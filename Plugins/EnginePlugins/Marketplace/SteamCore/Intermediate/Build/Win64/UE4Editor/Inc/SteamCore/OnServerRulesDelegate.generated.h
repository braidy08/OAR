// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerRule;
#ifdef STEAMCORE_OnServerRulesDelegate_generated_h
#error "OnServerRulesDelegate.generated.h already included, missing '#pragma once' in OnServerRulesDelegate.h"
#endif
#define STEAMCORE_OnServerRulesDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnServerRulesDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnServerRules_Parms \
{ \
	TArray<FGameServerRule> Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerRules_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerRules.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnServerRulesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
