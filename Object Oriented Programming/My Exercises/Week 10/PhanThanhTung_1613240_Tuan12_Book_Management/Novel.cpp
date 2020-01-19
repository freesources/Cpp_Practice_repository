#include "Novel.h"

Novel::Novel()
{
}


Novel::~Novel()
{
}

void Novel::InputInfo()
{
	cout << ">> Input information of this NOVEL <<" << endl;
	Book::InputInfo();
	cin.ignore();
	cout << "Input kind of novel: ";
	getline(cin, kindOfNovel);
}

string Novel::getkindOfNovel()
{
	return kindOfNovel;
}

void Novel::OutputInfo()
{
	cout << "_________ NOVEL _________" << endl;
	Book::OutputInfo();
	cout << "- Kind of novel: " << kindOfNovel << endl;
}
