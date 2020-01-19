#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

typedef struct StudentNode
{
	int ID;
	string Name;
	float MathMark;
	float PhysicsMark;
	float ChemistryMark;
	struct StudentNode *pPre;
	struct StudentNode *pNext;
} Node;

typedef struct StudentList
{
	Node *pHead;
	Node *pTail;
} List;

void CreateList(List &L)
{
	L.pHead = NULL;
	L.pTail = NULL;
}

void Input(Node *p)
{
	cout << "Input name: ";
	cin.ignore();
	getline(cin, p->Name);
	cout << "Input ID: ";
	cin >> p->ID;
	cout << "Input mark of Math: ";
	do
	{
		cin >> p->MathMark;
		if (p->MathMark < 0 || p->MathMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->MathMark < 0 || p->MathMark > 10);

	cout << "Input mark of Physics: ";
	do
	{
		cin >> p->PhysicsMark;
		if (p->PhysicsMark < 0 || p->PhysicsMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->PhysicsMark < 0 || p->PhysicsMark > 10);

	cout << "Input mark of Chemistry: ";
	do
	{
		cin >> p->ChemistryMark;
		if (p->ChemistryMark < 0 || p->ChemistryMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->ChemistryMark < 0 || p->ChemistryMark > 10);
}

Node* CreateNode()
{
	Node *temp;
	temp = new Node;
	if (temp == NULL)
	{
		cout << "Not enough memory! ";
		exit(1);
	}
	else
	{
		Input(temp);
		temp->pNext = NULL;
		temp->pPre = NULL;
		return temp;
	}
}

void AddFirst(List &L, Node *temp)
{
	if (L.pHead == NULL)
	{
		L.pHead = temp;
		L.pTail = L.pHead;
	}
	else
	{
		temp->pNext = L.pHead;
		L.pHead->pPre = temp;
		L.pHead = temp;
	}
}

void DeleteFirst(List &L)
{
	Node *p;
	if (L.pHead != NULL)
	{
		p = L.pHead;
		L.pHead = L.pHead->pNext;
		L.pHead->pPre = NULL;
		delete p;
		if (L.pHead == NULL)
			L.pTail = NULL;
	}
}

void DeleteLastQ(List &L, Node *q)
{
	Node *p;
	if (q != NULL)
	{
		p = q->pNext;
		if (p != NULL)
		{
			q->pNext = p->pNext;
			if (p == L.pTail)
				L.pTail = q;
			else
				p->pNext->pPre = q;
			delete p;
		}
	}
	else
		DeleteFirst(L);
}

void DeleteX(List &L, int X)
{
	Node *p;
	Node *q;
	q = NULL;
	p = L.pHead;
	while (p != NULL)
	{
		if (p->ID == X)
			break;
		q = p;
		p = p->pNext;
	}
	if (q != NULL)
		DeleteLastQ(L, q);
	else
		DeleteFirst(L);
}

void FindInfor(List &L, int ID)
{
	Node *p;
	Node *q;
	q = NULL;
	p = L.pHead;
	while (p != NULL)
	{
		if (p->ID == ID)
			break;
		q = p;
		p = p->pNext;
	}
	if (q == NULL)
		cout << "Not have student have X value!";
	if (q != NULL)
		cout << "Informations of this student: \n" << p->Name << " | " << p->ID << " | Mark of 3 subject <Math,Physics,Chemistry> : " << p->MathMark << ", " << p->PhysicsMark << ", " << p->ChemistryMark;
}

Node* Search(List &L, int ID)
{
	Node *p;
	Node *q;
	q = NULL;
	p = L.pHead;
	while (p != NULL)
	{
		if (p->ID == ID)
			break;
		q = p;
		p = p->pNext;
	}
	return p;
}

int TABLElist()
{
	int choice;
	cout << "\n ______________________ STUDENT MANAGER ______________________" << endl;
	cout << "|							      |" << endl;
	cout << "|  1. Input information a student.    			      |" << endl;
	cout << "|  2. Edit information of a student. (change by ID)	      |" << endl;
	cout << "|  3. Eliminate a student.	(remove by ID)		      |" << endl;
	cout << "|  4. Find information of a student. (find by ID)	      |" << endl;
	cout << "|  5. List of student has GPA over 5.			      |" << endl;
	cout << "|  6. Print list of student.				      |" << endl;
	cout << "| ----------------------------------------------	      |" << endl;
	cout << "|							      |" << endl;
	cout << "|  0. Cancle! 						      |" << endl;
	cout << "|_____________________________________________________________|" << endl;
	cout << "Your choice: ";
	do
	{
		cin >> choice;
		if (choice < 0 || choice > 6)
			cout << "Wrong chosen! Choose again!" << endl;
	} while (choice < 0 || choice>6);
	return choice;
}

void EditMark(List &L, int ID)
{

	Node *p = Search(L, ID);
	cout << "Input new mark of this student: " << endl;
	cout << "Input mark of Math: ";
	do
	{
		cin >> p->MathMark;
		if (p->MathMark < 0 || p->MathMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->MathMark < 0 || p->MathMark > 10);

	cout << "Input mark of Physics: ";
	do
	{
		cin >> p->PhysicsMark;
		if (p->PhysicsMark < 0 || p->PhysicsMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->PhysicsMark < 0 || p->PhysicsMark > 10);

	cout << "Input mark of Chemistry: ";
	do
	{
		cin >> p->ChemistryMark;
		if (p->ChemistryMark < 0 || p->ChemistryMark > 10)
			cout << "Wrong type of mark, please try again! ";
	} while (p->ChemistryMark < 0 || p->ChemistryMark > 10);
}

void PrintNode(Node P)
{
	cout << "\nInformation of student: " << endl;
	cout << P.ID << " - " << P.Name << endl;
	cout << "Mark of 3 subject <Math,Physics,Chemistry>: " << P.MathMark << ", " << P.PhysicsMark << " ," << P.ChemistryMark << endl;
}

void PrintList(List &L)
{
	Node *node;
	node = L.pHead;
	while (node != NULL) {
		PrintNode(*node);
		node = node->pNext;
	}
}

void CheckGPA(List &L)
{
	Node *P;
	P = L.pHead;
	while (P != NULL)
	{
		if ((P->MathMark + P->ChemistryMark + P->PhysicsMark) / 3 > 5)
			PrintNode(*P);
		P = P->pNext;
	}
}

int main()
{
	int choice, X, ID;
	List *studentList = new List;
	CreateList(*studentList);
	do
	{
		choice = TABLElist();
		switch (choice)
		{
		case 1:
			AddFirst(*studentList, CreateNode());
			break;
		case 2:
			cout << "Input ID of student that you want to change: ";
			cin >> ID;
			EditMark(*studentList, ID);
			break;
		case 3:
			cout << "Input ID of student that you want to eliminate: ";
			cin >> X;
			DeleteX(*studentList,X);
			break;
		case 4:
			cout << "Input ID of student that you want to show informations: ";
			cin >> X;
			FindInfor(*studentList, X);
			break;
		case 5:
			CheckGPA(*studentList);
			break;
		case 6:
			PrintList(*studentList);
			break;
		default:
			break;
		}

	} while (choice!=0);
}