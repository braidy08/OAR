// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvatarImageLoaded;
#ifdef STEAMCORE_OnAvatarImageLoadedDelegate_generated_h
#error "OnAvatarImageLoadedDelegate.generated.h already included, missing '#pragma once' in OnAvatarImageLoadedDelegate.h"
#endif
#define STEAMCORE_OnAvatarImageLoadedDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnAvatarImageLoadedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAvatarImageLoaded_Parms \
{ \
	FAvatarImageLoaded Data; \
}; \
static inline void FOnAvatarImageLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAvatarImageLoaded, FAvatarImageLoaded const& Data) \
{ \
	_Script_SteamCore_eventOnAvatarImageLoaded_Parms Parms; \
	Parms.Data=Data; \
	OnAvatarImageLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnAvatarImageLoadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
