#include "Job.h"
#include <iostream>
using namespace std;

Job::Job()
{
	Name = "";
	YearofBirth = NULL;
	Address = "";
}

Job::~Job()
{
}

void Job::SetInfor()
{
	cin.ignore();
	cout << "Input name: ";
	getline(cin, Name);
	cout << "Input year of birth: ";
	cin >> YearofBirth;
	cin.ignore();
	cout << "Input address: ";
	getline(cin, Address);
}

string Job::getName()
{
	return Name;
}

int Job::getYoB()
{
	return YearofBirth;
}

string Job::getAddress()
{
	return Address;
}

void Job::Output()
{
	cout << "Basic information of this person: " << endl;
	cout << "- Name: " << this->getName() << endl;
	cout << "- Year of birth: " << this->getYoB() << endl;
	cout << "- Adress: " << this->getAddress() << endl;
}
