#include "stdafx.h"
#include "Docent.h"
#include <string>


Docent::Docent(std::string name, int age, std::string vak)
{
	dName = name;
	dAge = age;
	dClass = vak;
}

int Docent::getAge() {
	return dAge;
}

std::string Docent::getName()
{
	return dName;
}

std::string Docent::getClass()
{
	return dClass;
}
