#include "Caravan.h"

Caravan::Caravan()
{
}

Caravan::~Caravan()
{
}

Caravan::Caravan(std::string co)
{
	color = co;
}

Caravan::Caravan(const Caravan& c)
{
	if (this == &c) return;
	this->suitcase = Suitcase(c.suitcase.color);
}

Caravan& Caravan::operator=(const Caravan& c)
{
	if (this == &c) return *this;
	color = c.color;
	suitcase = Suitcase(c.suitcase.color);
	suitcase.socks = Socks(c.suitcase.socks.color);
	return *this;
}

void Caravan::displayCaravan()
{
	std::cout << " - " << color << " caravan" << std::endl << " - " << this->suitcase.color << " suitcase " << std::endl << " - " << this->suitcase.socks.color << " socks" << std::endl;
}

void Caravan::fillCaravanWithSuitcase(Suitcase& sc)
{
	suitcase = sc;
}