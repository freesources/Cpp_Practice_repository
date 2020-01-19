#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker()
{
}

void Worker::SetSpecialAttribute()
{
	cout << "Input basic salary: ";
	cin >> BasicSalary;
	cout << "Input number of day off: ";
	cin >> iNumberofDayoff;
	cout << "Input number of experience years: ";
	cin >> iNumberofExperienceYear;
}

int Worker::getBS()
{
	return BasicSalary;
}

int Worker::getNoDO()
{
	return iNumberofDayoff;
}

int Worker::getNoEY()
{
	return iNumberofExperienceYear;
}

void Worker::Output(Worker WK)
{
	Job::Output();
	cout << "Detail of this WORKER: " << endl;
	cout << " - Work at FACTORY." << endl;
	cout << " - Basic salary: " << WK.getBS() << endl;
	cout << " - Number of dayoff: " << WK.getNoDO() << endl;
	cout << " - Number of experience years: " << WK.getNoEY() << endl;
}
