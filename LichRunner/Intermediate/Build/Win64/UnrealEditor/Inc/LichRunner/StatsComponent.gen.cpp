// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/Actors/Characters/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_UStatsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
// End Cross Module References
	void UStatsComponent::StaticRegisterNativesUStatsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
	UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
	{
		return UStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAlive_MetaData[];
#endif
		static void NewProp_IsAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAlive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/Characters/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Actors/Characters/StatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealthPoints_MetaData[] = {
		{ "Category", "Inspector | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealthPoints = { "MaxHealthPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsComponent, MaxHealthPoints), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsComponent, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive_MetaData[] = {
		{ "Category", "Public | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Characters/StatsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive_SetBit(void* Obj)
	{
		((UStatsComponent*)Obj)->IsAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive = { "IsAlive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_IsAlive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
		&UStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<UStatsComponent>()
	{
		return UStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_StatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_StatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 3466933048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_StatsComponent_h_3070584482(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Characters_StatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
