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

void programHeader()
{
	std::cout << string(50, '\n');
	loader();

	sleep(1000);

	std::cout << string(50, '\n');
	throw EndGame();
}

void playGame()
{
	std::cout << "playing the game";

	// showing the header of the program
	programHeader();

	// throw EndGame();
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