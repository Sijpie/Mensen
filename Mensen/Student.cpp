#include "stdafx.h"
#include "Student.h"
#include <string>


Student::Student(std::string name, int age, int number)
{
	sName = name;
	sAge = age;
	sNumber = number;

}

int Student::getAge()
{
	return sAge;
}

std::string Student::getName()
{
	return sName;
}

int Student::getNumber()
{
	return sNumber;
}