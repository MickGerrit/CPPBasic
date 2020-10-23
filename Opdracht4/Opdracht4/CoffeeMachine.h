#pragma once
#include "Coin.h"
#include <vector>

class CoffeeMachine
{
public:
	CoffeeMachine();
	~CoffeeMachine();

	void addCoffee(std::string name, float cost);

	void buyCoffee(int nr);

	void acceptCoin(Coin* coin);

	void printStatus();

private:
	float currentDeposit;
	int coffeeCoins;

	std::vector<std::string> coffeeName;
	std::vector<double> coffeeCost;
};