#pragma once
#include <iostream>
#include <string>
#include "Socks.h"

class Suitcase
{
public:
	Suitcase();
	Socks socks;
	Suitcase(std::string co);
	virtual ~Suitcase();
	Suitcase(const Suitcase& sc);
	Suitcase& operator=(const Suitcase& sc);
	std::string color = "cyan";
	void fillSuitcaseWithSocks(Socks& s);
};