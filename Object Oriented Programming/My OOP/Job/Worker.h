#pragma once
#include "Job.h"
class Worker : public Job
{
private:
	int BasicSalary;
	int iNumberofDayoff;
	int iNumberofExperienceYear;
public:
	Worker();
	void SetSpecialAttribute();
	int getBS();
	int getNoDO();
	int getNoEY();
	void Output(Worker WK);
};
