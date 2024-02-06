// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_OnControllerChangedCallbackDelegate_generated_h
#error "OnControllerChangedCallbackDelegate.generated.h already included, missing '#pragma once' in OnControllerChangedCallbackDelegate.h"
#endif
#define STEAMCORE_OnControllerChangedCallbackDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnControllerChangedCallbackDelegate_h_5_DELEGATE \
struct _Script_SteamCore_eventOnControllerChangedCallback_Parms \
{ \
	bool bIsConnected; \
	int32 UserId; \
}; \
static inline void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId) \
{ \
	_Script_SteamCore_eventOnControllerChangedCallback_Parms Parms; \
	Parms.bIsConnected=bIsConnected ? true : false; \
	Parms.UserId=UserId; \
	OnControllerChangedCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnControllerChangedCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
