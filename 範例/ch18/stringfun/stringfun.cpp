#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str("C&C++�{���]�p�g��");
	int s, e;
	cout << "�r���X�G" << str << endl;
	cout << "�r����סG" << str.length() << endl;
	cout << "�п�J�n�q�ĴX�Ӧr�}�l�R���G";
	cin >> s;
	cout << "�аݭn�R���X�Ӧr�G";
	cin >> e;
	str.erase(s, e);					//�Nstr�r�ꤤ��s�Ӧr�}�l�R��e�Ӧr
	cout << "�r��R����G" << str << endl;
	string input;
	cout << "�п�J�n���J���r��G" ;
	cin >> input;
	str.insert(0, input, 0, input.length()); //�bstr�r�ꤤ���w����m���J�l�r��
	cout << "�r���s�G" << str << endl;
    system("PAUSE");

	return 0;
}
