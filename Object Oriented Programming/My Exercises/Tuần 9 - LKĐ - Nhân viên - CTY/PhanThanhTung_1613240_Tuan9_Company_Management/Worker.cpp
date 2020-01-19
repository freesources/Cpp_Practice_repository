#include "Worker.h"

Worker::Worker()
{
}

Worker::~Worker()
{
}

void Worker::Input()
{
	Employee::Input();
	cout << "- Input number of productions: ";
	cin >> NumberofProduction;
}

int Worker::getNumberofProduction()
{
	return NumberofProduction;
}

double Worker::getSalary()
{
	return (getBasicSalary() + getNumberofProduction() * 2000);
}

void Worker::Output()
{
	cout << "Information of this WORKER:" << endl;
	Employee::Output();
	cout << "- Salary of this WORKER: " << this->getSalary() << " $" << endl;
}
