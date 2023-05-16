// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/Actors/Characters/RunCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunCharacter() {}
// Cross Module References
	LICHRUNNER_API UFunction* Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	LICHRUNNER_API UEnum* Z_Construct_UEnum_LichRunner_ETypePickup();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LichRunner, nullptr, "PlayerDeathSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARunCharacter::execAddCoins)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_ENUM(ETypePickup,Z_Param_typePickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoins(Z_Param_count,ETypePickup(Z_Param_typePickup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterDeath();
		P_NATIVE_END;
	}
	static FName NAME_ARunCharacter_DisableVisual = FName(TEXT("DisableVisual"));
	void ARunCharacter::DisableVisual()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARunCharacter_DisableVisual),NULL);
	}
	void ARunCharacter::StaticRegisterNativesARunCharacter()
	{
		UClass* Class = ARunCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCoins", &ARunCharacter::execAddCoins },
			{ "CharacterDeath", &ARunCharacter::execCharacterDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacter_AddCoins_Statics
	{
		struct RunCharacter_eventAddCoins_Parms
		{
			int32 count;
			ETypePickup typePickup;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FBytePropertyParams NewProp_typePickup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_typePickup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup = { "typePickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, typePickup), Z_Construct_UEnum_LichRunner_ETypePickup, METADATA_PARAMS(nullptr, 0) }; // 2101148545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "AddCoins", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::RunCharacter_eventAddCoins_Parms), Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_AddCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "CharacterDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_CharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_CharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "DisableVisual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_DisableVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_DisableVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunCharacter);
	UClass* Z_Construct_UClass_ARunCharacter_NoRegister()
	{
		return ARunCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAlive_MetaData[];
#endif
		static void NewProp_IsAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YellowCoinsStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_YellowCoinsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCoinsStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BlueCoinsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DispatcherOnPlayerDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DispatcherOnPlayerDeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacter_AddCoins, "AddCoins" }, // 283579583
		{ &Z_Construct_UFunction_ARunCharacter_CharacterDeath, "CharacterDeath" }, // 1722143144
		{ &Z_Construct_UFunction_ARunCharacter_DisableVisual, "DisableVisual" }, // 2478123190
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Characters/RunCharacter.h" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Inspector | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Inspector | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay = { "DeathDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, DeathDelay), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive_SetBit(void* Obj)
	{
		((ARunCharacter*)Obj)->IsAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive = { "IsAlive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARunCharacter), &Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_YellowCoinsStored_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_YellowCoinsStored = { "YellowCoinsStored", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, YellowCoinsStored), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_YellowCoinsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_YellowCoinsStored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_BlueCoinsStored_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_BlueCoinsStored = { "BlueCoinsStored", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, BlueCoinsStored), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_BlueCoinsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_BlueCoinsStored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_DispatcherOnPlayerDeath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_DispatcherOnPlayerDeath = { "DispatcherOnPlayerDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, DispatcherOnPlayerDeath), Z_Construct_UDelegateFunction_LichRunner_PlayerDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DispatcherOnPlayerDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DispatcherOnPlayerDeath_MetaData)) }; // 1901315905
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_IsAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_YellowCoinsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_BlueCoinsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_DispatcherOnPlayerDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacter_Statics::ClassParams = {
		&ARunCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunCharacter()
	{
		if (!Z_Registration_Info_UClass_ARunCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunCharacter.OuterSingleton, Z_Construct_UClass_ARunCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunCharacter.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ARunCharacter>()
	{
		return ARunCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacter);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunCharacter, ARunCharacter::StaticClass, TEXT("ARunCharacter"), &Z_Registration_Info_UClass_ARunCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacter), 1246750795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_3331164514(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
