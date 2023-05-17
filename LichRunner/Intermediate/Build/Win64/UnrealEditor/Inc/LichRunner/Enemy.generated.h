// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARunCharacter;
#ifdef LICHRUNNER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define LICHRUNNER_Enemy_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDestroyEnemy); \
	DECLARE_FUNCTION(execGetDamages); \
	DECLARE_FUNCTION(execEnemyDeath); \
	DECLARE_FUNCTION(execEnemyHit); \
	DECLARE_FUNCTION(execSetCanMove);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDestroyEnemy); \
	DECLARE_FUNCTION(execGetDamages); \
	DECLARE_FUNCTION(execEnemyDeath); \
	DECLARE_FUNCTION(execEnemyHit); \
	DECLARE_FUNCTION(execSetCanMove);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_EVENT_PARMS \
	struct Enemy_eventFollow_Parms \
	{ \
		AActor* followTarget; \
	}; \
	struct Enemy_eventHitPlayer_Parms \
	{ \
		ARunCharacter* runCharacter; \
	};


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_CALLBACK_WRAPPERS
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_9_PROLOG \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_EVENT_PARMS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Actors_Characters_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
