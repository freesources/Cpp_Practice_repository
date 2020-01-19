#pragma once
#include "Cattle.h"
class Goat : public Cattle
{
public:
	int iGoat;
	Goat();
	~Goat();
	int getBaby(int iGoat);
	float getVmilk(int iGoat);
	string getBawl();
};

