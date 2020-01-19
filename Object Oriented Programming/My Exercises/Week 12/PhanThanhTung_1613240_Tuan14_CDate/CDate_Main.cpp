#include "CDate.h"

int main() {
	CDate Date(0, 0, 0);
	cout << "__________INPUT YOUR DATE___________" << endl;
	cin >> Date;
	Date--;
	cout << "The previous day: " << Date << endl;
	Date++;
	Date++;
	cout << "The next day: " << Date << endl;
	system("pause");
}