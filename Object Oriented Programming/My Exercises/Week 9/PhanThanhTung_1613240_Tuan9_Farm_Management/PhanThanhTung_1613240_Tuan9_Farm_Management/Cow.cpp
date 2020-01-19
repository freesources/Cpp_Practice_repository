#include "Cow.h"

Cow::Cow()
{
}

Cow::~Cow()
{
}

void Cow::setSourceAmount()
{
	cout << "- Input number of COWs that you want to put into your farm: ";
	Cattle::setSourceAmount();
}

int Cow::getPregnant(int srcAmount)
{
	srand((unsigned)time(0));
	return Baby = srcAmount * (rand()%10 +1);
}

float Cow::getVmilk(int srcAmount)
{
	srand((unsigned)time(0));
	return Vmilk = srcAmount * (rand()%20);
}

string Cow::getBawl()
{
	return Bawl = "Umboar Umboar Umboar ...";
}