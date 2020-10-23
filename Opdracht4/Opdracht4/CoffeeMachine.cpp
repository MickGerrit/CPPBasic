#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine()
{
	currentDeposit = 0;
	coffeeCoins = 0;
}

CoffeeMachine::~CoffeeMachine()
{
}

void CoffeeMachine::addCoffee(std::string name, float cost)
{
	coffeeName.push_back(name);
	coffeeCost.push_back(cost);
}

void CoffeeMachine::buyCoffee(int index)
{
	for (int i = 0; i < coffeeName.size(); i++)
	{
		if (i == index) {
			if (currentDeposit >= coffeeCost[i]) {
				currentDeposit -= coffeeCost[i];
				std::cout << "You have purchased a " << coffeeName[i] << "!" << std::endl;
			}
			else if (coffeeCoins >= 1) {
				coffeeCoins -= 1;
				std::cout << "You have purchased a " << coffeeName[i] << "!" << std::endl;
			} else {
				std::cout << "You don't have inserted enough euro cents or any coffee coins to purchase this" << std::endl;
			}
		}
	}
}

void CoffeeMachine::acceptCoin(Coin* coin)
{
	if (coin->getValue() == 0.0) {
		coffeeCoins++;
		std::cout << "You have entered a " << coin->getName() << std::endl;
	}
	else if (coin->getValue() > 0.0) {
		currentDeposit += coin->getValue();
		std::cout << "You have entered " << coin->getName() << std::endl;
	}

	std::cout << "Total amount you've entered: " << currentDeposit << std::endl;
	std::cout << "Coffee coins entered: " << coffeeCoins << std::endl;
	std::cout << std::endl;
}

void CoffeeMachine::printStatus() {
	std::cout << "You may purchase these type of coffees:" << std::endl;

	for (int i = 0; i < coffeeName.size(); i++)
	{
		if (coffeeCost[i] <= currentDeposit || coffeeCoins > 0) {
			std::cout << "Press " << i << " to purchase a " << coffeeName[i] << " that costs " << coffeeCost[i] << " euros or a coffee coin" << std::endl;
		}
	}
	std::cout << std::endl;
}