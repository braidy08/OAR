// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetOPFSettingsResult;
#ifdef STEAMCORE_OnGetOPFSettingsResultDelegate_generated_h
#error "OnGetOPFSettingsResultDelegate.generated.h already included, missing '#pragma once' in OnGetOPFSettingsResultDelegate.h"
#endif
#define STEAMCORE_OnGetOPFSettingsResultDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGetOPFSettingsResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetOPFSettingsResult_Parms \
{ \
	FGetOPFSettingsResult Data; \
}; \
static inline void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FGetOPFSettingsResult const& Data) \
{ \
	_Script_SteamCore_eventOnGetOPFSettingsResult_Parms Parms; \
	Parms.Data=Data; \
	OnGetOPFSettingsResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGetOPFSettingsResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS