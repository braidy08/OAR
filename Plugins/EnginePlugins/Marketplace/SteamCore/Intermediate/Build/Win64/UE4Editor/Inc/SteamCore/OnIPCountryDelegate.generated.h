// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIPCountry;
#ifdef STEAMCORE_OnIPCountryDelegate_generated_h
#error "OnIPCountryDelegate.generated.h already included, missing '#pragma once' in OnIPCountryDelegate.h"
#endif
#define STEAMCORE_OnIPCountryDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnIPCountryDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnIPCountry_Parms \
{ \
	FIPCountry Data; \
}; \
static inline void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry, FIPCountry const& Data) \
{ \
	_Script_SteamCore_eventOnIPCountry_Parms Parms; \
	Parms.Data=Data; \
	OnIPCountry.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnIPCountryDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
