#pragma once
#include "Cattle.h"
class Cow: public Cattle
{
public:
	Cow();
	~Cow();

	void setSourceAmount();

	int getPregnant(int srcAmount);
	float getVmilk(int srcAmount);
	string getBawl();
};

