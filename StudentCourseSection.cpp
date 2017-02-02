//inputs: Student CIS054[] = Student(string name, int id, int gpa, string field)
//output: Student CIS054[] = Student(string name, int id, int gpa, string field), error messages, average 
//program uses header and another class to calculate average gpa and outputs each student's name. id, and field

#include "stdafx.h"
#include <iostream>
#include "Student.h"
using namespace std;

// define an array of students
Student CIS054[] = {
	Student("Joe", 44536, 0.0, "CS"),
	Student("Sally", 55458, 0.0, "Pharmacy"),
	Student("Fred", 66587, 2.9, "Engineering"),
	Student("Jose", 67892, 3.5, "Business"),
	Student("Thnih", 73657, 3.6, "Kinseology")
};


int main(int argc, char* argv[])
{
	int NumberOfStudents = sizeof(CIS054) / sizeof(Student);
	int id_counter = 0;
	cout << endl;
	// List all the students in the course
	for (int i = 0; i < NumberOfStudents; i++)
	{
		cout << CIS054[i].getIdNumber() << "  " << CIS054[i].getName() << "  " << CIS054[i].getGpa() << "  " << CIS054[i].getMajor() << endl;
	}
	cout << endl;   // blank line after displaying the student names
	for (int i = 0; i < NumberOfStudents; i++)
	{
		if (CIS054[i].getIdNumber() < 1 || CIS054[i].getIdNumber() > 1000000)
		{
			id_counter++;
		}

	}
	if (id_counter > 0)
	{
		cout << "There are " << id_counter << " invalid IDs." << endl;
	}

	// compute the average gpa of all the students
	double total = 0;
	int gpa_counter = 0;
	for (int i = 0; i < NumberOfStudents; i++)
	{
		total += CIS054[i].getGpa();
		if (CIS054[i].getGpa() == 0)
		{
			gpa_counter++;
		}
	}

	cout << "There are " << gpa_counter << " invalid GPAs." << endl;

	double average = total / NumberOfStudents;
	cout << "The average GPA of all the students is " << average << endl;
	return 0;
}
