// Mensen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"


int main()
{
	Docent docent("Eppo", 45, "INOOP");
	Student student("Sophie", 28, 2081061);
	std::cout << "Docent: " << docent.getName() <<" Leeftijd: " << docent.getAge() << " Vak: " << docent.getClass() << std::endl;
	std::cout << "Student: " << student.getName() << " Leeftijd: " << student.getAge() << " Studenten nummer: " << student.getNumber() << std::endl;
}