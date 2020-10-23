#include "Teacher.h"
#include <string>

Teacher::Teacher(int agep, std::string namep, int weeklyHours)
	:Person(agep, namep), weeklyHours(weeklyHours)
{
}


Teacher::~Teacher()
{
}