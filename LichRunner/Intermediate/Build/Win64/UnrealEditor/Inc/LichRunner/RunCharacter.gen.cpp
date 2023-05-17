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
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	LICHRUNNER_API UEnum* Z_Construct_UEnum_LichRunner_ETypePickup();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_UPlayerStatsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARunCharacter::execAddScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scorePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_scorePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execAddKilledEnemies)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_enemiesKilled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKilledEnemies(Z_Param_enemiesKilled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execAddCoins)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_PROPERTY(FIntProperty,Z_Param_scorePoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_effectStats);
		P_GET_ENUM(ETypePickup,Z_Param_typePickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoins(Z_Param_count,Z_Param_scorePoints,Z_Param_effectStats,ETypePickup(Z_Param_typePickup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execCharacterHit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterHit(Z_Param_amount);
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
			{ "AddKilledEnemies", &ARunCharacter::execAddKilledEnemies },
			{ "AddScore", &ARunCharacter::execAddScore },
			{ "CharacterDeath", &ARunCharacter::execCharacterDeath },
			{ "CharacterHit", &ARunCharacter::execCharacterHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacter_AddCoins_Statics
	{
		struct RunCharacter_eventAddCoins_Parms
		{
			int32 count;
			int32 scorePoints;
			float effectStats;
			ETypePickup typePickup;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_scorePoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_effectStats;
		static const UECodeGen_Private::FBytePropertyParams NewProp_typePickup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_typePickup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_scorePoints = { "scorePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, scorePoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_effectStats = { "effectStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, effectStats), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_typePickup = { "typePickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddCoins_Parms, typePickup), Z_Construct_UEnum_LichRunner_ETypePickup, METADATA_PARAMS(nullptr, 0) }; // 629645013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_scorePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddCoins_Statics::NewProp_effectStats,
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
	struct Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics
	{
		struct RunCharacter_eventAddKilledEnemies_Parms
		{
			int32 enemiesKilled;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_enemiesKilled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::NewProp_enemiesKilled = { "enemiesKilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddKilledEnemies_Parms, enemiesKilled), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::NewProp_enemiesKilled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "AddKilledEnemies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::RunCharacter_eventAddKilledEnemies_Parms), Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_AddKilledEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_AddKilledEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_AddScore_Statics
	{
		struct RunCharacter_eventAddScore_Parms
		{
			int32 scorePoints;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_scorePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARunCharacter_AddScore_Statics::NewProp_scorePoints = { "scorePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventAddScore_Parms, scorePoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_AddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddScore_Statics::NewProp_scorePoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "AddScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunCharacter_AddScore_Statics::RunCharacter_eventAddScore_Parms), Z_Construct_UFunction_ARunCharacter_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_AddScore_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics
	{
		struct RunCharacter_eventCharacterHit_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventCharacterHit_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "CharacterHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::RunCharacter_eventCharacterHit_Parms), Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_CharacterHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_CharacterHit_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStatsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastFromComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CastFromComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastProjectileManaCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastProjectileManaCost;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectilesClass_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilesClass_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectilesClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaCoinsStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ManaCoinsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchenCoinsStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ArchenCoinsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthCoinsStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HealthCoinsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesKilledCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemiesKilledCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacter_AddCoins, "AddCoins" }, // 4018139077
		{ &Z_Construct_UFunction_ARunCharacter_AddKilledEnemies, "AddKilledEnemies" }, // 3575145403
		{ &Z_Construct_UFunction_ARunCharacter_AddScore, "AddScore" }, // 2877149094
		{ &Z_Construct_UFunction_ARunCharacter_CharacterDeath, "CharacterDeath" }, // 1722143144
		{ &Z_Construct_UFunction_ARunCharacter_CharacterHit, "CharacterHit" }, // 2616735768
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_StatsComponent_MetaData[] = {
		{ "Category", "Inspector | ActorComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_StatsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_StatsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_PlayerStatsComponent_MetaData[] = {
		{ "Category", "Inspector | ActorComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_PlayerStatsComponent = { "PlayerStatsComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, PlayerStatsComponent), Z_Construct_UClass_UPlayerStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_PlayerStatsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_PlayerStatsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastFromComponent_MetaData[] = {
		{ "Category", "Inspector | ActorComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastFromComponent = { "CastFromComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, CastFromComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastFromComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastFromComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastProjectileManaCost_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastProjectileManaCost = { "CastProjectileManaCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, CastProjectileManaCost), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastProjectileManaCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastProjectileManaCost_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass_Inner = { "ProjectilesClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass_MetaData[] = {
		{ "Category", "Inspector | Spawnables" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass = { "ProjectilesClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, ProjectilesClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay = { "DeathDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, DeathDelay), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_ManaCoinsStored_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_ManaCoinsStored = { "ManaCoinsStored", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, ManaCoinsStored), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ManaCoinsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ManaCoinsStored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_ArchenCoinsStored_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_ArchenCoinsStored = { "ArchenCoinsStored", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, ArchenCoinsStored), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ArchenCoinsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_ArchenCoinsStored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_HealthCoinsStored_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_HealthCoinsStored = { "HealthCoinsStored", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, HealthCoinsStored), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_HealthCoinsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_HealthCoinsStored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_EnemiesKilledCount_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_EnemiesKilledCount = { "EnemiesKilledCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, EnemiesKilledCount), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_EnemiesKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_EnemiesKilledCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, Score), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Score_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_StatsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_PlayerStatsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastFromComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_CastProjectileManaCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_ProjectilesClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_DeathDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_ManaCoinsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_ArchenCoinsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_HealthCoinsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_EnemiesKilledCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_Score,
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
		{ Z_Construct_UClass_ARunCharacter, ARunCharacter::StaticClass, TEXT("ARunCharacter"), &Z_Registration_Info_UClass_ARunCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacter), 4283678908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_2499832815(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
