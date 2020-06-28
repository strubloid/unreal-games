// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::SetupGame()
{
    // This is the hidden word
    HiddenWord = TEXT("cake");

    // setting up the lives
    Lives = 2;
    CurrentLevel = 1;
    MaxLevel = 2;
    bGameOver = false;

    MenuMessage();
}

void UBullCowCartridge::BeginPlay()
{
    Super::BeginPlay();
    SetupGame();
}

/**
 * This will be started when the player hits enter. 
 */
void UBullCowCartridge::OnInput(const FString &Input)
{

    // this will show the funny hungry message
    MenuMessage();

    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
        // Super::EndPlay(EEndPlayReason::RemovedFromWorld);
    }
    else
    {
        
        if (Input == HiddenWord)
        {
            LevelUp();
            
            if (CurrentLevel == MaxLevel)
            {
                MenuMessageResult("You got IT YEAH!! You're a B A S T A R D !");
                EndGame();
            } else {
                MenuMessageResult("Level Up");
            }
        }
        else
        {
            if (CompareWordsSize(HiddenWord, Input))
            {
                // MenuMessageResult(TEXT("Wrong Size: must be %d chars", HiddenWord.Len()));
                MenuMessageResult("Wrong Size: must be 4 chars");
            }
            else
            {
                MenuMessageResult("Wrong word! try again!");
            }
            LoseLife();
        }

        if (Lives <= 0)
        {
            bGameOver = true;
        }
    }

    // Check if Isogram
    // Prompt to guess again
    // Check right number of characters
    // Prompt to guess again

    // Remove Life
    // If yes GuessAgain
    // Show lives left
    // If no show GameOver and HiddenWord?
    // Prompt to PLay Again, press enter to play again
    // Check the user input
    // PlayAgain or Quit
}