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
	 	int i, num;
	cout << "�п�J���u���H�ơG";
	cin >> num;
	Employee *ptr;				//�ŧiEmployee���O������
	//�ʺA�t�m�}�C�Aptr���V����}�C���Ĥ@�Ӥ�������}
	ptr=new Employee[num];		//����num�Ӱ}�C����
	cout << "�п�J " << num << " ����u���m�W�P�~��\n";
	for (i=0; i<num; i++)
	{
		cout << "�� " << (i+1) << " ����u�m�W�G" ;
		cin >> ptr->Name  ;
		cout << "�� "  << (i+1) << " ����u�~��G";
		cin >> ptr->Salary  ;
		ptr++;
	}
	cout << "\n�L�X�Ҧ����u���m�W�P�~��\n";
	cout << "�s��\t�m�W\t�~��\n";
	cout << "======================\n";
	ptr-=num;		//ptr���V����}�C���Ĥ@�Ӥ�������}
	for (i=0; i<num; i++)
	{
		cout <<" " << (i+1) << "\t" << ptr->Name << "\t" 
			<< ptr->Salary  << endl;
		ptr++;
	}

 	system("PAUSE");

	return 0;
}
