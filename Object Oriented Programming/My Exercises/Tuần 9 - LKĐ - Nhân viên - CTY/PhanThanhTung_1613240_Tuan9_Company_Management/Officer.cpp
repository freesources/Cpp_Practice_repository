#include "Officer.h"

Officer::Officer()
{
}

Officer::~Officer()
{
}

void Officer::Input()
{
	Employee::Input();
	cout << "- Input number of working day: ";
	cin >> NumberofWorkingDay;
	cout << "- Input grant money: ";
	cin >> GrantMoney;
}

double Officer::getSalary()
{
	return (getBasicSalary() + getNumberofWorkingDay() * 20000 + getGrantMoney());
}

int Officer::getNumberofWorkingDay()
{
	return NumberofWorkingDay;
}

double Officer::getGrantMoney()
{
	return GrantMoney;
}

void Officer::Output()
{
	cout << "Information of this OFFICER:" << endl;
	Employee::Output();
	cout << "- Salary of this OFFICER: " << this->getSalary() << " $" <<endl;
}
