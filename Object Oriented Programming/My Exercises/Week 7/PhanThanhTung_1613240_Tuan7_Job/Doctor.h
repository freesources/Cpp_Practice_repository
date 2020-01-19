#pragma once
#include "Job.h"
#include <string>

class Doctor : public Job
{
private:
	string Major;
	int iNumberOfWorkingYear;
public:
	Doctor();
	void SetSpecialAttribute();
	string getMajor();
	int getNoWY();
	void Output(Doctor DT);
};