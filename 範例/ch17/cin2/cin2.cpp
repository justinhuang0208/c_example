#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   	char bkname[50];
	int price;
	double discount;
	cout << "�п�J�ѦW�G";
	gets(bkname);
	cout << "�п�J����G";
	cin >> price;
	cout << "�п�J�馩�G";
	cin >> discount;
	cout << "\n===�L�X��Ʀp�U===\n";
	cout << bkname	<< "�O�@���n��~\n";
	cout << " ����G"<< price	<< "\n";
	cout << " �馩�G"<< discount << "\n";
	cout << " �`���G"<< price * discount << "\n";
   	system("PAUSE");
	return 0;
}
