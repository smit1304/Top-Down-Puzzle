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
#ifdef TOPDOWNPUZZLE_DoorTrigger_generated_h
#error "DoorTrigger.generated.h already included, missing '#pragma once' in DoorTrigger.h"
#endif
#define TOPDOWNPUZZLE_DoorTrigger_generated_h

#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_SPARSE_DATA
#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorTrigger(); \
	friend struct Z_Construct_UClass_ADoorTrigger_Statics; \
public: \
	DECLARE_CLASS(ADoorTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownPuzzle"), NO_API) \
	DECLARE_SERIALIZER(ADoorTrigger)


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoorTrigger(); \
	friend struct Z_Construct_UClass_ADoorTrigger_Statics; \
public: \
	DECLARE_CLASS(ADoorTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownPuzzle"), NO_API) \
	DECLARE_SERIALIZER(ADoorTrigger)


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorTrigger(ADoorTrigger&&); \
	NO_API ADoorTrigger(const ADoorTrigger&); \
public:


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorTrigger(ADoorTrigger&&); \
	NO_API ADoorTrigger(const ADoorTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorTrigger)


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_PRIVATE_PROPERTY_OFFSET
#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_9_PROLOG
#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_SPARSE_DATA \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_RPC_WRAPPERS \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_INCLASS \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_SPARSE_DATA \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_INCLASS_NO_PURE_DECLS \
	TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPUZZLE_API UClass* StaticClass<class ADoorTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownPuzzle_Source_TopDownPuzzle_DoorTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
