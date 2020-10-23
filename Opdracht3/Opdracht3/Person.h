#pragma once
#include <string>

class Person
{
public:
	int getAge();
	std::string getName();

	Person(int personAge, std::string personName);
	~Person();

private:
	int age;
	std::string name;
};

