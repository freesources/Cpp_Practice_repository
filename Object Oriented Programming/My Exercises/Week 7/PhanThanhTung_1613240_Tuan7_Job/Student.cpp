#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
}

void Student::InputSpecialAttribute()
{
	cout << "Input ID: ";
	cin >> ID;
	cout << "Input GPA: ";
	cin >> GPA;
}

int Student::getID()
{
	return ID;
}

float Student::getGPA()
{
	return GPA;
}

void Student::Output(Student ST)
{
	Job::Output();
	cout << "Detail of this STUDENT: " << endl;
	cout << " - Work at SCHOOL." << endl;
	cout << " - ID: " << ST.getID() << endl;
	cout << " - GPA: " << GPA << endl;
}
