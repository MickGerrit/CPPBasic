#include <iostream>
#include <cstdlib>
#include <set>
#include <ctime>

int randomSequence[50];
int inputSequence[50];
int currentSequenceLength;
int input;
int givenNumberAmount;

void game();	

int main()
{
	givenNumberAmount = 0;
	//starting with sequence length of 3
	currentSequenceLength = 3;

	for (int i = 0; i < 40; i++)
	{
		srand(time(NULL) * rand());
		randomSequence[i] = rand() % 10;
	}
	game();
}

void game() {
	std::cout << "Memorize this sequence of numbers: ";

	for (int i = 0; i < currentSequenceLength; i++)
	{
		std::cout << randomSequence[i];
	}

	std::cout << " " << std::endl;

	std::system("PAUSE");

	std::system("CLS");

	std::cout << "Press Enter every time you input a number" << std::endl;
	std::cout << "Current sequence: ";

	for (int x = 0; x < currentSequenceLength; x++)
	{
		std::cin >> input;
		inputSequence[x] = input;
		std::system("CLS");
		if (inputSequence[x] == randomSequence[x])
		{
			std::cout << "Press Enter every time you input a number" << std::endl;
			std::cout << "Current sequence: ";
			givenNumberAmount += 1;
			for (int i = 0; i < givenNumberAmount; i++)
			{
				std::cout << inputSequence[i];
			}
		}
		else {
			std::cout << "Game over: wrong sequence, try again" << std::endl;
			main();
		}
	}

	if (givenNumberAmount >= currentSequenceLength) {
		currentSequenceLength += 1;
		givenNumberAmount = 0;
		std::cout << "" << std::endl;
		std::cout << "That is correct!" << std::endl;
		game();
	}
}
