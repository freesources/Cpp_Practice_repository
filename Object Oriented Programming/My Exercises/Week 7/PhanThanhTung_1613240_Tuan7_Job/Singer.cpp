#include "Singer.h"
#include <iostream>
using namespace std;

Singer::Singer()
{
}

void Singer::SetSpecialAttribute()
{
	cout << "Input type of music: ";
	cin >> TypeOfMusic;
	cout << "Input number of show: ";
	cin >> iNumberShow;
	cout << "Input number of album: ";
	cin >> iNumberAlbum;
}

string Singer::getToM()
{
	return TypeOfMusic;
}

int Singer::getNoS()
{
	return iNumberShow;
}

int Singer::getNoA()
{
	return iNumberAlbum;
}

void Singer::Output(Singer SG)
{
	Job::Output();
	cout << "Detail of this SINGER: " << endl;
	cout << " - Work at STAGE." << endl;
	cout << " - Type of music: " << SG.getToM() << endl;
	cout << " - Number of show: " << SG.getNoS() << endl;
	cout << " - Number of album: " << SG.getNoA() << endl;
}
