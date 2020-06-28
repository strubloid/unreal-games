// Fill out your copyright notice in the Description page of Project Settings.
#include "WorldPosition.h"
#include "GameFramework/Actor.h"
#include "../Strubloid/Utils/Log.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString test = "Test RAFA!!!";

	// STD_WARING_LOG(test);
	// STD_WARING_LOG(test);
	// STD_ERROR_LOG(test);
	// STD_DISPLAY_LOG(test);

	// This will print in the game an error message
	// STD_GAME_DEBUG_MSG(test);

	// GEngine->AddOnScreenDebugMessage(10, 1.f, FColor::Red, FString::Printf(TEXT("%s"), *test));

	// FString Log = TEXT("Hello!");
	// FString* PrtLog = &Log;

	// Log.Len();

	// (*PrtLog).Len();

	// PrtLog->Len();
	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);

	FString ObjectName = GetOwner()->GetName();
	// STD_GAME_DEBUG_MSG(ObjectName);
	// UE_LOG(LogTemp, Error, TEXT("This component it is attached to: %s"), *ObjectName);

	// UE_LOG(LogTemp, Warning, TEXT("This component it is attached to: %s"), *GetOwner()->GetName());

	// Fvector (Struct?)
	FString ObjectPosition = STD_ACTOR_LOCATION(GetOwner());
	// UE_LOG(LogTemp, Warning, TEXT("Position: %s"), *ObjectPosition);


	// Two ways to get the location of the object
	STD_LOG_POSITION(GetOwner()->GetActorLocation().ToString());
	STD_LOG_POSITION(GetOwner()->GetTransform().GetLocation().ToString());

	// FString TestHUDString = FString(TEXT("This is my test FString."));
	// FName TestHUDName = FName(*TestHUDString);
	// FText TestHUDText = FText::FromString(TestHUDString);



	// STD_GAME_DEBUG_MSG(TestHUDString);
	// STD_GAME_DEBUG_MSG(TestHUDName);
	// STD_GAME_DEBUG_MSG(TestHUDText);

}

// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
