#include "Magazine.h"

Magazine::Magazine()
{
}


Magazine::~Magazine()
{
}

void Magazine::InputInfo()
{
	cout << ">> Input information of this MAGAZINE <<" << endl;
	Book::InputInfo();
	cin.ignore();
	cout << "Input nation publishing: ";
	getline(cin, NationPublishing);
}

string Magazine::getNP()
{
	return NationPublishing;
}

void Magazine::OutputInfo()
{
	cout << "_________ MAGAZINE _________" << endl;
	Book::OutputInfo();
	cout << "- Nation publishing: " << NationPublishing << endl;
}
