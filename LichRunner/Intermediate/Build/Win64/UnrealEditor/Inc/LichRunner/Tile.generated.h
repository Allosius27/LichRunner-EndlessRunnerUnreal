// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LICHRUNNER_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define LICHRUNNER_Tile_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_9_DELEGATE \
struct _Script_LichRunner_eventPlayerExitTriggerSignature_Parms \
{ \
	ATile* Tile; \
}; \
static inline void FPlayerExitTriggerSignature_DelegateWrapper(const FMulticastScriptDelegate& PlayerExitTriggerSignature, ATile* Tile) \
{ \
	_Script_LichRunner_eventPlayerExitTriggerSignature_Parms Parms; \
	Parms.Tile=Tile; \
	PlayerExitTriggerSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDestroyTile); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execRandomWeight); \
	DECLARE_FUNCTION(execTileExited); \
	DECLARE_FUNCTION(execSpawnObstacle); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetAttachTransform);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDestroyTile); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execRandomWeight); \
	DECLARE_FUNCTION(execTileExited); \
	DECLARE_FUNCTION(execSpawnObstacle); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetAttachTransform);


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_11_PROLOG
#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Actors_Obstacles_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
