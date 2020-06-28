// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString &Input) override;

	void SetupGame();

	/**
	 * This will print the Menu Message
	 */
	void MenuMessage()
	{
		PrintLine(TEXT("| Bull Cows (BE) - Bastard Edition   |"));
		PrintLine(TEXT("| -----------------------------------|"));
		PrintLine(FString::Printf(TEXT("| Level: %d                           |"), CurrentLevel));
		PrintLine(FString::Printf(TEXT("| Lives: %d                           |"), Lives));
		PrintLine(FString::Printf(TEXT("| Guess: %d  Letter Word              |"), HiddenWord.Len()));
		PrintLine(TEXT("| Guess it + Press enter to continue |"));
	}

	void MenuMessageResult(FString Result)
	{
		MenuMessage();
		PrintLine(FString::Printf(TEXT("* Result: %s"), *Result));
	}

	void LevelUp()
	{
		++CurrentLevel;
	}

	void EndGame()
	{
		bGameOver = true;
		PrintLine(TEXT("Press enter to play again..."));
	}

	/**
	 * This will print a text inside of the terminal in the game
	 */
	void PrintText(FString text)
	{
		PrintLine(FString::Printf(TEXT("%s"), *text));
	}

	/**
	 * This will compare 2 words using the lenght of each of it, if is equal
 	 * will return true otherwise false. 
 	 */
	bool CompareWordsSize(FString origin, FString compare)
	{
		if (origin.Len() == compare.Len())
		{
			return true;
		}
		return false;
	}

	/**
	 * This will decrement the Lives variable
	 * or set to 0 
	 */
	void LoseLife()
	{
		(Lives <= 0) ? Lives = 0 : Lives--;
	}

	// Your declarations go below!
private:
	FString HiddenWord;
	int32 Lives;
	int32 CurrentLevel;
	int32 MaxLevel;
	bool bGameOver;
};
