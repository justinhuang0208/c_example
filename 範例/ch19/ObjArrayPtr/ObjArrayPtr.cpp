#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Employee
{
public :
	string Name;
	int Salary;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	Employee aryEmployee[5];	//�ŧiaryEmployee[0]~aryEmployee[4]
	Employee *ptr;				//�ŧiEmployee���O��ptr����
	ptr = aryEmployee;			//ptr����}�C����aryEmployee[0]����}
	cout << "�п�J 5 ����u���m�W�P�~��\n";
	for (i=0; i<5; i++)
	{
		cout << "�� " << (i+1) << " ����u�m�W�G" ;
		cin >> ptr->Name  ;		//�ϥΫ��Цs��Name�ݩ�
		cout << "�� "  << (i+1) << " ����u�~��G";
		cin >> ptr->Salary  ;	//�ϥΫ��Цs��Salary�~��
		ptr++;					//���Щ��U���A�۷��}�C�������U�@�ӵ���
	}
	cout << "\n�L�X�Ҧ����u���m�W�P�~��\n";
	cout << "�s��\t�m�W\t�~��\n";
	cout << "======================\n";
	ptr = aryEmployee;		//ptr����}�C����aryEmployee[0]
	for (i=0; i<5; i++)
	{
		cout <<" " << (i+1) << "\t" << ptr->Name << "\t" 
		 << ptr->Salary  << endl;
	    ptr++;
    }
    system("PAUSE");

	return 0;
}
