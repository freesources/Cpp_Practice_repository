#include "Goat.h"

Goat::Goat()
{
}

Goat::~Goat()
{
}

void Goat::setSourceAmount()
{
	cout << "\n- Input number of GOATs that you want to put into your farm: ";
	Cattle::setSourceAmount();
}

int Goat::getPregnant(int srcAmount)
{
	srand((unsigned)time(0));
	return Baby = srcAmount * (rand() % 10 + 1);
}

float Goat::getVmilk(int srcAmount)
{
	srand((unsigned)time(0));
	return Vmilk = srcAmount * (rand() % 5);
}

string Goat::getBawl()
{
	return Bawl = "Beeee beee beeee ...";
}