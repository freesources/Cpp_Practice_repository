#include "Cattle.h"
#include "Cow.h"
#include "Goat.h"
#include "Lamb.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << "_____________ WELCOME TO YOUR HAPPY FARM _____________" << endl;
	cout << "1. Show number of BABY-COWs. " << endl;
	cout << "2. Show number of BABY-GOATs. " << endl;
	cout << "3. Show number of BABY-LAMBs. " << endl;
	cout << "4. Volume of COW's milk in this harvest. " << endl;
	cout << "5. Volume of GOAT's milk in this harvest. " << endl;
	cout << "6. Volume of LAMB's milk in this harvest. " << endl;
	cout << "7. Hmm... Do you know what does the COW say when they hungry? :/ " << endl;
	cout << "8. Hmm... Do you know what does the GOAT say when they hungry? :/ " << endl;
	cout << "9. Hmm... Do you know what does the LAMB say when they hungry? :/ " << endl;
	cout << "_________________________________________________" << endl;
	cout << "0. Leave the farm." << endl;
	cout << "\nYour choice: ";
		do
		{
			cin >> choice;
			if (choice > 9 || choice < 0)
			cout << "Our farm do not have this function yet! Please choose again: ";
		} while (choice > 9 || choice < 0);
		cin.ignore();
		return choice;
}

int main()
{
	int choice;
	Cattle *Cattle[2];
	Cattle[0] = new Cow();
	Cattle[0]->setSourceAmount();
	Cattle[1] = new Goat();
	Cattle[1]->setSourceAmount();
	Cattle[2] = new Lamb();
	Cattle[2]->setSourceAmount();

	cout << "\n -------> AFTER ONE HARVEST <------- " << endl;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			cout << "\nNumber of BABY-COWs: " << Cattle[0]->getPregnant(Cattle[0]->getSrcAmount()) << endl;
			break;
		}
		case 2:
		{
			cout << "\nNumber of BABY-GOATs: " << Cattle[1]->getPregnant(Cattle[1]->getSrcAmount()) << endl;
			break;
		}
		case 3:
		{
			cout << "\nNumber of BABY-LAMBs: " << Cattle[2]->getPregnant(Cattle[2]->getSrcAmount()) << endl;
			break;
		}
		case 4:
		{
			cout << "\nVolume of COW's milk in this harvest: " << Cattle[0]->getVmilk(Cattle[0]->getSrcAmount()) << " liter(s)" << endl;
			break;
		}
		case 5:
		{
			cout << "\nVolume of GOAT's milk in this harvest: " << Cattle[1]->getVmilk(Cattle[1]->getSrcAmount()) << " liter(s)" << endl;
			break;
		}
		case 6:
		{
			cout << "\nVolume of LAMB's milk in this harvest: " << Cattle[2]->getVmilk(Cattle[2]->getSrcAmount()) << " liter(s)" << endl;
			break;
		}
		case 7:
		{
			cout << "\nThe COWs say: " << Cattle[0]->getBawl() << endl;
			break;
		}
		case 8:
		{
			cout << "\nThe GOATs say: " << Cattle[1]->getBawl() << endl;
			break;
		}
		case 9:
		{
			cout << "\nThe LAMBs say: " << Cattle[2]->getBawl() << endl;
			break;
		}
		case 0:
		{
			exit(0);
		}
		}
	} while (choice != 0);
}