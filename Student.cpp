//inputs: none
//output:none
//another class with functions to assist StudentGradingLab.cpp in calculations

#include "stdafx.h"     // only for Microsoft Visual Studio C++ programs
#include "Student.h"
#include <cctype>       // used by isalpha (test for a character)
#include <iostream>
using namespace std;

// default Student constructor
Student::Student()
{
	Name = "";  // set name to an empty string
	IdNumber = 0;
	gpa = 0.0;
	major_area = "";
}
// Fully qualified Student constructor
Student::Student(string n, int id, double g, string f)
{
	setName(n);          // use setName to validate data
	setIdNumber(id); // use setIdNumber to validate data
	setGpa(g); // use setGpa to validate data
	setMajor(f);
}

//mutators and accessors
void Student::setName(string n)
{
	if (isupper(n[0]))   // 1st character of name must be A-Z
		Name = n;
	else
		Name = "Illegal selection";
}
string Student::getName()
{
	return Name;
}
void Student::setIdNumber(int id)
{
	if (id>1 && id<1000000)   // must be from 0 to 1000000
		IdNumber = id;
	else
	{
		IdNumber = 0;          // indicate an illegal selection
		//cout << "Illegal ID number. The # number of time this appears is the number of illegal ID's you have." << endl;

	}
}
int  Student::getIdNumber()
{
	return IdNumber;
}
void Student::setGpa(double g)
{
	int gpa_counter = 0;
	if (g >= 0.0 && g <= 4.0)         // gpa must be from 0.0 to 4.0
		gpa = g;
	else
	{
		gpa = 0;

	}
}
double Student::getGpa()
{
	return gpa;
}
void Student::setMajor(string field)
{
	if (isupper(field[0]))   // 1st character of name must be A-Z
		major_area = field;
	else
		major_area = "Illegal selection";
}
string Student::getMajor()
{
	return major_area;
}

