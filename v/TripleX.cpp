#include <iostream>
#include <string>


void startLevelMessage()
{
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
}

void rulesOfTheGame(int CodeSum, int CodeProduct)
{
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The code multiply to give: " << CodeProduct << std::endl;
}

int sumCodes(int code1, int code2, int code3)
{
    return code1 + code2 + code3;
}

int multiplyCodes(int code1, int code2, int code3)
{
    return code1 * code2 * code3;
}

int collectGuess(char* text)
{
    int guess;

    std::cout << text;
    std::cin >> guess;
    
    return guess;
}


int main()
{
    // 1 starting the game with a message
    startLevelMessage();

    // 2 Declaration of our variables
    const int CodeA = 4, CodeB = 3, CodeC = 2;
    int GuessA, GuessB, GuessC;

    const int CodeSum = sumCodes(CodeA, CodeB, CodeC);
    const int CodeProduct = multiplyCodes(CodeA, CodeB, CodeC);

    // Print CodeSum and CodeProduct to the terminal
    rulesOfTheGame(CodeSum, CodeProduct);
    
    GuessA = collectGuess("GuessA: ");
    GuessB = collectGuess("GuessB: ");
    GuessC = collectGuess("GuessC: ");

    return 0;

    std::cout << "You entered: " << GuessA << GuessB << GuessC;
    std::cout << std::endl;
    
    int GuessSum =  sumCodes(GuessA, GuessB, GuessC);
    int GuessProduct = multiplyCodes(GuessA, GuessB, GuessC);

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)       
    {
        std::cout << "You win!" ;
    }
    else       
    {
        std::cout << "You lose!" ;
    }

    return 0;
}    