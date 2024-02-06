// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreAsyncActionListenForControllerChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAsyncActionListenForControllerChange() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreAsyncActionListenForControllerChange::execHandleCallback)
	{
		P_GET_UBOOL(Z_Param_bIsConnected);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlatformUserId);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_bIsConnected,Z_Param_PlatformUserId,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAsyncActionListenForControllerChange**)Z_Param__Result=USteamCoreAsyncActionListenForControllerChange::ListenForControllerChange(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USteamCoreAsyncActionListenForControllerChange::StaticRegisterNativesUSteamCoreAsyncActionListenForControllerChange()
	{
		UClass* Class = USteamCoreAsyncActionListenForControllerChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreAsyncActionListenForControllerChange::execHandleCallback },
			{ "ListenForControllerChange", &USteamCoreAsyncActionListenForControllerChange::execListenForControllerChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics
	{
		struct SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms
		{
			bool bIsConnected;
			int32 PlatformUserId;
			int32 UserId;
		};
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformUserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms*)Obj)->bIsConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, PlatformUserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAsyncActionListenForControllerChange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreAsyncActionListenForControllerChange_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics
	{
		struct SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms
		{
			UObject* WorldContextObject;
			USteamCoreAsyncActionListenForControllerChange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAsyncActionListenForControllerChange.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, nullptr, "ListenForControllerChange", nullptr, nullptr, sizeof(SteamCoreAsyncActionListenForControllerChange_eventListenForControllerChange_Parms), Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_NoRegister()
	{
		return USteamCoreAsyncActionListenForControllerChange::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_HandleCallback, "HandleCallback" }, // 285136738
		{ &Z_Construct_UFunction_USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange, "ListenForControllerChange" }, // 2324044771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAsyncActionListenForControllerChange.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAsyncActionListenForControllerChange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreAsyncActionListenForControllerChange" },
		{ "ModuleRelativePath", "Public/SteamCoreAsyncActionListenForControllerChange.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreAsyncActionListenForControllerChange, OnControllerChanged), Z_Construct_UDelegateFunction_SteamCore_OnControllerChangedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncActionListenForControllerChange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::ClassParams = {
		&USteamCoreAsyncActionListenForControllerChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAsyncActionListenForControllerChange, 3734776428);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreAsyncActionListenForControllerChange>()
	{
		return USteamCoreAsyncActionListenForControllerChange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAsyncActionListenForControllerChange(Z_Construct_UClass_USteamCoreAsyncActionListenForControllerChange, &USteamCoreAsyncActionListenForControllerChange::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreAsyncActionListenForControllerChange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAsyncActionListenForControllerChange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
