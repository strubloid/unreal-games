#include <iostream>
#include <string>
#include <array>
using namespace std;

// Global Vaiables
int questionNumber = 1;

// int guesses[3];
std::array<int,3> guesses;

int loadQuestion()
{

	// How to use strings insted of an array of characters?
	string specialLineInTheMessage = "[Mission" + to_string(questionNumber) + "]: break into the server room\n";
	
	// Creating the array
	string message[3] = {
		"You are a secret agent\n",
		specialLineInTheMessage,
		"choose 3 numbers that the sum and the product are the same!\n"
	};

	for(int x=0; x < 3; x++)
	{
		std::cout << message[x];
	}
	
	return 1;
}

int gameMainRule()
{
	int sum = guesses[0] + guesses[1] + guesses[2];
	int product = guesses[0] * guesses[1] * guesses[2];

	if (sum == product){
		return 1;
	} else {
		return 0;
	}
}

int getAnswer()
{
	int finishingIndex = guesses.size() - 1; 	
	for(int currentIndex=0; currentIndex <= finishingIndex; currentIndex++)
	{
		std::cout << "Can you type the " + to_string(currentIndex+1) + " guess?\n";
		std::cin >> guesses[currentIndex];	
	}

	if (gameMainRule())
	{
		return 1;
	}

	cout << "GAME OVER!, nice to play with us! now, go fuck yourself!\n\n";

	return 0;
}

int main()
{

	// loads the question
	loadQuestion();

	// get the awnser
	while (getAnswer() != 0)
	{
		// Q: Should we change this variable name?
		questionNumber++;

		cout << "\nYou just got a new level!\n";
		cout << "||||| LEVEL" + to_string(questionNumber) + " |||||\n\n"; 
	}

	// this finishes the program
	return 0;
	

}
