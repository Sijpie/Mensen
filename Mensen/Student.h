#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon {
public:
	Student(std::string name, int age, int number);
	
	std::string sName;
	int sAge;
	int getAge();
	std::string getName();
	
	int sNumber;
	int getNumber();
};