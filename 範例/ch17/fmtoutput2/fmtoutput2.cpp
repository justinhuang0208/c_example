#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  cout.width(35);								//�]�w�n��X25�Ӧr��
	cout << "C&C++ �{���]�p�g��";	
	cout << "\n\n";

	cout.width(35);								//�]�w�n��X25�Ӧr��
	cout.fill('*');								//�]�w�񺡦r���� '*'
	cout << "Viusal C# 2013 �{���]�p�g��";
	cout << "\n\n";

	cout.width(35);								//�]�w�n��X25�Ӧr��
	cout.setf(ios::left, ios::adjustfield);	//�a�����
	cout << "Viusal Basic 2013 �{���]�p�g��";
	cout << "\n\n";
	cout.unsetf(ios::adjustfield);			//�����a�����

	cout.precision(5);							//�]�w���Ħ��5��
	cout << 98.7654321 << "\n\n";			//�L�X 98.765

	cout.setf(ios::fixed, ios::floatfield);	//�]�w�B�I�ƪ���X�榡
	cout << 98.7654321 << "\n\n";			//�L�X98.76543
	cout.unsetf(ios::floatfield);			//�����B�I�ƪ���X�榡
    cout << "\n";
    system("PAUSE");

	return 0;
}
