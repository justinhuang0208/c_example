#include <cstdlib>
#include <iostream>
#include <string>

 using namespace std;
 class Employee
 {
 public :
	string Name;
	int Salary;
	//�w�]�غc���A�S���޼ƪ��غc��
	Employee()			
	{
	}		
	//���غc�������ǤJ�m�W�M�~��
	Employee(string Name, int Salary)
	{
		this->Name = Name;
		this->Salary = Salary;
	}
	//�Ѻc��, ����delete�ɷ|����Ѻc��
	~Employee()
	{
		cout << "���u->" << Name << "�Q�R���F" << endl;
	}
	void ShowEmployee()
	{
		cout << "���u�m�W�G" << Name << "   �~��G" << Salary << endl; 
	}
 };

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Employee *ptr1, *ptr2;	//�ŧi�ݩ�Employee���O��ptr1��ptr2����
	ptr1 = new Employee;	//�ϥ�new�ʺA�O�m����,���ɰ���w�]�غc��
	ptr1->Name = "�����";	//���w�m�W
	ptr1->Salary = 75000;	//���w�~��
	ptr1->ShowEmployee ();	//����Employee���O��ShowEmployee()��k
	//�ϥ�new�ʺA�t�m�O����A�öǤJ�m�W���~��
	ptr2 = new Employee("�p��l", 65000);
	ptr2->ShowEmployee ();	//����Employee���O��ShowEmployee()��k
	cout << "delete ptr1  " ;

	delete ptr1;				//�ϥ�delete�B��l����O����A�ð���Ѻc��
	cout << "delete ptr2  ";
	delete ptr2;				//�ϥ�delete�B��l����O����A�ð���Ѻc��

   	system("PAUSE");

	return 0;
}
