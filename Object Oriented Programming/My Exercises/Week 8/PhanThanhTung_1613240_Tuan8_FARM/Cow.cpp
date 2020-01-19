#include "Cow.h"
#include "time.h"

Cow::Cow()
{
}

Cow::~Cow()
{
}

int Cow::getBaby(int iCow)
{
	srand((unsigned)time(0));
	return iPregnant = iCow * (rand()%10 +1);
}

float Cow::getVmilk(int iCow)
{
	srand((unsigned)time(0));
	return Vmilk = iCow * (rand()%20);
}

string Cow::getBawl()
{
	return Bawl = "Umboar Umboar Umboar ...";
}