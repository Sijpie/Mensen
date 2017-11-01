#pragma once
#include <string>

class Persoon
{
public:
	Persoon();

	std::string name1;
	int age1;

	virtual int getAge(int age);
	virtual std::string getName(std::string name);
};