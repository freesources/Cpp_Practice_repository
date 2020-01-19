#include "Candidate.h"
#include <iostream>
#include <string.h>
using namespace std;


Candidate::Candidate()
{
}


Candidate::~Candidate()
{
}

void Candidate::InputInfor()
{
	cout << "\n>>> INPUT INFORMATION <<<" << endl;
	cout << "1. Input Student's code: ";
	cin >> CODE;
	cin.ignore();
	cout << "2. Input name: ";
	getline(cin, Name);
	cout << "3. Input day of birth: ";
	cin >> DayofBirth;
	getline(cin, DayofBirth);

	cout << "4. Type Math's mark: ";
	cin >> mathMARK;
	cout << "5. Type Literature's mark: ";
	cin >> literatureMARK;
	cout << "6. Type English's mark: ";
	cin >> englishMARK;
}

float Candidate::GPA()
{
	return (mathMARK + literatureMARK + englishMARK);
}

void Candidate::OutputInfor()
{
	if (GPA() > 15)
	{
		cout << "\nID: " << CODE << endl;
		cout << "Name: " << Name << endl;;
		cout << "Day of birth: " << DayofBirth << endl;
		cout << "Math's mark: " << mathMARK << ". \n" << "Literature's mark: " << literatureMARK << ".\n" << "English's mark: " << englishMARK << "." << endl;
		cout << endl << endl;
	}
}