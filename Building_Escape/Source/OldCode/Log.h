#pragma once

#include "CoreMinimal.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

void STD_WARING_LOG(FString &Text)
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *Text);
}

// void STD_STRING_ERROR(char* Text)
// {
//     FString test = FString::Printf(TEXT("%s"),*Text);

//     FString* Print = &test;

//     UE_LOG(LogTemp, Error, TEXT("%s"), **Print);
// }

FString STD_ACTOR_LOCATION(const AActor *Owner)
{
    FVector Location = Owner->GetActorLocation();

    //    return Location.ToString();
    return Location.ToCompactString();
    //    ->ToString();
}

void STD_BLANK_LINE()
{
    UE_LOG(LogTemp, Warning, TEXT("                                                            "));
}

void STD_DASH_LINE()
{
    UE_LOG(LogTemp, Warning, TEXT("------------------------------------------------------------"));
}

void STD_LOG_POSITION(FString Position)
{
    // GetOwner()->GetActorLocation().ToString()
    // GetOwner()->GetTransform().GetLocation().ToString()
    UE_LOG(LogTemp, Warning, TEXT("\nCheck Below\n|-----------------------------------------------------------|\n| * [P O S I T I O N]                                       |\n| = %s \t\t\t\t\t\t\t|\n|-----------------------------------------------------------|\n"), *Position);
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