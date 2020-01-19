#include "Employee.h"

Employee::Employee()
{
}


Employee::~Employee()
{
}

string Employee::getName()
{
	return Name;
}

string Employee::getDayofBirth()
{
	return DayofBirth;
}

double Employee::getBasicSalary()
{
	return basicSalary;
}

double Employee::getSalary()
{
	return 0;
}

void Employee::Input()
{
	cin.ignore();
	cout << "- Type name: ";
	getline(cin, Name);
	cout << "- Type day of birth: ";
	getline(cin, DayofBirth);
	cout << "- Set basic salary: ";
	cin >> basicSalary;
}

void Employee::Output()
{
	cout << "- Name: " << getName() << endl;
	cout << "- Day of birth: " << getDayofBirth() << endl;
	cout << "- Basic salary: " << getBasicSalary() << " $" << endl;
}

