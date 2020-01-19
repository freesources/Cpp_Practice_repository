#pragma once
#include "Employee.h"
class Worker: public Employee
{
private:
	int iNoP;	//number of products
public:
	float BasicSalary;
	Worker();
	void InputNumberofProducts();
	void InputBasicSalary();
	float getSalary();
	void Output();
};