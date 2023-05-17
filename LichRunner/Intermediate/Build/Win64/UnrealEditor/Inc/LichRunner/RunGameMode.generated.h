// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
#ifdef LICHRUNNER_RunGameMode_generated_h
#error "RunGameMode.generated.h already included, missing '#pragma once' in RunGameMode.h"
#endif
#define LICHRUNNER_RunGameMode_generated_h

#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestartLevel); \
	DECLARE_FUNCTION(execOnTileExited); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execCreateTile);


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestartLevel); \
	DECLARE_FUNCTION(execOnTileExited); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execCreateTile);


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_EVENT_PARMS
#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_CALLBACK_WRAPPERS
#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunGameMode(); \
	friend struct Z_Construct_UClass_ARunGameMode_Statics; \
public: \
	DECLARE_CLASS(ARunGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunGameMode)


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARunGameMode(); \
	friend struct Z_Construct_UClass_ARunGameMode_Statics; \
public: \
	DECLARE_CLASS(ARunGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunGameMode)


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunGameMode(ARunGameMode&&); \
	NO_API ARunGameMode(const ARunGameMode&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunGameMode(ARunGameMode&&); \
	NO_API ARunGameMode(const ARunGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunGameMode)


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_12_PROLOG \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_EVENT_PARMS


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class ARunGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_GameModes_RunGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
