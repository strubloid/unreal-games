#include <iostream>
#include <stdio.h>


int main()
{

	// Creating the array
	char *guesses[3] = {
		"Can you type the first guess?",
		"Can you type the second guess?",
		"Can you type the third guess?"
	};

	int guessA, guessB, guessC;
	int guessProduct;

    // prompt(or print) the user to enter a number
    printf(guesses[0]); 
    
    // create a new array of characters
    int input[4];   

    // get four numbers into input
    scanf("%d",&input[0]);

    printf(guesses[1]);    
    scanf("%d",&input[1]);

    printf(guesses[2]); 
    scanf("%d",&input[2]);

    printf("%d %d %d  \n\n", input[0],input[1],input[2]);

    // output each character on a different line
    printf("The sum is = %d\n     The product is = %d\n"
        , input[0]+input[1]+input[2]
        , input[0]*input[1]*input[2]
    ); 

	std::cout << guesses[0] << "\n";
	std::cin >> guessA;

	std::cout << guesses[1] << "\n";
	std::cin >> guessB;

	std::cout << guesses[2] << "\n";
	std::cin >> guessC;

    using namespace std;
	cout << endl;

	std::cout << "this line will work fine, as we can use std::endl or endl" <<
	"as we have the namespace to specify it when is necessary" << std::endl;

	std::cout << "The sum of those is: (" << guessA + guessB + guessC << ")" << std::endl;
	std::cout << "The product of those is: (" << guessA * guessB * guessC << ")" << endl; 
 
	return 0;
}
