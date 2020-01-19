#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker()
{
}

void Worker::InputNumberofProducts()
{
	Employee::SetInfor();
	cout << "Input number of products: ";
	cin >> iNoP;
}

void Worker::InputBasicSalary()
{
	cout << "Input basic salary: ";
	cin >> BasicSalary;
}

float Worker::getSalary()
{
	Employee::Salary = (BasicSalary + iNoP * 5000);
	return Employee::Salary;
}

void Worker::Output()
{
		cout << "\nInformation of this WORKER: " << endl;
		Employee::Output();
		cout << "3. Salary: " << getSalary() << endl;
}
