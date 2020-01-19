#include "Goat.h"
#include "time.h"

Goat::Goat()
{
}

Goat::~Goat()
{
}

int Goat::getBaby(int iGoat)
{
	srand((unsigned)time(0));
	return iPregnant = iGoat * (rand() % 10 + 1);
}

float Goat::getVmilk(int iGoat)
{
	srand((unsigned)time(0));
	return Vmilk = iGoat * (rand() % 5);
}

string Goat::getBawl()
{
	return Bawl = "Beeee beee beeee ...";
}