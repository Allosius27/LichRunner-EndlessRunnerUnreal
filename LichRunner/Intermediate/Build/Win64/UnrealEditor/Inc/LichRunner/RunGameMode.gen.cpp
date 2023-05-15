// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/GameModes/RunGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunGameMode() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunGameMode_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	LICHRUNNER_API UClass* Z_Construct_UClass_ATile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ARunGameMode::execOnTileExited)
	{
		P_GET_OBJECT(ATile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTileExited(Z_Param_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunGameMode::execCreateTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTile();
		P_NATIVE_END;
	}
	void ARunGameMode::StaticRegisterNativesARunGameMode()
	{
		UClass* Class = ARunGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTile", &ARunGameMode::execCreateTile },
			{ "OnTileExited", &ARunGameMode::execOnTileExited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunGameMode_CreateTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_CreateTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game World" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_CreateTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "CreateTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_CreateTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_CreateTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_CreateTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunGameMode_CreateTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics
	{
		struct RunGameMode_eventOnTileExited_Parms
		{
			ATile* tile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunGameMode_eventOnTileExited_Parms, tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game World" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "OnTileExited", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::RunGameMode_eventOnTileExited_Parms), Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_OnTileExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunGameMode_OnTileExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunGameMode);
	UClass* Z_Construct_UClass_ARunGameMode_NoRegister()
	{
		return ARunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTilesToSpawnCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitTilesToSpawnCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSpawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunGameMode_CreateTile, "CreateTile" }, // 1329565356
		{ &Z_Construct_UFunction_ARunGameMode_OnTileExited, "OnTileExited" }, // 687313644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/RunGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_InitTilesToSpawnCount_MetaData[] = {
		{ "Category", "Inspector | Game World" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_InitTilesToSpawnCount = { "InitTilesToSpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, InitTilesToSpawnCount), METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_InitTilesToSpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_InitTilesToSpawnCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_TileClass_MetaData[] = {
		{ "Category", "Protected | Game World" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, TileClass), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_TileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_TileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_CurrentSpawnTransform_MetaData[] = {
		{ "Category", "Protected | Game World" },
		{ "ModuleRelativePath", "Public/GameModes/RunGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_CurrentSpawnTransform = { "CurrentSpawnTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, CurrentSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_CurrentSpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_CurrentSpawnTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_InitTilesToSpawnCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_TileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_CurrentSpawnTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunGameMode_Statics::ClassParams = {
		&ARunGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunGameMode()
	{
		if (!Z_Registration_Info_UClass_ARunGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunGameMode.OuterSingleton, Z_Construct_UClass_ARunGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunGameMode.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ARunGameMode>()
	{
		return ARunGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunGameMode);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunGameMode, ARunGameMode::StaticClass, TEXT("ARunGameMode"), &Z_Registration_Info_UClass_ARunGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunGameMode), 309789378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_2791306646(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
