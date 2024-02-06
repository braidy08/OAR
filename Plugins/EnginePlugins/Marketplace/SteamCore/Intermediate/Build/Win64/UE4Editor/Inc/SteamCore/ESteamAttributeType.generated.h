// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamAttributeType_generated_h
#error "ESteamAttributeType.generated.h already included, missing '#pragma once' in ESteamAttributeType.h"
#endif
#define STEAMCORE_ESteamAttributeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_ESteamAttributeType_h


#define FOREACH_ENUM_ESTEAMATTRIBUTETYPE(op) \
	op(ESteamAttributeType::NOT_SET) \
	op(ESteamAttributeType::INTEGER) \
	op(ESteamAttributeType::BOOL) \
	op(ESteamAttributeType::STRING) 

enum class ESteamAttributeType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAttributeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
