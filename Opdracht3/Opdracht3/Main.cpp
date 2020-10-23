#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main()
{
	Teacher* teacher = new Teacher(52, "Theo", 40);
	Student* student = new Student(21, "Mick", 4);
	std::cout << "Student: " << student->getName() << ", Age: " << student->getAge() << "\n";
	std::cout << "Teacher: " << teacher->getName() << ", Age: " << teacher->getAge() << "\n";
	return 0;
}
