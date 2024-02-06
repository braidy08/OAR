// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamCoreDeviceFormFactor : uint8;
#ifdef STEAMCORE_RemotePlay_generated_h
#error "RemotePlay.generated.h already included, missing '#pragma once' in RemotePlay.h"
#endif
#define STEAMCORE_RemotePlay_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_SPARSE_DATA
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionSteamID);


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionSteamID);


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemotePlay(); \
	friend struct Z_Construct_UClass_URemotePlay_Statics; \
public: \
	DECLARE_CLASS(URemotePlay, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemotePlay)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURemotePlay(); \
	friend struct Z_Construct_UClass_URemotePlay_Statics; \
public: \
	DECLARE_CLASS(URemotePlay, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemotePlay)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemotePlay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemotePlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemotePlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemotePlay(URemotePlay&&); \
	NO_API URemotePlay(const URemotePlay&); \
public:


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemotePlay(URemotePlay&&); \
	NO_API URemotePlay(const URemotePlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemotePlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemotePlay)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_PRIVATE_PROPERTY_OFFSET
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_10_PROLOG
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_PRIVATE_PROPERTY_OFFSET \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_SPARSE_DATA \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_RPC_WRAPPERS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_INCLASS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_PRIVATE_PROPERTY_OFFSET \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_SPARSE_DATA \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_INCLASS_NO_PURE_DECLS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class URemotePlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_RemotePlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
