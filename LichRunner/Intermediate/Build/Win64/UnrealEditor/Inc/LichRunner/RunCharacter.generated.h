// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETypePickup : uint8;
#ifdef LICHRUNNER_RunCharacter_generated_h
#error "RunCharacter.generated.h already included, missing '#pragma once' in RunCharacter.h"
#endif
#define LICHRUNNER_RunCharacter_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddKilledEnemies); \
	DECLARE_FUNCTION(execAddCoins); \
	DECLARE_FUNCTION(execCharacterDeath); \
	DECLARE_FUNCTION(execCharacterHit);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddKilledEnemies); \
	DECLARE_FUNCTION(execAddCoins); \
	DECLARE_FUNCTION(execCharacterDeath); \
	DECLARE_FUNCTION(execCharacterHit);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_EVENT_PARMS
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_CALLBACK_WRAPPERS
#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunCharacter)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_11_PROLOG \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_EVENT_PARMS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class ARunCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Actors_Characters_RunCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
