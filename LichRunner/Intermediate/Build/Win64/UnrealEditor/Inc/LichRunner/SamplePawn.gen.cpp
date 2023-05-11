// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/SamplePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamplePawn() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_ASamplePawn_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ASamplePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ASamplePawn::StaticRegisterNativesASamplePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASamplePawn);
	UClass* Z_Construct_UClass_ASamplePawn_NoRegister()
	{
		return ASamplePawn::StaticClass();
	}
	struct Z_Construct_UClass_ASamplePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASamplePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SamplePawn.h" },
		{ "ModuleRelativePath", "Public/SamplePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASamplePawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASamplePawn, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASamplePawn_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASamplePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "SamplePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SamplePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASamplePawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASamplePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamplePawn_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASamplePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamplePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamplePawn_Statics::ClassParams = {
		&ASamplePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASamplePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASamplePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASamplePawn()
	{
		if (!Z_Registration_Info_UClass_ASamplePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamplePawn.OuterSingleton, Z_Construct_UClass_ASamplePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASamplePawn.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ASamplePawn>()
	{
		return ASamplePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASamplePawn);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SamplePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SamplePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASamplePawn, ASamplePawn::StaticClass, TEXT("ASamplePawn"), &Z_Registration_Info_UClass_ASamplePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamplePawn), 3676378294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SamplePawn_h_3569787931(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SamplePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SamplePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
