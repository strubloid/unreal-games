#pragma once

#include "CoreMinimal.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

void STD_WARING_LOG(FString &Text)
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *Text);
}

/**
 * This method will return what is the location of the object
 */
FString STD_ACTOR_LOCATION(const AActor *Owner)
{
    FVector Location = Owner->GetActorLocation();
    return Location.ToString();
}



void STD_ERROR_LOG(FString &Text)
{
    UE_LOG(LogTemp, Error, TEXT("%s"), *Text);
}

void STD_DISPLAY_LOG(FString &Text)
{
    UE_LOG(LogTemp, Display, TEXT("%s"), *Text);
}

void STD_GAME_DEBUG_MSG(FString &Text)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"), *Text));
}


// Possible Deprecated Methods
void STD_LOG_POSITION(FString Position)
{
    // GetOwner()->GetActorLocation().ToString()
    // GetOwner()->GetTransform().GetLocation().ToString()
    UE_LOG(LogTemp, Warning, TEXT("\nCheck Below\n|-----------------------------------------------------------|\n| * [P O S I T I O N]                                       |\n| = %s \t\t\t\t\t\t\t|\n|-----------------------------------------------------------|\n"), *Position);
}