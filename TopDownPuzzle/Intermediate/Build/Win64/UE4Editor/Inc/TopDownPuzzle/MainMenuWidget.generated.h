// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNPUZZLE_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define TOPDOWNPUZZLE_MainMenuWidget_generated_h

#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_SPARSE_DATA
#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowCredits); \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execStartGame);


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowCredits); \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execStartGame);


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownPuzzle"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownPuzzle"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bPlay() { return STRUCT_OFFSET(UMainMenuWidget, bPlay); } \
	FORCEINLINE static uint32 __PPO__bExit() { return STRUCT_OFFSET(UMainMenuWidget, bExit); } \
	FORCEINLINE static uint32 __PPO__bCredits() { return STRUCT_OFFSET(UMainMenuWidget, bCredits); } \
	FORCEINLINE static uint32 __PPO__ClickSound() { return STRUCT_OFFSET(UMainMenuWidget, ClickSound); }


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_12_PROLOG
#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_SPARSE_DATA \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_RPC_WRAPPERS \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_INCLASS \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_SPARSE_DATA \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPUZZLE_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownPuzzle_Source_TopDownPuzzle_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
