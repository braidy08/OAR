// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequestPlayersForGameResultCallback;
#ifdef STEAMCORE_RequestPlayersForGameResultDelegateDelegate_generated_h
#error "RequestPlayersForGameResultDelegateDelegate.generated.h already included, missing '#pragma once' in RequestPlayersForGameResultDelegateDelegate.h"
#endif
#define STEAMCORE_RequestPlayersForGameResultDelegateDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RequestPlayersForGameResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms \
{ \
	FRequestPlayersForGameResultCallback Data; \
}; \
static inline void FRequestPlayersForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameResultDelegate, FRequestPlayersForGameResultCallback const& Data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	RequestPlayersForGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RequestPlayersForGameResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
