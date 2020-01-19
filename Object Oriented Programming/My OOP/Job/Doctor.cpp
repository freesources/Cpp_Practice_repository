#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor()
{
}

void Doctor::SetSpecialAttribute()
{
	cout << "Major of this doctor: ";
	cin >> Major;
	cout << "Input number of working years: ";
	cin >> iNumberOfWorkingYear;
}

string Doctor::getMajor()
{
	return Major;
}

int Doctor::getNoWY()
{
	return iNumberOfWorkingYear;
}

void Doctor::Output(Doctor DT)
{
	Job::Output();
	cout << "Detail of this DOCTOR: " << endl;
	cout << " - Work at HOSPITAL." << endl;
	cout << " - Type of music: " << DT.getMajor() << endl;
	cout << " - Number of working year: " << DT.getNoWY() << endl;
}