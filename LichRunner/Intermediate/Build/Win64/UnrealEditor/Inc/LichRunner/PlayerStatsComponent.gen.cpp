// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/Actors/Characters/PlayerStatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatsComponent() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_UPlayerStatsComponent_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_UPlayerStatsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
// End Cross Module References
	void UPlayerStatsComponent::StaticRegisterNativesUPlayerStatsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStatsComponent);
	UClass* Z_Construct_UClass_UPlayerStatsComponent_NoRegister()
	{
		return UPlayerStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxManaPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxManaPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxArchenPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArchenPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchenPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArchenPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/Characters/PlayerStatsComponent.h" },
		{ "ModuleRelativePath", "Public/Actors/Characters/PlayerStatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxManaPoints_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxManaPoints = { "MaxManaPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatsComponent, MaxManaPoints), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxManaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxManaPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxArchenPoints_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxArchenPoints = { "MaxArchenPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatsComponent, MaxArchenPoints), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxArchenPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxArchenPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ManaPoints_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ManaPoints = { "ManaPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatsComponent, ManaPoints), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ManaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ManaPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ArchenPoints_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ArchenPoints = { "ArchenPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStatsComponent, ArchenPoints), METADATA_PARAMS(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ArchenPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ArchenPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxManaPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxArchenPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ManaPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_ArchenPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatsComponent_Statics::ClassParams = {
		&UPlayerStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton, Z_Construct_UClass_UPlayerStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<UPlayerStatsComponent>()
	{
		return UPlayerStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatsComponent);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStatsComponent, UPlayerStatsComponent::StaticClass, TEXT("UPlayerStatsComponent"), &Z_Registration_Info_UClass_UPlayerStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStatsComponent), 3103430710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_2753756422(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
