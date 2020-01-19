#include <iostream>
#define MAX 100
using namespace std;

/*_____- Set up STACK & QUEUE with [1D] Array -_____*/
#pragma region Stack
typedef struct tagStack
{
	int a[MAX];
	int t;
} Stack;
void CreateStack(Stack &S)
{
	S.t = -1;
}
int IsEmpty(Stack &S)
{
	if (S.t == -1)
		return 1;
	else
		return 0;
}
int IsFull(Stack &S)
{
	if (S.t >= MAX)
		return 1;
	else
		return 0;
}
int Push(Stack &S, int x)
{
	if (IsFull(S) == 0)
	{
		S.t++;
		S.a[S.t] = x;
		return 1;
	}
	else
		return 0;
}
int Pop(Stack &S, int &x)
{
	if (IsEmpty(S) == 0)
	{
		x = S.a[S.t];
		S.t--;
		return 1;
	}
	else
		return 0;
}
#pragma endregion
#pragma region Queue
typedef struct tagQueue
{
	int a[MAX];
	int Front;
	int Rear;
} Queue;
void CreateQueue(Queue &Q)
{
	Q.Front = -1;
	Q.Rear = -1;
}
int DeQueue(Queue &Q, int &x)
{
	if (Q.Front != -1)	 //Queue is not NULL
	{
		x = Q.a[Q.Front];
		Q.Front++;
		if (Q.Front > Q.Rear)	//In case have one element
		{
			Q.Front = -1;
			Q.Rear = -1;
		}
		return 1;
	}
	else	//Queue is NULL
	{
		cout << "Queue is NULL!" << endl;
		return 0;
	}
}
int EnQueue(Queue &Q, int x)
{
	int i;
	int f, r;
	if (Q.Rear - Q.Front + 1 == MAX)	//Queue is FULL
		return 0;
	else
	{
		if (Q.Front == -1)
		{
			Q.Front = 0;
			Q.Rear = -1;
		}
		if (Q.Rear == MAX - 1)		//Queue is FULL (img)
		{
			f = Q.Front;
			r = Q.Rear;
			for (i = f; i <= r; i++)
				Q.a[i - f] = Q.a[i];
			Q.Front = 0;
			Q.Rear = r - f;
		}
		Q.Rear++;
		Q.a[Q.Rear] = x;
		return 1;
	}
}
#pragma endregion
//=====================================================//
int main()
{
	Stack S;
	Queue Q;
	int x, tv, i, choice;
	CreateStack(S);
	CreateQueue(Q);
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
			cout << i << " ";
			Push(S, i);
		}
		tv = Pop(S, x);
		if (tv == 1)
			cout << "\nThe value is taken from STACK : " << x << endl;
		break;
	}
	case 2:
	{
		for (i = 2; i <= 8; i++)
		{
			cout << i << " ";
			EnQueue(Q, i);
		}
		tv = DeQueue(Q, x);
		if (tv == 1)
			cout << "\nThe value is taken from QUEUE : " << x << endl;
		break;
	}
	}
	system("pause");
}