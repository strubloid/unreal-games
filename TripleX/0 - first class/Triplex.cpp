#include <iostream>

int main()
{
	// Static print
	// std::cout << "[0] You are a secret agent" << std::endl;
	// std::cout << "[0] [Mission 01]: break into the server room" << std::endl;
	// std::cout << "[0] Enter the code to proceed..." << std::endl;
	// std::cout << "\n\n\n";


	// Using variables

	// Creating the array
	char *message[3] = {
		"[1] You are a secret agent\n",
		"[1] [Mission 01]: break into the server room\n",
		"[1] Enter the code to proceed..."
	};

	// message[0] = "[1] You are a secret agent\n"
	// message[1] = "[1] [Mission 01]: break into the server room\n"
	// message[2] = "[1] Enter the code to proceed..."

	// // looping though static 3 elements: (index 0, index 1 and index 2)
	for(int x=0; x < 3; x++)
	{
		std::cout << message[x];
	}
	std::cout << "\n\n\n";

	// // this will be size of the array message[3]
	// int messageSize = 3;

	// std::cout << messageSize << std::endl;

	// // Each array starts from [0]..[2], why?
	// message[0] = "[2] You are a secret agent\n";
	// message[1] = "[2] [Mission 01]: break into the server room\n";
	// message[2] = "[2] Enter the code to proceed...";

	// for(int x=0; x < messageSize; x++)
	// {
	// 	std::cout << message[x];
	// }

	// Math expression
	// int a = 4;
	// int b = 3;
	// int c = 2;

	// int sum = a + b + c;
	// int product = a * b * c;

	// std::cout << std::endl;
	// std::cout << sum << std::endl;
	// std::cout << product << std::endl;

	// Variables  = you can change anytime, as isn't pointing out to it

	int guessA, guessB, guessC;
	int guessProduct;

	std::cout << "Can you type the first guess?\n";
	std::cin >> guessA;

	std::cout << "Can you type the second guess?\n";
	std::cin >> guessB;

	std::cout << "Can you type the third guess?\n";
	std::cin >> guessC;


	using namespace std;
	cout << endl;
	std::cout << "this line will work fine, as we can use std::endl or endl" <<
	"as we have the namespace to specify it when is necessary" << std::endl;

	std::cout << "The sum of those is: (" << guessA + guessB + guessC << ")" << std::endl;

	std::cout << "The product of those is: (" << guessA * guessB * guessC << ")" << endl;

	return 0;
}
