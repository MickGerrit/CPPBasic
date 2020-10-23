#pragma once
#include <iostream>

class Socks
{
public:
	Socks();
	Socks(std::string k);
	virtual ~Socks();
	Socks(const Socks& s);
	Socks& operator=(const Socks& s);
	std::string color = "purple";
};