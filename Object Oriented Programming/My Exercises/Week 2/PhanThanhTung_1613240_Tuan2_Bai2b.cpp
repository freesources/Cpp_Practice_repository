/*Bài 2b: Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh.
Tính điểm trung bình và xuất kết quả.
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct 
{
	char LastandMiddleName[20], 
		 FirstName[10];
	float MarkofMath;
	float MarkofLiterature;
} Student;
void InputInformation(Student *S)
{
	cout << "Type last and middle name: ";
	fgets(S->LastandMiddleName, 20, stdin);
	cout << "First name: ";
	fgets(S->FirstName, 10, stdin);
	cout << "Input Math's mark: ";
	cin >> S->MarkofMath;
	cout << "Input Literature's mark: ";
	cin >> S->MarkofLiterature;
}
void main()
{
	Student S;
	float GPA;
	InputInformation(&S);
	GPA = (S.MarkofLiterature + S.MarkofMath) / 2;
	cout << "\nGPA of "<<S.FirstName<<"is: " << GPA << endl;
	system("pause");
}