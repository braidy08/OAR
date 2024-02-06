// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
struct FSteamP2PSessionState;
enum class ESteamP2PSend : uint8;
#ifdef STEAMCORE_Networking_generated_h
#error "Networking.generated.h already included, missing '#pragma once' in Networking.h"
#endif
#define STEAMCORE_Networking_generated_h

#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_SPARSE_DATA
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execSendP2PPacket);


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execSendP2PPacket);


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworking(); \
	friend struct Z_Construct_UClass_UNetworking_Statics; \
public: \
	DECLARE_CLASS(UNetworking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworking)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNetworking(); \
	friend struct Z_Construct_UClass_UNetworking_Statics; \
public: \
	DECLARE_CLASS(UNetworking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworking)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworking(UNetworking&&); \
	NO_API UNetworking(const UNetworking&); \
public:


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworking(UNetworking&&); \
	NO_API UNetworking(const UNetworking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworking)


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_PRIVATE_PROPERTY_OFFSET
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_11_PROLOG
#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_PRIVATE_PROPERTY_OFFSET \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_SPARSE_DATA \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_RPC_WRAPPERS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_INCLASS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_PRIVATE_PROPERTY_OFFSET \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_SPARSE_DATA \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_INCLASS_NO_PURE_DECLS \
	testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UNetworking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testamogus_Plugins_EnginePlugins_Marketplace_SteamCore_Source_SteamCore_Public_Networking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
