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
	// Play the click sound
	PlayClickSound();

	// Delay the level change slightly to allow sound to play
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle,
		this,
		&UMainMenuWidget::DelayedOpenLevel,
		0.3f,  // Adjust this based on sound length
		false
	);

	//UGameplayStatics::OpenLevel(this, FName("Tutorial1"));
}

void UMainMenuWidget::DelayedOpenLevel() 
{
	// Logic to open the level
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Start Game Button CLicked"));
	UGameplayStatics::OpenLevel(this, FName("Tutorial1"));
}

void UMainMenuWidget::ExitGame()
{
	// Play the click sound
	PlayClickSound();
	// Logic to exit the game
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Exit Button clicked"));
	FGenericPlatformMisc::RequestExit(false);
}
void UMainMenuWidget::ShowCredits()
{
	// Play the click sound
	PlayClickSound();
	// Logic to show credits
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("credit button clicked"));
}

void UMainMenuWidget::PlayClickSound()
{
	if (ClickSound)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), ClickSound);
	}
}