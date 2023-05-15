// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLichRunner_init() {}
	LICHRUNNER_API UFunction* Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LichRunner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LichRunner()
	{
		if (!Z_Registration_Info_UPackage__Script_LichRunner.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LichRunner",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xED0CBB33,
				0x62411056,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LichRunner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LichRunner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LichRunner(Z_Construct_UPackage__Script_LichRunner, TEXT("/Script/LichRunner"), Z_Registration_Info_UPackage__Script_LichRunner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED0CBB33, 0x62411056));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
