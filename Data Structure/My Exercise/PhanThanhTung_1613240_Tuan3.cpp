#include <iostream>
#include <conio.h>
using namespace std;

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
void CreateList(LIST &l)
{
	l.pHead = NULL;
	l.pTail = NULL;
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
NODE *Search(LIST l, int x)
{
	NODE *p;
	p = l.pHead;
	while ((p != NULL) && (p->number != x))
		p = p->pNext;
	return p;
}
void AddHead(LIST &l, NODE *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		l.pTail = l.pHead;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void AddTail(LIST &l, NODE *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		l.pTail = l.pHead;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
void InsertAfterQ(LIST &l, NODE *p, NODE *q)
{
	if (q != NULL)
	{
		p->pNext = q->pNext;
		q->pNext = p;
		if (l.pTail == q)
			l.pTail = p;
	}
	else
		AddHead(l, p);	//add p into head list
}
void PrintList(LIST l)
{
	NODE *p;
	p = l.pHead;
	cout << "LIST: ";
	while (p != NULL)
	{
		cout << p->number << " ";
		p = p->pNext;
	}
}
void RemoveList(LIST l)
{
	NODE *p;
	while (l.pHead != NULL)
	{
		p = l.pHead;
		l.pHead = p->pNext;
		delete p;
	}
}
int RemoveHead(LIST &l, int x)
{
	NODE *p;
	if (l.pHead != NULL)
	{
		p = l.pHead;
		x = p->number;	//saving data if necessary
		l.pHead = l.pHead->pNext;
		delete p;
		if (l.pHead == NULL)
			l.pTail = NULL;
		return 1;
	}
	return 0;
}
int RemoveAfterQ(LIST &l, NODE *q, int &x)
{
	NODE *p;
	if (q != NULL)
	{
		p = q->pNext;	//p is node need to delete
		if (p != NULL)	//q is not last node
		{
			if (p == l.pTail)	//node need to delete is the last node
				l.pTail = q;	//update pTail
			q->pNext = p->pNext;
			x = p->number;
			delete p;
		}
		return 1;
	}
	else
		return 0;
}
int RemoveX(LIST &l, int x)
{
	NODE *p, *q = NULL;
	p = l.pHead;
	while ((p != NULL) && (p->number != x))	//find x and find q (x after q)
	{
		q = p;
		p = p->pNext;
	}
	if (p == NULL)		//can't find x
		return 0;
	if (q != NULL)		//found x!
		RemoveAfterQ(l, q, x);
	else	//element need to delete locate at head of list
		RemoveHead(l, x);
}
void Menu()
{
	cout << endl;
	cout << "__________________-* FUNCTION TABLE *-__________________" << endl;
	cout << "	1. Print List." << endl;
	cout << "	2. Add Head." << endl;
	cout << "	3. Add Tail." << endl;
	cout << "	4. Add after element Q." << endl;
	cout << "	5. Remove Head." << endl;
	cout << "	6. Remove element has X valuable." << endl;
	cout << "	7. Remove element after Q." << endl;
	cout << "	8. Sort list." << endl;
	cout << "	9. Delete link list." << endl;
	cout << endl;
	cout << "	0. Exit!" << endl;
	cout << "_________________________________________________________" << endl;
}
void SWAPE(int &A, int &B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
}
void SelectionSort(LIST &l)
{
	NODE *p, *q, *min;
	p = l.pHead;
	while (p != l.pTail)
	{
		min = p;
		q = p->pNext;
		while (q != NULL)
		{
			if (q->number < min->number)
				min = q;
			q = q->pNext;
		}
		SWAPE(min->number, p->number);
		p = p->pNext;
	}
}
void QuickSort(LIST &l)
{
	NODE *p, *X;
	LIST l1, l2;
	if (l.pHead == l.pTail)
	{
		CreateList(l1);
		CreateList(l2);
		X = l.pHead;
		l.pHead = X->pNext;
		while (l.pHead != NULL)
		{
			p = l.pHead;
			l.pHead = p->pNext;
			p->pNext = NULL;
			if (p->number <= X->number)
				AddHead(l1, p);
			else
				AddHead(l2, p);
			QuickSort(l1);
			QuickSort(l2);
			if (l1.pHead != NULL)
			{
				l.pHead = l1.pHead;
				l1.pTail->pNext = X;
			}
			else
				l.pHead = X;
			X->pNext = l2.pHead;
			if (l2.pHead != NULL)
				l.pTail = l2.pTail;
			else
				l.pTail = X;
		}
	}
}
/*_____________________ MAIN _____________________*/
int main()
{
	LIST *LinkList = new LIST;
	NODE *t, *k;
	int X, Y;
	int choice, choice2;
	CreateList(*LinkList);
	do
	{
		Menu();
		cout << "Input your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			PrintList(*LinkList);
			break;
		}
		case 2:
		{
			cout << "Input element that you want to add to Head's list: ";
			cin >> X;
			t = CreateNode(X);
			AddHead(*LinkList, t);
			cout << "Add done!" << endl << endl;;
			PrintList(*LinkList);
			break;
		}
		case 3:
		{
			cout << "Input element that you want to add to Tail's list: ";
			cin >> X;
			t = CreateNode(X);
			AddTail(*LinkList, t);
			cout << "Add done!" << endl << endl;
			PrintList(*LinkList);
			break;
		}
		case 4:
		{
			cout << "Input element that you want to add: ";
			cin >> X;
			t = CreateNode(X);
			cout << "Input element Q: ";
			cin >> Y;
			k = Search(*LinkList, Y);
			InsertAfterQ(*LinkList, t, k);
			cout << "Insert done!" << endl << endl;
			PrintList(*LinkList);
			break;
		}
		case 5:
		{
			RemoveHead(*LinkList, X);
			cout << "Remove done!" << endl << endl;
			PrintList(*LinkList);
			break;
		}
		case 6:
		{
			cout << "Input element X that you want to remove: ";
			cin >> X;
			t = CreateNode(X);
			RemoveX(*LinkList,t->number);
			cout << "Remove done!" << endl << endl;
			PrintList(*LinkList);
			break;
		}
		case 7:
		{
			cout << "Input element Q that you want to remove after: ";
			cin >> X;
			t = Search(*LinkList, X);
			RemoveAfterQ(*LinkList, t, Y);
			cout << "Remove done!" << endl << endl;
			PrintList(*LinkList);
			break;
		}
		case 8:
		{
			cout << "Choose the way that you want to use: " << endl;
			cout << " 1. Selection Sort." << endl;
			cout << " 2. Quick Sort." << endl;
			cin >> choice2;
			switch (choice2)
			{
			case 1:
			{
				SelectionSort(*LinkList);
				cout << "Sort done!" << endl << endl;
				PrintList(*LinkList);
				break;
			}
			case 2:
			{
				QuickSort(*LinkList);
				cout << "Sort done!" << endl << endl;
				PrintList(*LinkList);
				break;
			}
			}
			break;
		}
		case 9:
		{
			RemoveList(*LinkList);
			cout << "Delete link list done!" << endl << endl;
			break;
		}
		case 0:
		{
			break;
		}
		default:
			cout << "Not setup yet!" << endl;
			break;
		}
	} while (choice != 0);
	system("pause");
}