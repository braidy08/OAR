// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSPolicyResponse;
#ifdef STEAMCORE_OnGSPolicyResponseDelegate_generated_h
#error "OnGSPolicyResponseDelegate.generated.h already included, missing '#pragma once' in OnGSPolicyResponseDelegate.h"
#endif
#define STEAMCORE_OnGSPolicyResponseDelegate_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGSPolicyResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSPolicyResponse_Parms \
{ \
	FGSPolicyResponse Data; \
}; \
static inline void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data) \
{ \
	_Script_SteamCore_eventOnGSPolicyResponse_Parms Parms; \
	Parms.Data=Data; \
	OnGSPolicyResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_OnGSPolicyResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
