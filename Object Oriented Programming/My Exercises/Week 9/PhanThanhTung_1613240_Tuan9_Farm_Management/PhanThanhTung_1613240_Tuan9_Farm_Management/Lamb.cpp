#include "Lamb.h"
#include "time.h"

Lamb::Lamb()
{
}

Lamb::~Lamb()
{
}

void Lamb::setSourceAmount()
{
	cout << "\n- Input number of LAMBs that you want to put into your farm: ";
	Cattle::setSourceAmount();
}

int Lamb::getPregnant(int srcAmount)
{
	srand((unsigned)time(0));
	return Baby = srcAmount * (rand() % 10 + 1);
}

float Lamb::getVmilk(int srcAmount)
{
	srand((unsigned)time(0));
	return Vmilk = srcAmount * (rand() % 15);
}

string Lamb::getBawl()
{
	return Bawl = "Bwee bwee bwee...";
}