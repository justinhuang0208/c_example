#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string id, pwd;
	cout << "�п�J�b���G";
	cin >> id;
	cout << "�п�J�K�X�G";
	cin >> pwd;
	cout << endl;
	if(id=="gotop" && pwd=="168")
	{
		cout << "�b���G" + id + ", �K�X�G" + pwd + " ���T, �w����{" ;
	}
	else
	{
		cout << "�b���G" + id + ", �K�X�G" + pwd + " ���~, �����}�t��" ;
	}
	cout << endl;
    system("PAUSE");

	return 0;
}
