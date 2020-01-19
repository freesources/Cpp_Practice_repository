#pragma once
#include "Employee.h"

class Worker :public Employee
{
protected:
	int NumberofProduction;
public:
	Worker();
	~Worker();

	void Input();
	double getSalary();
	int getNumberofProduction();
	void Output();
};

