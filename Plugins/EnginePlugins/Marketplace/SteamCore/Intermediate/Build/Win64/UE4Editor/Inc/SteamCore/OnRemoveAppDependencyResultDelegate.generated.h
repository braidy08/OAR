// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoveAppDependencyResult;
#ifdef STEAMCORE_OnRemoveAppDependencyResultDelegate_generated_h
#error "OnRemoveAppDependencyResultDelegate.generated.h already included, missing '#pragma once' in OnRemoveAppDependencyResultDelegate.h"
#endif
#define STEAMCORE_OnRemoveAppDependencyResultDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRemoveAppDependencyResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveAppDependencyResult_Parms \
{ \
	FRemoveAppDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveAppDependencyResult_DelegateWrapper(const FScriptDelegate& OnRemoveAppDependencyResult, FRemoveAppDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveAppDependencyResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveAppDependencyResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRemoveAppDependencyResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
