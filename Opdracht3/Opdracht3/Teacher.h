#pragma once
#include "Person.h"

class Teacher : public Person
{
public:
	Teacher(int personAge, std::string personName, int weeklyHours);
	~Teacher();

private:
	int weeklyHours;
};