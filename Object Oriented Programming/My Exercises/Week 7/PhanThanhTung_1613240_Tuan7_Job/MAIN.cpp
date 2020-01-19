#include <iostream>
#include "Job.h"
#include "Doctor.h"
#include "Worker.h"
#include "Student.h"
#include "Singer.h"
#define MAX 100
using namespace std;

int functionTable()
{
	int c;
	cout << " _____________ JOB MANAGER _____________" << endl;
	cout << "|				        |" << endl;
	cout << "|  Choose your job:		        |" << endl;
	cout << "|  1. Student.      		        |" << endl;
	cout << "|  2. Worker.      		        |" << endl;
	cout << "|  3. Singer.      	                |" << endl;
	cout << "|  4. Doctor.      	                |" << endl;
	cout << "|  -------------------	                |" << endl;
	cout << "|  5. Print list STUDENT.               |" << endl;
	cout << "|  6. Print list WORKER.                |" << endl;
	cout << "|  7. Print list SINGER.      	        |" << endl;
	cout << "|  8. Print list DOCTOR.      	        |" << endl;
	cout << "|  -------------------	                |" << endl;
	cout << "|				        |" << endl;
	cout << "|  0. Cancle.      	                |" << endl;
	cout << "|_______________________________________|" << endl;
	cout << "Your choice: ";
	do
	{
		cin >> c;
		if (c < 0 || c>8)
		{
			cout << "Wrong chosen! Please choose again! " << endl;
			cout << "Your choice: ";
		}
	} while (c < 0 || c > 8);
	return c;
}

int main()
{
	int i, choice, iDT=0, iST=0, iWK=0, iSG=0;
	Doctor DT[MAX];
	Student ST[MAX];
	Worker WK[MAX];
	Singer SG[MAX];
	do {
		choice = functionTable();
		switch (choice)
		{
		case 1:
			ST[iST].SetInfor();
			ST[iST].InputSpecialAttribute();
			iST++;
			break;
		case 2:
			WK[iWK].SetInfor();
			WK[iWK].SetSpecialAttribute();
			iWK++;
			break;
		case 3:
			SG[iSG].SetInfor();
			SG[iSG].SetSpecialAttribute();
			iSG++;
			break;
		case 4:
			DT[iDT].SetInfor();
			DT[iDT].SetSpecialAttribute();
			iDT++;
			break;
		case 5:
			for (int i = 0; i < iST; i++)
			{
				ST[i].Output(ST[i]);
				cout << endl;
			}
			break;
		case 6:
			for (int i = 0; i < iWK; i++)
			{
				WK[i].Output(WK[i]);
				cout << endl;
			}
			break;
		case 7:
			for (int i = 0; i < iSG; i++)
			{
				SG[i].Output(SG[i]);
				cout << endl;
			}
			break;
		case 8:
			for (int i = 0; i < iDT; i++)
			{
				DT[i].Output(DT[i]);
				cout << endl;
			}
			break;
		case 0:
			exit(0);
		}
	} while (true);
	system("pause");
}