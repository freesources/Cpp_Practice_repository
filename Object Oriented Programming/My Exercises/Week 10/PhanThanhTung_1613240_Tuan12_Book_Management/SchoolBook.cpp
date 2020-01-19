#include "SchoolBook.h"

SchoolBook::SchoolBook()
{
}


SchoolBook::~SchoolBook()
{
}

void SchoolBook::InputInfo()
{
	cout << ">> Input information of this SCHOOL BOOK <<" << endl;
	Book::InputInfo();
	cout << "Input grade of SCHOOL BOOK: ";
	cin >> Grade;
}

int SchoolBook::getGrade()
{
	return Grade;
}

void SchoolBook::OutputInfo()
{
	cout << "_________ SCHOOL BOOK _________" << endl;
	Book::OutputInfo();
	cout << "- Grade: " << Grade << endl;
}
