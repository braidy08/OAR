// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVolumeHasChanged;
#ifdef STEAMCORE_OnVolumeHasChangedDelegate_generated_h
#error "OnVolumeHasChangedDelegate.generated.h already included, missing '#pragma once' in OnVolumeHasChangedDelegate.h"
#endif
#define STEAMCORE_OnVolumeHasChangedDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnVolumeHasChangedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnVolumeHasChanged_Parms \
{ \
	FVolumeHasChanged Data; \
}; \
static inline void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data) \
{ \
	_Script_SteamCore_eventOnVolumeHasChanged_Parms Parms; \
	Parms.Data=Data; \
	OnVolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnVolumeHasChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
