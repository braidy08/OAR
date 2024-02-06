// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoreUploaded;
#ifdef STEAMCORE_OnUploadLeaderboardScoreDelegate_generated_h
#error "OnUploadLeaderboardScoreDelegate.generated.h already included, missing '#pragma once' in OnUploadLeaderboardScoreDelegate.h"
#endif
#define STEAMCORE_OnUploadLeaderboardScoreDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnUploadLeaderboardScoreDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUploadLeaderboardScore_Parms \
{ \
	FLeaderboardScoreUploaded Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUploadLeaderboardScore_DelegateWrapper(const FScriptDelegate& OnUploadLeaderboardScore, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUploadLeaderboardScore_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUploadLeaderboardScore.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnUploadLeaderboardScoreDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
