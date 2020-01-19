#pragma once
#include "Employee.h"

class Manager :public Employee
{
protected:
	float Coefficient;
	double Bonus;
public:
	Manager();
	~Manager();

	void Input();
	double getSalary();
	float getCoefficient();
	double getBonus();
	void Output();
};

