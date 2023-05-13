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
// End Cross Module References
	void ARunGameMode::StaticRegisterNativesARunGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunGameMode);
	UClass* Z_Construct_UClass_ARunGameMode_NoRegister()
	{
		return ARunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunGameMode_Statics::ClassParams = {
		&ARunGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_ARunGameMode, ARunGameMode::StaticClass, TEXT("ARunGameMode"), &Z_Registration_Info_UClass_ARunGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunGameMode), 3484743024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_2355815995(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
