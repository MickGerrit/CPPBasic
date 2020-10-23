#include <iostream>
#include "Caravan.h"
#include "Suitcase.h"
#include "Socks.h"

int main()
{
	Socks* newSocks = new Socks("black");
	Suitcase* newSuitcase = new Suitcase("blue");
	Caravan* newCaravan = new Caravan("pink");
	Caravan stolenCaravan = *newCaravan;

	newSuitcase->fillSuitcaseWithSocks(*newSocks);
	newCaravan->fillCaravanWithSuitcase(*newSuitcase);
	newCaravan->displayCaravan();
	std::cout << "These are the details of the stolen caravan: " << std::endl;
	stolenCaravan.displayCaravan();

	delete newSocks;
	delete newSuitcase;
	delete newCaravan;
}