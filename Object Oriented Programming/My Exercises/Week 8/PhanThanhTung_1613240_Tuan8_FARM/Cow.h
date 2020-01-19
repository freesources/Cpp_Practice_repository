#pragma once
#include "Cattle.h"
#include <string>
class Cow: public Cattle
{
public:
	Cow();
	~Cow();
	int iCow;
	int getBaby(int iCow);
	float getVmilk(int iCow);
	string getBawl();
};

