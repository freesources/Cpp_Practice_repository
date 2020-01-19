#pragma once
#include "Job.h"
class Student: public Job
{
private:
	int ID;
	float GPA;
public:
	Student();
	void InputSpecialAttribute();
	int getID();
	float getGPA();
	void Output(Student ST);
}; 
