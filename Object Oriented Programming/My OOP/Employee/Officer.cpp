#include "Officer.h"
#include <iostream>
using namespace std;

Officer::Officer()
{
}

void Officer::InputNumberofWorkingDays()
{
	Employee::SetInfor();
	cout << "Input number of working days: ";
	cin >> iNoWD;
}

float Officer::getSalary()
{
	Employee::Salary = (100000 * iNoWD);
	return Employee::Salary;
}

void Officer::Output()
{
	cout << "\nInformation of this OFFICER: " << endl;
	Employee::Output();
	cout << "3. Salary: " << getSalary() << endl;
}
