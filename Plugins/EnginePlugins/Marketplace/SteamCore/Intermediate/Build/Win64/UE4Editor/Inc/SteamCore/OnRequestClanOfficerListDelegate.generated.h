// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClanOfficerListResponse;
#ifdef STEAMCORE_OnRequestClanOfficerListDelegate_generated_h
#error "OnRequestClanOfficerListDelegate.generated.h already included, missing '#pragma once' in OnRequestClanOfficerListDelegate.h"
#endif
#define STEAMCORE_OnRequestClanOfficerListDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestClanOfficerListDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestClanOfficerList_Parms \
{ \
	FClanOfficerListResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestClanOfficerList_DelegateWrapper(const FScriptDelegate& OnRequestClanOfficerList, FClanOfficerListResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestClanOfficerList_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestClanOfficerList.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestClanOfficerListDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
