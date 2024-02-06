// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreInputType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>()
	{
		return ESteamCoreInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputType(ESteamCoreInputType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash() { return 2487202217U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputType::k_ESteamInputType_Unknown", (int64)ESteamCoreInputType::k_ESteamInputType_Unknown },
				{ "ESteamCoreInputType::k_ESteamInputType_SteamController", (int64)ESteamCoreInputType::k_ESteamInputType_SteamController },
				{ "ESteamCoreInputType::k_ESteamInputType_XBox360Controller", (int64)ESteamCoreInputType::k_ESteamInputType_XBox360Controller },
				{ "ESteamCoreInputType::k_ESteamInputType_XBoxOneController", (int64)ESteamCoreInputType::k_ESteamInputType_XBoxOneController },
				{ "ESteamCoreInputType::k_ESteamInputType_GenericGamepad", (int64)ESteamCoreInputType::k_ESteamInputType_GenericGamepad },
				{ "ESteamCoreInputType::k_ESteamInputType_PS4Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS4Controller },
				{ "ESteamCoreInputType::k_ESteamInputType_AppleMFiController", (int64)ESteamCoreInputType::k_ESteamInputType_AppleMFiController },
				{ "ESteamCoreInputType::k_ESteamInputType_AndroidController", (int64)ESteamCoreInputType::k_ESteamInputType_AndroidController },
				{ "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair },
				{ "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle },
				{ "ESteamCoreInputType::k_ESteamInputType_SwitchProController", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchProController },
				{ "ESteamCoreInputType::k_ESteamInputType_MobileTouch", (int64)ESteamCoreInputType::k_ESteamInputType_MobileTouch },
				{ "ESteamCoreInputType::k_ESteamInputType_PS3Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS3Controller },
				{ "ESteamCoreInputType::k_ESteamInputType_PS5Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS5Controller },
				{ "ESteamCoreInputType::k_ESteamInputType_SteamDeckController", (int64)ESteamCoreInputType::k_ESteamInputType_SteamDeckController },
				{ "ESteamCoreInputType::k_ESteamInputType_Count", (int64)ESteamCoreInputType::k_ESteamInputType_Count },
				{ "ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue", (int64)ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue },
				{ "ESteamCoreInputType::k_ESteamInputType_MAX", (int64)ESteamCoreInputType::k_ESteamInputType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "k_ESteamInputType_AndroidController.Name", "ESteamCoreInputType::k_ESteamInputType_AndroidController" },
				{ "k_ESteamInputType_AppleMFiController.Name", "ESteamCoreInputType::k_ESteamInputType_AppleMFiController" },
				{ "k_ESteamInputType_Count.Name", "ESteamCoreInputType::k_ESteamInputType_Count" },
				{ "k_ESteamInputType_GenericGamepad.Name", "ESteamCoreInputType::k_ESteamInputType_GenericGamepad" },
				{ "k_ESteamInputType_MAX.Name", "ESteamCoreInputType::k_ESteamInputType_MAX" },
				{ "k_ESteamInputType_MaximumPossibleValue.Name", "ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue" },
				{ "k_ESteamInputType_MobileTouch.Name", "ESteamCoreInputType::k_ESteamInputType_MobileTouch" },
				{ "k_ESteamInputType_PS3Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS3Controller" },
				{ "k_ESteamInputType_PS4Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS4Controller" },
				{ "k_ESteamInputType_PS5Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS5Controller" },
				{ "k_ESteamInputType_SteamController.Name", "ESteamCoreInputType::k_ESteamInputType_SteamController" },
				{ "k_ESteamInputType_SteamDeckController.Name", "ESteamCoreInputType::k_ESteamInputType_SteamDeckController" },
				{ "k_ESteamInputType_SwitchJoyConPair.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair" },
				{ "k_ESteamInputType_SwitchJoyConSingle.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle" },
				{ "k_ESteamInputType_SwitchProController.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchProController" },
				{ "k_ESteamInputType_Unknown.Name", "ESteamCoreInputType::k_ESteamInputType_Unknown" },
				{ "k_ESteamInputType_XBox360Controller.Name", "ESteamCoreInputType::k_ESteamInputType_XBox360Controller" },
				{ "k_ESteamInputType_XBoxOneController.Name", "ESteamCoreInputType::k_ESteamInputType_XBoxOneController" },
				{ "ModuleRelativePath", "Public/ESteamCoreInputType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputType",
				"ESteamCoreInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
