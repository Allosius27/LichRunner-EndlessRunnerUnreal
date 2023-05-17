// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LICHRUNNER_PlayerStatsComponent_generated_h
#error "PlayerStatsComponent.generated.h already included, missing '#pragma once' in PlayerStatsComponent.h"
#endif
#define LICHRUNNER_PlayerStatsComponent_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveArchen); \
	DECLARE_FUNCTION(execAddArchen); \
	DECLARE_FUNCTION(execRemoveMana); \
	DECLARE_FUNCTION(execAddMana);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveArchen); \
	DECLARE_FUNCTION(execAddArchen); \
	DECLARE_FUNCTION(execRemoveMana); \
	DECLARE_FUNCTION(execAddMana);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStatsComponent(); \
	friend struct Z_Construct_UClass_UPlayerStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatsComponent)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerStatsComponent(); \
	friend struct Z_Construct_UClass_UPlayerStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatsComponent)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatsComponent(UPlayerStatsComponent&&); \
	NO_API UPlayerStatsComponent(const UPlayerStatsComponent&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatsComponent(UPlayerStatsComponent&&); \
	NO_API UPlayerStatsComponent(const UPlayerStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStatsComponent)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_10_PROLOG
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class UPlayerStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Actors_Characters_PlayerStatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
