#include "Socks.h"

Socks::Socks()
{
}

Socks::~Socks()
{
}

Socks::Socks(std::string co)
{
	color = co;
}

Socks::Socks(const Socks& s)
{
	if (this == &s) return;
}

Socks& Socks::operator=(const Socks& s)
{
	color = s.color;
	return *this;
}