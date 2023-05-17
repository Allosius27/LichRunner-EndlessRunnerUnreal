// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LICHRUNNER_RunPlayerController_generated_h
#error "RunPlayerController.generated.h already included, missing '#pragma once' in RunPlayerController.h"
#endif
#define LICHRUNNER_RunPlayerController_generated_h

#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_SPARSE_DATA
#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execEndJump); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execMoveRight);


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execEndJump); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execMoveRight);


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunPlayerController(); \
	friend struct Z_Construct_UClass_ARunPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARunPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunPlayerController)


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARunPlayerController(); \
	friend struct Z_Construct_UClass_ARunPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARunPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LichRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunPlayerController)


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunPlayerController(ARunPlayerController&&); \
	NO_API ARunPlayerController(const ARunPlayerController&); \
public:


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunPlayerController(ARunPlayerController&&); \
	NO_API ARunPlayerController(const ARunPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunPlayerController)


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_13_PROLOG
#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_RPC_WRAPPERS \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_INCLASS \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_SPARSE_DATA \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LICHRUNNER_API UClass* StaticClass<class ARunPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LichRunner_Source_LichRunner_Public_Controllers_RunPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
