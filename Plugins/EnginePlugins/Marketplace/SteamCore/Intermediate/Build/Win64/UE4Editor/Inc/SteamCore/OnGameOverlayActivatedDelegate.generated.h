// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameOverlayActivated;
#ifdef STEAMCORE_OnGameOverlayActivatedDelegate_generated_h
#error "OnGameOverlayActivatedDelegate.generated.h already included, missing '#pragma once' in OnGameOverlayActivatedDelegate.h"
#endif
#define STEAMCORE_OnGameOverlayActivatedDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGameOverlayActivatedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameOverlayActivated_Parms \
{ \
	FGameOverlayActivated Data; \
}; \
static inline void FOnGameOverlayActivated_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverlayActivated, FGameOverlayActivated const& Data) \
{ \
	_Script_SteamCore_eventOnGameOverlayActivated_Parms Parms; \
	Parms.Data=Data; \
	OnGameOverlayActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGameOverlayActivatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
