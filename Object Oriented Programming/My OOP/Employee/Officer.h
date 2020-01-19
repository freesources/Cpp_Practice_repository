#pragma once
#include "Employee.h"
class Officer: public Employee
{
private:
	int iNoWD; //number of working days
public:
	Officer();
	void InputNumberofWorkingDays();
	float getSalary();
	void Output();
};