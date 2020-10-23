#pragma once
#include "Person.h"

class Student : public Person
{
public:
	Student(int personAge, std::string personName, int currentYear);
	~Student();
private:
	int currentYear;
};
