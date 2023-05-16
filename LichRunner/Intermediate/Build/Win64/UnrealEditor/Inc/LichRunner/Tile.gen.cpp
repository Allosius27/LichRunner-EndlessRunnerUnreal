// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LichRunner/Public/Actors/Obstacles/Tile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	LICHRUNNER_API UFunction* Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LichRunner();
	LICHRUNNER_API UClass* Z_Construct_UClass_ATile_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LICHRUNNER_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	LICHRUNNER_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics
	{
		struct _Script_LichRunner_eventPlayerExitTriggerSignature_Parms
		{
			ATile* Tile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LichRunner_eventPlayerExitTriggerSignature_Parms, Tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LichRunner, nullptr, "PlayerExitTriggerSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::_Script_LichRunner_eventPlayerExitTriggerSignature_Parms), Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATile::execOnDestroyTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroyTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execRandomWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_weight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RandomWeight(Z_Param_weight,Z_Param_rangeMin,Z_Param_rangeMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execTileExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TileExited();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSpawnPickup)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_randomWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPickup(Z_Param_randomWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSpawnObstacle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_randomWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnObstacle(Z_Param_randomWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execInit)
	{
		P_GET_UBOOL(Z_Param_createObstacles);
		P_GET_UBOOL(Z_Param_createPickups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_createObstacles,Z_Param_createPickups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetAttachTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachTransform();
		P_NATIVE_END;
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachTransform", &ATile::execGetAttachTransform },
			{ "Init", &ATile::execInit },
			{ "OnDestroyTile", &ATile::execOnDestroyTile },
			{ "OnOverlapBegin", &ATile::execOnOverlapBegin },
			{ "RandomWeight", &ATile::execRandomWeight },
			{ "SpawnObstacle", &ATile::execSpawnObstacle },
			{ "SpawnPickup", &ATile::execSpawnPickup },
			{ "TileExited", &ATile::execTileExited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_GetAttachTransform_Statics
	{
		struct Tile_eventGetAttachTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_GetAttachTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventGetAttachTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetAttachTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetAttachTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetAttachTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetAttachTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetAttachTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_GetAttachTransform_Statics::Tile_eventGetAttachTransform_Parms), Z_Construct_UFunction_ATile_GetAttachTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetAttachTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetAttachTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetAttachTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_GetAttachTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_GetAttachTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_Init_Statics
	{
		struct Tile_eventInit_Parms
		{
			bool createObstacles;
			bool createPickups;
		};
		static void NewProp_createObstacles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createObstacles;
		static void NewProp_createPickups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createPickups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATile_Init_Statics::NewProp_createObstacles_SetBit(void* Obj)
	{
		((Tile_eventInit_Parms*)Obj)->createObstacles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_Init_Statics::NewProp_createObstacles = { "createObstacles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tile_eventInit_Parms), &Z_Construct_UFunction_ATile_Init_Statics::NewProp_createObstacles_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATile_Init_Statics::NewProp_createPickups_SetBit(void* Obj)
	{
		((Tile_eventInit_Parms*)Obj)->createPickups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_Init_Statics::NewProp_createPickups = { "createPickups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tile_eventInit_Parms), &Z_Construct_UFunction_ATile_Init_Statics::NewProp_createPickups_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_Init_Statics::NewProp_createObstacles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_Init_Statics::NewProp_createPickups,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_Init_Statics::Tile_eventInit_Parms), Z_Construct_UFunction_ATile_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnDestroyTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnDestroyTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnDestroyTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnDestroyTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnDestroyTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnDestroyTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_OnDestroyTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_OnDestroyTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnOverlapBegin_Statics
	{
		struct Tile_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Tile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collisions" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::Tile_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_RandomWeight_Statics
	{
		struct Tile_eventRandomWeight_Parms
		{
			float weight;
			float rangeMin;
			float rangeMax;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventRandomWeight_Parms, weight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventRandomWeight_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventRandomWeight_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Tile_eventRandomWeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tile_eventRandomWeight_Parms), &Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_RandomWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_rangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_rangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_RandomWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_RandomWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_RandomWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "RandomWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_RandomWeight_Statics::Tile_eventRandomWeight_Parms), Z_Construct_UFunction_ATile_RandomWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_RandomWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_RandomWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_RandomWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_RandomWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_RandomWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SpawnObstacle_Statics
	{
		struct Tile_eventSpawnObstacle_Parms
		{
			float randomWeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_randomWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATile_SpawnObstacle_Statics::NewProp_randomWeight = { "randomWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSpawnObstacle_Parms, randomWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SpawnObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnObstacle_Statics::NewProp_randomWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnObstacle_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SpawnObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SpawnObstacle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_SpawnObstacle_Statics::Tile_eventSpawnObstacle_Parms), Z_Construct_UFunction_ATile_SpawnObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObstacle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SpawnObstacle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObstacle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SpawnObstacle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_SpawnObstacle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SpawnPickup_Statics
	{
		struct Tile_eventSpawnPickup_Parms
		{
			float randomWeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_randomWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATile_SpawnPickup_Statics::NewProp_randomWeight = { "randomWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSpawnPickup_Parms, randomWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SpawnPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnPickup_Statics::NewProp_randomWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SpawnPickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATile_SpawnPickup_Statics::Tile_eventSpawnPickup_Parms), Z_Construct_UFunction_ATile_SpawnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SpawnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_TileExited_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_TileExited_Statics::Function_MetaDataParams[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_TileExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "TileExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_TileExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_TileExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_TileExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_TileExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObstaclesTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnObstaclesTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupsTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPickupsTrigger;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObstaclesClass_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstaclesClass_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObstaclesClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PickupsClass_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupsClass_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSpawnRandomWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSpawnRandomWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSpawnRandomWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupSpawnRandomWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupsToSpawnCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PickupsToSpawnCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanCreateObstacles_MetaData[];
#endif
		static void NewProp_CanCreateObstacles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCreateObstacles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanCreatePickups_MetaData[];
#endif
		static void NewProp_CanCreatePickups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCreatePickups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExited_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileEndLifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileEndLifeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LichRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_GetAttachTransform, "GetAttachTransform" }, // 542204062
		{ &Z_Construct_UFunction_ATile_Init, "Init" }, // 3060485553
		{ &Z_Construct_UFunction_ATile_OnDestroyTile, "OnDestroyTile" }, // 692142733
		{ &Z_Construct_UFunction_ATile_OnOverlapBegin, "OnOverlapBegin" }, // 4096535520
		{ &Z_Construct_UFunction_ATile_RandomWeight, "RandomWeight" }, // 4171170062
		{ &Z_Construct_UFunction_ATile_SpawnObstacle, "SpawnObstacle" }, // 1907933906
		{ &Z_Construct_UFunction_ATile_SpawnPickup, "SpawnPickup" }, // 3672731523
		{ &Z_Construct_UFunction_ATile_TileExited, "TileExited" }, // 3066916421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Obstacles/Tile.h" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_AttachPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, AttachPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_AttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_AttachPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ExitTrigger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ExitTrigger = { "ExitTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ExitTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ExitTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ExitTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstaclesTrigger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstaclesTrigger = { "SpawnObstaclesTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SpawnObstaclesTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstaclesTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstaclesTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickupsTrigger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickupsTrigger = { "SpawnPickupsTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SpawnPickupsTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickupsTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickupsTrigger_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass_Inner = { "ObstaclesClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass_MetaData[] = {
		{ "Category", "Inspector | Spawnables" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass = { "ObstaclesClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ObstaclesClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass_Inner = { "PickupsClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass_MetaData[] = {
		{ "Category", "Inspector | Spawnables" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass = { "PickupsClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, PickupsClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ObstacleSpawnRandomWeight_MetaData[] = {
		{ "Category", "Inspector |Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ObstacleSpawnRandomWeight = { "ObstacleSpawnRandomWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ObstacleSpawnRandomWeight), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ObstacleSpawnRandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ObstacleSpawnRandomWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_PickupSpawnRandomWeight_MetaData[] = {
		{ "Category", "Inspector |Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PickupSpawnRandomWeight = { "PickupSpawnRandomWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, PickupSpawnRandomWeight), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_PickupSpawnRandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_PickupSpawnRandomWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_PickupsToSpawnCount_MetaData[] = {
		{ "Category", "Inspector |Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PickupsToSpawnCount = { "PickupsToSpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, PickupsToSpawnCount), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_PickupsToSpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_PickupsToSpawnCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles_MetaData[] = {
		{ "Category", "Public |Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles_SetBit(void* Obj)
	{
		((ATile*)Obj)->CanCreateObstacles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles = { "CanCreateObstacles", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups_MetaData[] = {
		{ "Category", "Public |Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups_SetBit(void* Obj)
	{
		((ATile*)Obj)->CanCreatePickups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups = { "CanCreatePickups", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_OnExited = { "OnExited", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, OnExited), Z_Construct_UDelegateFunction_LichRunner_PlayerExitTriggerSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData)) }; // 2383932497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_TileEndLifeTime_MetaData[] = {
		{ "Category", "Protected | Stats" },
		{ "ModuleRelativePath", "Public/Actors/Obstacles/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TileEndLifeTime = { "TileEndLifeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, TileEndLifeTime), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_TileEndLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_TileEndLifeTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_AttachPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ExitTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstaclesTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickupsTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ObstaclesClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PickupsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ObstacleSpawnRandomWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PickupSpawnRandomWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PickupsToSpawnCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_CanCreateObstacles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_CanCreatePickups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_OnExited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TileEndLifeTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		if (!Z_Registration_Info_UClass_ATile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATile.OuterSingleton, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATile.OuterSingleton;
	}
	template<> LICHRUNNER_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
	struct Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 4009173358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_2530160297(TEXT("/Script/LichRunner"),
		Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
