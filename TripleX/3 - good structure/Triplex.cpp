#include <iostream>
#include <string>
#include <array>

#include <chrono>
#include <thread>

using namespace std;

// Global Vaiables
int questionNumber = 1;

// int guesses[3];
std::array<int, 3> guesses;

struct EndGame : public exception
{
	const char *message() const throw()
	{
		return "C++ Exception";
	}
};

void sleep(int miliseconds)
{
	chrono::duration<int, std::milli> timespan(miliseconds);
	this_thread::sleep_for(timespan);
}

void loader()
{
	float progress = 0.0;

	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "|         (x) (x) (x)      TRIPE X      (x) (x) (x)        |\n";
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

	sleep(1000);

	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "|               Developed by: Your stinky but!             |\n";
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

	sleep(1000);

	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "|   HA!!!, did I told you to go for yourself today?  (y/n) |\n";
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

	string option;

	cin >> option;

	// Q: is this a good behaviour?
	std::cout << string(50, '\n');

	if (option.compare("y") == 0 || option.compare("n") == 0)
	{

		std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		std::cout << "|   At least you arent stupid to not follow the rulles...  |\n";
		std::cout << "|||||||||||||||||||||F||||||||||||U|||||||||||||||||||||||||\n";
	}
	else
	{
		std::cout << "||F|||||U||||||||||F||||||U||||||||||F|||U||||||||||||||F|U||\n";
		std::cout << "|  FU CHEATER! HAHAH, did you think that you could fool me? |\n";
		std::cout << "||F|||||U||||||||||F||||||U||||||||||F|||U||||||||||||||F|U||\n";
	}

	sleep(3000);

	// Q: is this a good behaviour?
	std::cout << string(50, '\n');

	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "|         (x) (x) (x)      TRIPE X      (x) (x) (x)        |\n";
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	std::cout << "<  \\o\\  /o/  \\o\\   /o/   \\o\\    /o/   \\o\\   /o/   \\o/ >\n";
	std::cout << "<                   L o a d i n g . . .               >\n";

	while (progress < 1.0)
	{

		int barWidth = 60;

		std::cout << "[";
		int pos = barWidth * progress;
		for (int i = 0; i < barWidth; ++i)
		{
			if (i < pos)
				std::cout << "=";
			else if (i == pos)
				std::cout << ">";
			else
				std::cout << " ";
		}
		std::cout << "] " << int(progress * 100.0) << " %\r";
		std::cout.flush();

		progress += 0.0009; // for demonstration only
	}
	std::cout << std::endl;
}

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

void programHeader()
{
	std::cout << string(50, '\n');
	loader();	
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

	throw EndGame();

	cout << "GAME OVER!, nice to play with us! now, go fuck yourself!\n\n";

	return 0;
}

void playGame()
{
	std::cout << "playing the game";

	// showing the header of the program
	programHeader();

	// Q: I want to stop for a second and clean the screen, should i change this?
	sleep(1000);
	std::cout << string(50, '\n');

	loadQuestion();

	// get the awnser
	while (getAnswer() != 0)
	{
		// Q: Should we change this variable name?
		questionNumber++;

		cout << "\nYou just got a new level!\n";
		cout << "||||| LEVEL" + to_string(questionNumber) + " |||||\n\n"; 
	}

}

int main()
{
	try
	{

		// protected code
		while (true)
		{
			playGame();
		}
	}
	catch (EndGame e)
	{ // code to handle EndGame exception

		std::cout << "GAME OVER!, nice to play with us! now, go fuck yourself!\n\n";
		// std::cout << e.message();
	}
	catch (std::exception &e)
	{ // This will capture all Other kind of errors

		std::cout << "GAME OVER!, you found a bug in it! CONGRATS! the developer SUX!\n\n";

		//   this is the main function that will print the exception
		std::cout << e.what();
	}

	// this finishes the program
	return 0;
}