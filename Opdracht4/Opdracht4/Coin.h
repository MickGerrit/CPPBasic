#pragma once
#include <string>

class Coin
{
public:
	float getValue();

	std::string getName();

	Coin();
	~Coin();
protected:
	float value;
	std::string name;
};

