#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::Input()
{
	Employee::Input();
	cout << "- Input coefficient of position: ";
	cin >> Coefficient;
	cout << "- Input bonus money: ";
	cin >> Bonus;
}

double Manager::getSalary()
{
	return (getBasicSalary()*getCoefficient()+getBonus());
}

float Manager::getCoefficient()
{
	return Coefficient;
}

double Manager::getBonus()
{
	return Bonus;
}

void Manager::Output()
{
	cout << "Information of this MANAGER:" << endl;
	Employee::Output();
	cout << "- Salary of this MANAGER: " << this->getSalary() << " $" << endl;
}
