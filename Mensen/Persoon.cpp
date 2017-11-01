#include "stdafx.h"

#include "Persoon.h"
#include <iostream>
#include <string>


Persoon::Persoon()
{
}

std::string Persoon::getName(std::string name)
{
	name1 = name;
	return name;
}

int Persoon::getAge(int age)
{
	age1 = age;
	return age;
}
