// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/SampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleGameMode() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_ASampleGameMode_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ASampleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
// End Cross Module References
	DEFINE_FUNCTION(ASampleGameMode::execIncreasePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreasePoints();
		P_NATIVE_END;
	}
	static FName NAME_ASampleGameMode_OnPointsIncreased = FName(TEXT("OnPointsIncreased"));
	void ASampleGameMode::OnPointsIncreased()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASampleGameMode_OnPointsIncreased),NULL);
	}
	static FName NAME_ASampleGameMode_OnWin = FName(TEXT("OnWin"));
	void ASampleGameMode::OnWin()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASampleGameMode_OnWin),NULL);
	}
	void ASampleGameMode::StaticRegisterNativesASampleGameMode()
	{
		UClass* Class = ASampleGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncreasePoints", &ASampleGameMode::execIncreasePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "IncreasePoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_IncreasePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_IncreasePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "OnPointsIncreased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASampleGameMode_OnWin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleGameMode, nullptr, "OnWin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleGameMode_OnWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASampleGameMode_OnWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASampleGameMode);
	UClass* Z_Construct_UClass_ASampleGameMode_NoRegister()
	{
		return ASampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsToWin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointsToWin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASampleGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASampleGameMode_IncreasePoints, "IncreasePoints" }, // 210319428
		{ &Z_Construct_UFunction_ASampleGameMode_OnPointsIncreased, "OnPointsIncreased" }, // 1406255269
		{ &Z_Construct_UFunction_ASampleGameMode_OnWin, "OnWin" }, // 3826635433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SampleGameMode.h" },
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointsToWin_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointsToWin = { "PointsToWin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASampleGameMode, PointsToWin), METADATA_PARAMS(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointsToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointsToWin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleGameMode_Statics::NewProp_CurrentPoints_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "Public/SampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASampleGameMode_Statics::NewProp_CurrentPoints = { "CurrentPoints", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASampleGameMode, CurrentPoints), METADATA_PARAMS(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_CurrentPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::NewProp_CurrentPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleGameMode_Statics::NewProp_PointsToWin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASampleGameMode_Statics::NewProp_CurrentPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASampleGameMode_Statics::ClassParams = {
		&ASampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASampleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASampleGameMode()
	{
		if (!Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton, Z_Construct_UClass_ASampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASampleGameMode.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ASampleGameMode>()
	{
		return ASampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleGameMode);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASampleGameMode, ASampleGameMode::StaticClass, TEXT("ASampleGameMode"), &Z_Registration_Info_UClass_ASampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASampleGameMode), 674257917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleGameMode_h_1759970628(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_SampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
