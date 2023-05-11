// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/SampleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleActor() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_ASampleActor_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ASampleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASampleActor::StaticRegisterNativesASampleActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASampleActor);
	UClass* Z_Construct_UClass_ASampleActor_NoRegister()
	{
		return ASampleActor::StaticClass();
	}
	struct Z_Construct_UClass_ASampleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SampleActor.h" },
		{ "ModuleRelativePath", "Public/SampleActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SampleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASampleActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASampleActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASampleActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActor_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASampleActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleActor_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASampleActor_Statics::ClassParams = {
		&ASampleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASampleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASampleActor()
	{
		if (!Z_Registration_Info_UClass_ASampleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASampleActor.OuterSingleton, Z_Construct_UClass_ASampleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASampleActor.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ASampleActor>()
	{
		return ASampleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleActor);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASampleActor, ASampleActor::StaticClass, TEXT("ASampleActor"), &Z_Registration_Info_UClass_ASampleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASampleActor), 1757825738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleActor_h_4241376603(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
