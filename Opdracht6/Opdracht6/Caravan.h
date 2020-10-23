#pragma once
#include <iostream>
#include <string>
#include "Suitcase.h"

class Caravan
{
public:
	std::string color = "white";
	Suitcase suitcase;
	Caravan();
	Caravan(std::string co);
	virtual ~Caravan();
	Caravan(const Caravan& c);
	Caravan& operator=(const Caravan& c);

	void fillCaravanWithSuitcase(Suitcase& sc);
	void displayCaravan();
};