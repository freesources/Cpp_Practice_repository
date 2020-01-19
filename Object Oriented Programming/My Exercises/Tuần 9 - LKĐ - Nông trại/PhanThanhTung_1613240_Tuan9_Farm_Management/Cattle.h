#pragma once
#include <iostream>
#include <string>
#include "time.h"
using namespace std;

class Cattle
{
protected:
	int srcAmount;
	int Baby;
	float Vmilk;
	string Bawl;
public:
	Cattle();
	~Cattle();

	virtual void setSourceAmount();

	virtual int getPregnant(int srcAmount);
	virtual float getVmilk(int srcAmount);
	virtual string getBawl();

	int getSrcAmount();
};

