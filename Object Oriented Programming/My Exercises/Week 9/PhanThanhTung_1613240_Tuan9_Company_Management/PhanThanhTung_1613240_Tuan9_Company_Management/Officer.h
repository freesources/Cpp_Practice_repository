#pragma once
#include "Employee.h"

class Officer:public Employee
{
protected:
	int NumberofWorkingDay;
	double GrantMoney;
public:
	Officer();
	~Officer();

	void Input();
	double getSalary();
	int getNumberofWorkingDay();
	double getGrantMoney();
	void Output();
};

