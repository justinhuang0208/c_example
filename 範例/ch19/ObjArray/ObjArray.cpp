#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Employee				//�w�qEmployee���u���O��Name�m�W��Salary�~���ݩ�
{
public :
	string Name;
	int Salary;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	Employee aryEmployee[5];	//�ŧiaryEmployee[0]~aryEmployee[4]
	cout << "�п�J 5 ����u���m�W�P�~��\n";
	for (i=0; i<5; i++)
	{
		cout << "�� " << (i+1) << " ����u�m�W�G" ;
		cin >> aryEmployee[i].Name  ;		//��J��i����u���m�W
		cout << "�� "  << (i+1) << " ����u�~��G";
		cin >> aryEmployee[i].Salary  ; 		//��J��i����u���~��
	}
	cout << "\n�L�X�Ҧ����u���m�W�P�~��\n";
	cout << "�s��\t�m�W\t�~��\n";
	cout << "==================\n";
	for (i=0; i<5; i++)
	{    //�L�X��i����u���m�W�P�~��
		cout <<" " << (i+1) << "\t" << aryEmployee[i].Name << "\t" 
			<< aryEmployee[i].Salary  << endl;
	}

   system("PAUSE");

	return 0;
}
