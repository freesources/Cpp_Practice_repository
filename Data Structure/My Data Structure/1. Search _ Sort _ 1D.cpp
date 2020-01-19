#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define SWAP(type,a,b) {type temp = a; a = b; b = temp;}
using namespace std;
#pragma region Input and Output
void Input(int arrArrayA[], int &iNumberOfElement)
{
	for (int i = 0; i < iNumberOfElement; i++)
	{
		cout << "\n\ta[" << i << "]=  ";
		cin >> arrArrayA[i];
	}
}
void Output(int arrArrayA[], int iNumberOfElement)
{
	cout << "\nSorting...  \n";
	for (int i = 0; i < iNumberOfElement; i++)
	{
		cout << "\t";
		cout << arrArrayA[i];
	}
}
#pragma endregion

#pragma region Function_Sort
void InterchangeSort(int arrArrayA[], int iNumberOfElement)
{
	int i, j;
	for (i = 0; i < iNumberOfElement - 1; i++)
		for (j = i + 1; j < iNumberOfElement; j++)
			if (arrArrayA[j] < arrArrayA[i])
			{
				SWAP(int, arrArrayA[i], arrArrayA[j]);
				Output(arrArrayA, iNumberOfElement);
			}
}
void SelectionSort(int arrA[], int iN)
{
	int min, i, j;
	for (i = 0; i < iN - 1; i++)
	{
		min = i;
		for (j = i + 1; j < iN; j++)
			if (arrA[j] < arrA[min])
				min = j;
		SWAP(int, arrA[min], arrA[i]);
		Output(arrA, iN);
	}
}
void BubbleSort(int arrA[], int iN)
{
	int i, j;
	for (i = 0; i < iN - 1; i++)
		for (j = iN - 1; j > i; j--)
			if (arrA[j] < arrA[j - 1])
			{
				SWAP(int, arrA[j], arrA[j - 1]);
				Output(arrA, iN);
			}
}
void MergeSort(int arr[], int left, int right, int iN)
{
	int mid, N=iN;
	int l1, l2, i;
	int arr2[100];
	if (left < right) {
		mid = (left + right) / 2;
		MergeSort(arr, left, mid, N);
		MergeSort(arr, mid + 1, right, N);
		for (l1 = left, l2 = mid + 1, i = left; l1 <= mid && l2 <= right; i++)
		{
			if (arr[l1] <= arr[l2])
				arr2[i] = arr[l1++];
			else
				arr2[i] = arr[l2++];
		}
		while (l1 <= mid)
			arr2[i++] = arr[l1++];
		while (l2 <= right)
			arr2[i++] = arr[l2++];
		for (i = left; i <= right; i++)
			arr[i] = arr2[i];
		Output(arr, N);
	}
}
void InsertionSort(int a[], int n)
{
	int i, pos;
	int x;		//lưu giá trị a[i] tránh bị ghi đè khi dời chỗ các phần tử.
	for (i = 1; i < n; i++)		//đoạn a[0] đã sắp xếp.
	{
		x = a[i];
		pos = i - 1;		//tìm vị trí chèn x.
		while ((pos >= 0) && (a[pos] > x))
		{		//kết hợp dời chỗ các phần tử sẽ đứng sau x trong dãy mới.
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		Output(a, n);
	}
}
void ShellSort(int a[], int n, int h[], int k)
{
	int step, i, j, x, len;
	for (step = 0; step < k; step++)
	{
		len = h[step];
		for (i = len; i < n; i++)				// 
		{										//
			x = a[i];							//
			j = i - len;						//
			while ((x < a[j]) && (j >= 0))		// --> Insertion Sort.
			{									//
				a[j + len] = a[j];				//
				j = j - len;					//
			}									//
			a[j + len] = x;						//
		}
		Output(a, n);
	}
}
#pragma region Heap Sort
//7. Heap Sort:
void shift(int a[], int l, int r)		//hiệu chỉnh các giá trị thành Heap.
{
	int x, i, j;
	i = l;
	j = 2 * i + 1;
	x = a[i];
	while (j <= r)
	{
		if (j < r)		//nếu có đủ 2 phần tử liên đới.
			if (a[j] < a[j + 1])
				j++;		//tìm phần tử lớn nhất a[j] và a[j+1].
		if (a[j] <= x)
			return;			//thỏa mãn liên đới thì dừng.
		else
		{
			a[i] = a[j];	//hoán vị 3 phép gán, x=a[i] đã có ở trên.
			a[j] = x;
			i = j;			//xét tiếp khả năng hiệu chỉnh lan truyền.
			j = 2 * i + 1;
			x = a[i];
		}
	}
}
void CreateHeap(int a[], int n)
{
	int l;
	l = n / 2 - 1;
	while (l >= 0)
	{
		shift(a, l, n - 1);
		l = l - 1;
	}
}
void HeapSort(int a[], int n)
{
	int r;
	CreateHeap(a, n);
	r = n - 1;
	while (r > 0)
	{
		SWAP(int, a[0], a[r]);
		r--;
		if (r > 0)
			shift(a, 0, r);
		Output(a, n);
	}
}
#pragma endregion
void QuickSort(int a[], int left, int right, int N)
{
	int i, j, x, K=N;
	x = a[(left + right) / 2];
	i = left; j = right;
	do
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j)
		{
			SWAP(int, a[i], a[j]);
			i++;
			j--;
		}
	} while (i <= j);
	Output(a, N);
	if (left < j)
		QuickSort(a, left, j, K);
	if (i < right)
		QuickSort(a, i, right, K);
}
#pragma endregion

