#pragma once
#include <string>
#include "Persoon.h"

class Docent : public Persoon
{
public:
	Docent(std::string naam, int leeftijd, std::string vak);
	std::string dName;
	int dAge;
	int getAge();
	std::string getName();
	
	std::string dClass;
	std::string getClass();


};