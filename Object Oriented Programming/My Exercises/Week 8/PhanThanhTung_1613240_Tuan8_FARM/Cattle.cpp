#include "Cattle.h"
#include <iostream>
using namespace std;
#include <string>

Cattle::Cattle()
{
}


Cattle::~Cattle()
{
}

int Cattle::getPregnant()
{
	return iPregnant;
}

void Cattle::setPregnant(int Baby)
{
	iPregnant = Baby;
}

float Cattle::getVmilk()
{
	return Vmilk;
}

void Cattle::setVmilk(float volume)
{
	Vmilk = volume;
}

string Cattle::getBawl()
{
	return Bawl;
}

void Cattle::setBawl(string call)
{
	Bawl = call;
}
