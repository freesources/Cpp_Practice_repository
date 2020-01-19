#pragma once
#include <string>
using namespace std;
class Employee
{
protected:
	string Name;
	string DayofBirth;
	float Salary;
	float BasicSalary;	
public:
	Employee();
	~Employee();
	string getName();
	string getDoB();
	float getSalary();
	void SetInfor();
	void Output();
};

