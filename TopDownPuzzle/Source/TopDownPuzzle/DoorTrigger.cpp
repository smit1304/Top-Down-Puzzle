// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorTrigger.h"
#include "DoorTrigger.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "TopDownPuzzleCharacter.h"  // Include your player character class header

// Sets default values
ADoorTrigger::ADoorTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Trigger Box component and set it as the root component
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	// Set up the overlap event
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoorTrigger::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADoorTrigger::OnOverlapEnd);  // End overlap event
}

// Called when the game starts or when spawned
void ADoorTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorTrigger::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	// Check if the overlapping actor is the player
	if (OtherActor && OtherActor != this && OtherActor->IsA(ATopDownPuzzleCharacter::StaticClass()))
	{
		// Print a debug message (optional)
		UE_LOG(LogTemp, Warning, TEXT("Player entered the door!"));

		// Load the next level (you can change "NextLevelName" to your actual level name)
		UGameplayStatics::OpenLevel(this, FName("Level1"));
	}
}

void ADoorTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Check if the overlapping actor is a character (the player or NPC)
	if (OtherActor && OtherActor != this && OtherActor->IsA(ATopDownPuzzleCharacter::StaticClass()))
	{
		// You can also check if it's your specific player character class, if needed
		// if (OtherActor->IsA(ATopDownCharacter::StaticClass()))

		// Print a debug message (optional)
		UE_LOG(LogTemp, Warning, TEXT("Player exited the door!"));

		// Perform any logic you want when the player exits the door, e.g., show a message, change state, etc.
	}
}