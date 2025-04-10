// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPUZZLE_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	
	UFUNCTION()
	void StartGame();	
	
	UFUNCTION()
	void ExitGame();
	
	UFUNCTION()
	void ShowCredits();

	UPROPERTY(meta = (BindWidget))
	class UButton* bPlay;

	UPROPERTY(meta = (BindWidget))
	class UButton* bExit;

	UPROPERTY(meta = (BindWidget))
	class UButton* bCredits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class USoundBase* ClickSound;

	void NativeConstruct() override;

	void PlayClickSound();

	void DelayedOpenLevel();
};
