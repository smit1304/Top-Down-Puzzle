// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/Button.h"
#include <Kismet/GameplayStatics.h>


void UMainMenuWidget :: NativeConstruct()
{ 
	Super::NativeConstruct();

	bPlay->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::StartGame);
	bExit->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::ExitGame);
	bCredits->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::ShowCredits);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello on screen!"));
}
void UMainMenuWidget::StartGame()
{
	// Logic to start the game
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Start Game Button CLicked"));
	UGameplayStatics::OpenLevel(this, FName("Tutorial1"));
}
void UMainMenuWidget::ExitGame()
{
	// Logic to exit the game
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Exit Button clicked"));
	FGenericPlatformMisc::RequestExit(false);
}
void UMainMenuWidget::ShowCredits()
{
	// Logic to show credits
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("credit button clicked"));
}
