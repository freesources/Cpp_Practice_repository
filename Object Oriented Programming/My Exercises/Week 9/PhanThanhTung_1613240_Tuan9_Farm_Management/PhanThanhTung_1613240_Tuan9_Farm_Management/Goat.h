#pragma once
#include "Cattle.h"
class Goat : public Cattle
{
public:
	Goat();
	~Goat();

	void setSourceAmount();

	int getPregnant(int srcAmount);
	float getVmilk(int srcAmount);
	string getBawl();
};

