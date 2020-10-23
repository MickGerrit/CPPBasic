#include "Student.h"
#include <string>


Student::Student(int personAge, std::string personName, int currentYear)
	:Person(personAge, personName), currentYear(currentYear)
{
}


Student::~Student()
{
}