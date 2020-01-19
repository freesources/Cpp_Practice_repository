#pragma once
#include <string>
using namespace std;
class Cattle
{
protected:
	int iPregnant;
	float Vmilk;
	string Bawl;
public:
	Cattle();
	~Cattle();

	int getPregnant();
	void setPregnant(int Baby);

	float getVmilk();
	void setVmilk(float volume);

	string getBawl();
	void setBawl(string call);
};

