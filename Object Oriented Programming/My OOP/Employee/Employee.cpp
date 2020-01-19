#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	Name = "";
	DayofBirth = "";
	Salary = NULL;
}

Employee::~Employee()
{
}

void Employee::SetInfor()
{
	cin.ignore();
	cout << "Input name of employee: ";
	getline(cin, Name);
	cout << "Input day of birth: ";
	getline(cin, DayofBirth);
}

string Employee::getName()
{
	return Name;
}

string Employee::getDoB()
{
	return DayofBirth;
}

float Employee::getSalary()
{
	return Salary;
}

void Employee::Output()
{
	cout << "1. Name: " << getName() << endl;
	cout << "2. Day of birth: " << getDoB() << endl;
}
