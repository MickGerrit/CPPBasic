#include "Suitcase.h"

Suitcase::Suitcase()
{
}

Suitcase::~Suitcase()
{
}

Suitcase::Suitcase(std::string co)
{
	color = co;
}

Suitcase::Suitcase(const Suitcase& sc)
{
	if (this == &sc) return;
	this->socks = Socks(sc.socks.color);
}

Suitcase& Suitcase::operator=(const Suitcase& sc)
{
	if (this == &sc) return *this;
	color = sc.color;
	socks = Socks(sc.socks.color);
	return *this;
}

void Suitcase::fillSuitcaseWithSocks(Socks& s)
{
	socks = s;
}
