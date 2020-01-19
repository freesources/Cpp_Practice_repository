/* 
* Bài 1:
Một nông trại nuôi có 3 loại gia súc: Bò, cừu, dê. Mỗi loại gia súc đều có thể sinh con, cho sữa và phát
ra tiếng kêu riêng của chúng. Khi đói, các gia súc sẽ phát ra tiếng kêu để đòi ăn. Sau một thời gian chăn nuôi,
người chủ nông trại muốn thống kê xem trong nông trại có bao nhiêu gia súc ở mỗi loại, tổng số sữa mà tất cả
các gia súc của ông đã cho.

Áp dụng kế thừa, xây dựng chương trình cho phép người chủ nông trại nhập vào số lượng gia súc ban đầu ở mỗi loại:

a) Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều đói. Hãy cho biết những tiếng kêu
nghe được trong nông trại.
b) Chương trình sẽ đưa ra thống kê các thông tin người chủ mong muốn (nêu trên) sau một lứa sinh và một lượt cho
sữa của tất cả gia súc. Biết rằng:
-	Tất cả gia súc ở mỗi loại đều sinh con.
-	Số lượng sinh của mỗi gia súc là ngẫu nhiên.
-	Tất cả gia súc ở mỗi loại đều cho sữa.
-	Số sữa mỗi gia súc cho là ngẫu nhiên nhưng trong giới hạn sau:
		+	Bò: 0 - 20 lít.
		+	Cừu: 0 - 5 lít.
		+	Dê: 0 - 15 lít.																							
*/

#include <iostream>
#include <string>
#include "Cow.h"
#include "Goat.h"
#include "Lamb.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << "_____________ WELCOME TO YOUR HAPPY FARM _____________" << endl;
	cout << "1. Show number of BABY-COWs. " << endl;
	cout << "2. Show number of BABY-GOATs. " << endl;
	cout << "3. Show number of BABY-LAMBs. " << endl;
	cout << "4. Volume of COW's milk in this harvest. " << endl;
	cout << "5. Volume of GOAT's milk in this harvest. " << endl;
	cout << "6. Volume of LAMB's milk in this harvest. " << endl;
	cout << "7. Hmm... Do you know what does the COW say when they hungry? :/ " << endl;
	cout << "8. Hmm... Do you know what does the GOAT say when they hungry? :/ " << endl;
	cout << "9. Hmm... Do you know what does the LAMB say when they hungry? :/ " << endl;
	cout << "_________________________________________________" << endl;
	cout << "0. Leave the farm." << endl;
	cout << "\nYour choice: ";
		do
		{
			cin >> choice;
			if (choice > 9 || choice < 0)
			cout << "Our farm do not have this function yet! Please choose again: ";
		} while (choice > 9 || choice < 0);
		cin.ignore();
		return choice;
}

int main()
{
	int choice;
	Cow Cow;
	Goat Goat;
	Lamb Lamb;
	cout << "- Input number of COWs that you want to put into your farm: ";
	cin >> Cow.iCow;
	cout << "\n- Input number of GOATs that you want to put into your farm: ";
	cin >> Goat.iGoat;
	cout << "\n- Input number of LAMBs that you want to put into your farm: ";
	cin >> Lamb.iLamb;
	cout << "\n -------> AFTER ONE HARVEST <------- " << endl;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			cout << "\nNumber of BABY-COWs: " << Cow.getBaby(Cow.iCow) << endl;
			break;
		}
		case 2:
		{
			cout << "\nNumber of BABY-GOATs: " << Goat.getBaby(Goat.iGoat) << endl;
			break;
		}
		case 3:
		{
			cout << "\nNumber of BABY-LAMBs: " << Lamb.getBaby(Lamb.iLamb) << endl;
			break;
		}
		case 4:
		{
			cout << "\nVolume of COW's milk in this harvest: " << Cow.getVmilk(Cow.iCow) << " lit" << endl;
			break;
		}
		case 5:
		{
			cout << "\nVolume of GOAT's milk in this harvest: " << Goat.getVmilk(Goat.iGoat) << " lit" << endl;
			break;
		}
		case 6:
		{
			cout << "\nVolume of LAMB's milk in this harvest: " << Lamb.getVmilk(Lamb.iLamb) << " lit" << endl;
			break;
		}
		case 7:
		{
			cout << "\nThe COWs say: " << Cow.getBawl() << endl;
			break;
		}
		case 8:
		{
			cout << "\nThe GOATs say: " << Goat.getBawl() << endl;
			break;
		}
		case 9:
		{
			cout << "\nThe LAMBs say: " << Lamb.getBawl() << endl;
			break;
		}
		case 0:
		{
			exit(0);
		}
		}
	} while (choice != 0);
}