// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class ARunCharacter;
#ifdef LICHRUNNER_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define LICHRUNNER_Pickup_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_EVENT_PARMS \
	struct Pickup_eventOnGet_Parms \
	{ \
		ARunCharacter* runCharacter; \
	};


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_CALLBACK_WRAPPERS
#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_15_PROLOG \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_EVENT_PARMS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_CALLBACK_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Actors_Pickups_Pickup_h


#define FOREACH_ENUM_ETYPEPICKUP(op) \
	op(ETypePickup::E_YellowCoin) \
	op(ETypePickup::E_BlueCoin) 

enum class ETypePickup : uint8;
template<> LICHRUNNER_API UEnum* StaticEnum<ETypePickup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
