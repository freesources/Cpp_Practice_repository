#pragma once
#include "Job.h"
#include <string>

class Singer : public Job
{
private:
	string TypeOfMusic;
	int iNumberShow;
	int iNumberAlbum;
public:
	Singer();
	void SetSpecialAttribute();
	string getToM();
	int getNoS();
	int getNoA();
	void Output(Singer SG);
};