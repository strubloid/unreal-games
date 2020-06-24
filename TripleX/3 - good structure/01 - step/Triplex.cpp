#include <iostream>
#include <string>
#include <array>
using namespace std;

// Global Vaiables
int questionNumber = 1;

// int guesses[3];
std::array<int,3> guesses;

struct EndGame : public exception {
   const char * message () const throw () {
      return "C++ Exception";
   }
};

void playGame()
{
	cout << "playing the game";
	throw EndGame();
}

int main()
{
	try {
		
		// protected code
		while(true)
		{
			playGame();
		}

	} catch (EndGame e ) { // code to handle EndGame exception
		
		cout << "GAME OVER!, nice to play with us! now, go fuck yourself!\n\n";
		cout << e.message();
	
	} catch (std::exception& e) { // This will capture all Other kind of errors

	  cout << "GAME OVER!, you found a bug in it! CONGRATS! the developer SUX!\n\n";
	  
	  // this is the main function that will print the exception
	  cout << e.what();

    }

	// this finishes the program
	return 0;
	
}