#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string Name;
	string DayofBirth;
	double basicSalary;
	double Salary;
public:
	Employee();
	~Employee();

	virtual void Input();
	virtual void Output();
	virtual double getSalary();

	string getName();
	string getDayofBirth();
	double getBasicSalary();
};

