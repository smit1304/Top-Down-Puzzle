// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownPuzzleGameMode.h"
#include "TopDownPuzzlePlayerController.h"
#include "TopDownPuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownPuzzleGameMode::ATopDownPuzzleGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownPuzzlePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}