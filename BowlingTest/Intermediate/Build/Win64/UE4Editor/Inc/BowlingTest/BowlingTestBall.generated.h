// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOWLINGTEST_BowlingTestBall_generated_h
#error "BowlingTestBall.generated.h already included, missing '#pragma once' in BowlingTestBall.h"
#endif
#define BOWLINGTEST_BowlingTestBall_generated_h

#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_RPC_WRAPPERS
#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABowlingTestBall(); \
	friend struct Z_Construct_UClass_ABowlingTestBall_Statics; \
public: \
	DECLARE_CLASS(ABowlingTestBall, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BowlingTest"), NO_API) \
	DECLARE_SERIALIZER(ABowlingTestBall)


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABowlingTestBall(); \
	friend struct Z_Construct_UClass_ABowlingTestBall_Statics; \
public: \
	DECLARE_CLASS(ABowlingTestBall, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BowlingTest"), NO_API) \
	DECLARE_SERIALIZER(ABowlingTestBall)


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABowlingTestBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABowlingTestBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABowlingTestBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABowlingTestBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABowlingTestBall(ABowlingTestBall&&); \
	NO_API ABowlingTestBall(const ABowlingTestBall&); \
public:


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABowlingTestBall(ABowlingTestBall&&); \
	NO_API ABowlingTestBall(const ABowlingTestBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABowlingTestBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABowlingTestBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABowlingTestBall)


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(ABowlingTestBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABowlingTestBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABowlingTestBall, Camera); }


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_9_PROLOG
#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_PRIVATE_PROPERTY_OFFSET \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_RPC_WRAPPERS \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_INCLASS \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_PRIVATE_PROPERTY_OFFSET \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_INCLASS_NO_PURE_DECLS \
	BowlingTest_Source_BowlingTest_BowlingTestBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BowlingTest_Source_BowlingTest_BowlingTestBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
