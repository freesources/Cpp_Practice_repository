#include <iostream>
#include <conio.h>
using namespace std;

/*_____- Set up STACK and QUEUE with LINK LIST -_____*/
#pragma region Queue
typedef struct tagNode
{
	int number;
	tagNode *pNext;
} NODE;
typedef struct tagList
{
	NODE *pHead;	//address of first node
	NODE *pTail;	//address of last node
} LIST;
void CreateQueue(LIST &Q)
{
	Q.pHead = NULL;
	Q.pTail = NULL;
}
NODE *CreateQueue(int x)		//create new element (1)
{
	NODE *p;
	p = new NODE;
	if (p == NULL)
		exit(1);
	p->number = x;
	p->pNext = NULL;
	return p;
}
int IsEmptyQ(LIST &Q)
{
	if (Q.pHead == NULL)		//Queue is Empty
		return 1;
	else
		return 0;
}
void EnQueue(LIST &Q, NODE *Temp)
{
	if (Q.pHead == NULL)
	{
		Q.pHead = Temp;
		Q.pTail = Temp;
	}
	else
	{
		Q.pTail->pNext = Temp;
		Q.pTail = Temp;
	}
}
int DeQueue(LIST &Q, int &X)
{
	NODE *p;
	if (IsEmptyQ(Q) != 1)
	{
		p = Q.pHead;
		X = p->number;
		Q.pHead = Q.pHead->pNext;
		if (Q.pHead == NULL)
			Q.pTail = NULL;
		delete p;
		return 1;
	}
	return 0;
}
#pragma endregion
#pragma region Stack
void CreateStack(LIST &S)
{
	S.pHead = NULL;
	S.pTail = NULL;
}
NODE *CreateNode(int x)		//create new element (1)
{
	NODE *p;
	p = new NODE;
	if (p == NULL)
		exit(1);
	p->number = x;
	p->pNext = NULL;
	return p;
}
int IsEmptyS(LIST &S)
{
	if (S.pHead == NULL)		//Empty Stack
		return 1;
	else
		return 0;
}
void Push(LIST &S, NODE *Temp)
{
	if (S.pHead == NULL)
	{
		S.pHead = Temp;
		S.pTail = Temp;
	}
	else
	{
		Temp->pNext = S.pHead;
		S.pHead = Temp;
	}
}
int Pop(LIST &S, int &Srave)
{
	NODE *p;
	if (IsEmptyS(S) != 1)
	{
		p = S.pHead;
		Srave = p->number;
		S.pHead = S.pHead->pNext;
		if (S.pHead == NULL)
			S.pTail = NULL;
		delete p;
		return 1;
	}
	return 0;
}
#pragma endregion

int main()
{
	LIST S, Q;
	int X, tv, i, choice;
	NODE *p;
	CreateQueue(Q);
	CreateStack(S);
	cout << "____________ Stack or Queue ? ____________" << endl;
	cout << "1. STACK." << endl;
	cout << "2. QUEUE." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		for (i = 2; i <= 8; i++)
		{
			p = CreateNode(i);
			Push(S, p);
			cout << i << " ";
		}
		tv = Pop(S, X);
		if (tv == 1)
			cout << "\nThe value's taken from STACK : " << X << endl;
		break;
	}
	case 2:
	{
		for (i = 2; i <= 8; i++)
		{
			p = CreateQueue(i);
			EnQueue(Q, p);
			cout << i << " ";
		}
		tv = DeQueue(Q, X);
		if (tv == 1)
			cout << "\nThe value is taken from QUEUE: " << X << endl;
		break;
	}
	}
	system("pause");
	return 0;
}