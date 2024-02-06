// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSetPersonaNameResponse;
#ifdef STEAMCORE_OnSetPersonaNameDelegate_generated_h
#error "OnSetPersonaNameDelegate.generated.h already included, missing '#pragma once' in OnSetPersonaNameDelegate.h"
#endif
#define STEAMCORE_OnSetPersonaNameDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnSetPersonaNameDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSetPersonaName_Parms \
{ \
	FSetPersonaNameResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSetPersonaName_DelegateWrapper(const FScriptDelegate& OnSetPersonaName, FSetPersonaNameResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSetPersonaName_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSetPersonaName.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnSetPersonaNameDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS