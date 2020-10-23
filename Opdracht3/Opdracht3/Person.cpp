#include "Person.h"
#include <string>


Person::Person(int personAge, std::string personName)
	:age(personAge), name(personName)
{

}

int Person::getAge() {
	return age;
}

std::string Person::getName() {
	return name;
}


Person::~Person()
{
}