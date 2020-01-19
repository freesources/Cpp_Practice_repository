#pragma once
#include "Cattle.h"
class Lamb : public Cattle
{
public:
	int iLamb;
	Lamb();
	~Lamb();
	int getBaby(int iLamb);
	float getVmilk(int iGoat);
	string getBawl();
};

