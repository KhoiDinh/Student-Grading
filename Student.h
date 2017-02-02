//inputs: none
//output: none
//header class used in order to create function name for Student.cpp
#include <string>
using namespace std;

class Student
{
private:
	string Name;
	int IdNumber;
	double gpa;
	string major_area;
public:
	// constructors
	Student();  // default constructor
	Student(string n, int id, double g, string f);

	//mutators and accessors
	void setName(string n);
	string getName();
	void setIdNumber(int id);
	int  getIdNumber();
	void setGpa(double g);
	double getGpa();
	void setMajor(string f); //sets field student is in
	string getMajor();// gets field student is in
};


