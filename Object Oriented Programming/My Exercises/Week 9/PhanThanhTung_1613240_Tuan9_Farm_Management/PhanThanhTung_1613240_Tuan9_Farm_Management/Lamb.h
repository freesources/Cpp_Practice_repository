#pragma once
#include "Cattle.h"
class Lamb : public Cattle
{
public:
	Lamb();
	~Lamb();

	void setSourceAmount();

	int getPregnant(int srcAmount);
	float getVmilk(int srcAmount);
	string getBawl();
};

