// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/Controllers/RunPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunPlayerController() {}
// Cross Module References
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunPlayerController_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	LICHRUNNER_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARunPlayerController::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_axisValue);
		P_NATIVE_END;
	}
	void ARunPlayerController::StaticRegisterNativesARunPlayerController()
	{
		UClass* Class = ARunPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveRight", &ARunPlayerController::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics
	{
		struct RunPlayerController_eventMoveRight_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunPlayerController_eventMoveRight_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerMovements" },
		{ "ModuleRelativePath", "Public/Controllers/RunPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunPlayerController, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::RunPlayerController_eventMoveRight_Parms), Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunPlayerController_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunPlayerController_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunPlayerController);
	UClass* Z_Construct_UClass_ARunPlayerController_NoRegister()
	{
		return ARunPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARunPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunPlayerController_MoveRight, "MoveRight" }, // 1964371503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/RunPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/RunPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunPlayerController_Statics::NewProp_RunCharacter_MetaData[] = {
		{ "Category", "Protected | Characters" },
		{ "ModuleRelativePath", "Public/Controllers/RunPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunPlayerController_Statics::NewProp_RunCharacter = { "RunCharacter", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunPlayerController, RunCharacter), Z_Construct_UClass_ARunCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunPlayerController_Statics::NewProp_RunCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunPlayerController_Statics::NewProp_RunCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunPlayerController_Statics::NewProp_RunCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunPlayerController_Statics::ClassParams = {
		&ARunPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunPlayerController()
	{
		if (!Z_Registration_Info_UClass_ARunPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunPlayerController.OuterSingleton, Z_Construct_UClass_ARunPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunPlayerController.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ARunPlayerController>()
	{
		return ARunPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunPlayerController);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunPlayerController, ARunPlayerController::StaticClass, TEXT("ARunPlayerController"), &Z_Registration_Info_UClass_ARunPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunPlayerController), 3459329595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_1952032824(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