#pragma region Function_Search
int LinearSearch(int arrArrayA[], int iNumberOfElement, int iFind)
{
	int i = 0;
	while ((i < iNumberOfElement) && (arrArrayA[i] != iFind))
		i++;
	if (i == iNumberOfElement)
		return -1;
	else
		return i;
}
int LinearSearch2(int arrArrayA[], int iNumberOfElement, int iFind)
{
	int i = 0;
	arrArrayA[iNumberOfElement] = iFind;
	while (arrArrayA[i] != iFind)
		i++;
	if (i == iNumberOfElement)
		return -1;
	else
		return i;
}
int BinarySearch(int arrArrayA[], int iNumberOfElement, int iFind)
{
	int left = 0, right = iNumberOfElement - 1;
	int mid;

	do {
		mid = (left + right) / 2;
		if (iFind == arrArrayA[mid])
			return mid;
		else if (iFind < arrArrayA[mid])
			right = mid - 1;
		else
			left = mid + 1;
	} while (left <= right);
	return -1;
}
#pragma endregion

/*______________________MAIN________________________*/
int main()
{
	int arrArrayA[100], 
		iNumberOfElement, 
		iFind;
	int arrArrayB[] = { 5,3,1 };
	int iNumberOfElementB = 3;
	int choice, 
		choice2, 
		result;
	cout << "\nHow many elements? ";
	cin >> iNumberOfElement;
	Input(arrArrayA, iNumberOfElement);
	int left = 0, 
		right = iNumberOfElement - 1;
	cout << "\nWhich way that you want to use for sorting this array: " << endl;
	cout << "1. Interchange Sort. " << endl;
	cout << "2. Selection Sort. " << endl;
	cout << "3. Bubble Sort" << endl;
	cout << "4. Merge Sort" << endl;
	cout << "5. Insertion Sort" << endl;
	cout << "6. Shell Sort" << endl;
	cout << "7. Heap Sort" << endl;
	cout << "8. Quick Sort" << endl;
	cin >> choice;
	switch(choice)
	{
		case 1:
		{
			InterchangeSort(arrArrayA, iNumberOfElement);
			break;
		}
		case 2:
		{
			SelectionSort(arrArrayA, iNumberOfElement);
			break;
		}
		case 3:
		{
			BubbleSort(arrArrayA, iNumberOfElement);
			break;
		}
		case 4:
		{
			MergeSort(arrArrayA, left, right, iNumberOfElement);
			break;
		}
		case 5:
		{
			InsertionSort(arrArrayA, iNumberOfElement);
			break;
		}
		case 6:
		{
			ShellSort(arrArrayA, iNumberOfElement, arrArrayB, iNumberOfElementB);
			break;
		}
		case 7:
		{
			HeapSort(arrArrayA, iNumberOfElement);
			break;
		}
		case 8:
		{
			QuickSort(arrArrayA, left, right, iNumberOfElement);
		}
	}
	cout << "\n\nWhat element do you want to find? ";
	cin >> iFind;
	cout << "\nWhat kind of way do you want to use?" << endl;
	cout << "1. Linear Search." << endl;
	cout << "2. Linear Search 2." << endl;
	cout << "3. Binary Search." << endl;
	cin >> choice2;
	switch (choice2)
	{
	case 1:
	{
		result = LinearSearch(arrArrayA, iNumberOfElement, iFind);
		if (result == -1)
			cout << "\nNot found!";
		else
			cout << "\nIts location is: " << result << endl;
	}
	break;
	case 2:
	{
		result = LinearSearch2(arrArrayA, iNumberOfElement, iFind);
		if (result == -1)
			cout << "\nNot found!";
		else
			cout << "\nIts location is: " << result << endl;
	}
	break;
	case 3:
	{
		result = BinarySearch(arrArrayA, iNumberOfElement, iFind);
		if (result == -1)
			cout << "\nNot found!";
		else
			cout << "\nIts location is: " << result << endl;
	}
	}
	system("pause");
}