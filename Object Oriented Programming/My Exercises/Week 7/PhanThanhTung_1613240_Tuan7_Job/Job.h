#pragma once
#include <string>
using namespace std;
class Job
{
protected:
	string Name;
	int YearofBirth;
	string Address;
public:
	Job();
	~Job();
	void SetInfor();
	string getName();
	int getYoB();
	string getAddress();
	void Output();
};

