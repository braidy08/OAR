// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryEligiblePromoItemDefIDs;
#ifdef STEAMCORE_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate_generated_h
#error "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS