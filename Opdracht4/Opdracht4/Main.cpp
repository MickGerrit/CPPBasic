#pragma once
#include "CoffeeMachine.h"
#include "OneEuroCoin.h"
#include "FiftyCentCoin.h"
#include "CoffeeCoin.h"
#include <iostream>

int main()
{
	OneEuroCoin* oneEuroCoin = new OneEuroCoin();
	FiftyCentCoin* fiftyCentCoin = new FiftyCentCoin();
	CoffeeCoin* coffeeCoin = new CoffeeCoin();
	CoffeeMachine* coffeeMachine = new CoffeeMachine();

	coffeeMachine->addCoffee("Coffee", 0.5);
	coffeeMachine->addCoffee("Espresso", 1.0);
	coffeeMachine->addCoffee("Capuchino", 1.5);

	int choice = 1;
	while (choice != 0)
	{
		std::cout << "Press 1 to add a fifty cents coin" << std::endl;
		std::cout << "Press 2 to add a one dollar coin" << std::endl;
		std::cout << "Press 3 to add a coffee coin" << std::endl;
		std::cout << "Press 4 to check what coffee you can purchase" << std::endl;
		std::cout << "Press 5 to purchase an item" << std::endl;
		std::cout << "Press 0 to close the program" << std::endl;
		std::cout << std::endl;

		std::cin >> choice;

		if (choice == 1) {
			coffeeMachine->acceptCoin(fiftyCentCoin);
		}
		else if (choice == 2) {
			coffeeMachine->acceptCoin(oneEuroCoin);
		}
		else if (choice == 3) {
			coffeeMachine->acceptCoin(coffeeCoin);
		}
		else if (choice == 4) {
			coffeeMachine->printStatus();
		}
		else if (choice == 5) {
			coffeeMachine->printStatus();
			std::cout << "Enter the number of the coffee you would like to purchase: ";
			int choice2;
			std::cin >> choice2;
			coffeeMachine->buyCoffee(choice2);
		}
		else if (choice == 0) {
			break;
		}
		else {
			std::cout << "That is not a valid option, please try again!" << std::endl;
		}
	}

	std::cin >> choice;

	return 0;
}
