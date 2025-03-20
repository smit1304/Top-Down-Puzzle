// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownPuzzle/TopDownPuzzlePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPuzzlePlayerController() {}
// Cross Module References
	TOPDOWNPUZZLE_API UClass* Z_Construct_UClass_ATopDownPuzzlePlayerController_NoRegister();
	TOPDOWNPUZZLE_API UClass* Z_Construct_UClass_ATopDownPuzzlePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDownPuzzle();
// End Cross Module References
	void ATopDownPuzzlePlayerController::StaticRegisterNativesATopDownPuzzlePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATopDownPuzzlePlayerController_NoRegister()
	{
		return ATopDownPuzzlePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownPuzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopDownPuzzlePlayerController.h" },
		{ "ModuleRelativePath", "TopDownPuzzlePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPuzzlePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::ClassParams = {
		&ATopDownPuzzlePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownPuzzlePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownPuzzlePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownPuzzlePlayerController, 1166523731);
	template<> TOPDOWNPUZZLE_API UClass* StaticClass<ATopDownPuzzlePlayerController>()
	{
		return ATopDownPuzzlePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownPuzzlePlayerController(Z_Construct_UClass_ATopDownPuzzlePlayerController, &ATopDownPuzzlePlayerController::StaticClass, TEXT("/Script/TopDownPuzzle"), TEXT("ATopDownPuzzlePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPuzzlePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
