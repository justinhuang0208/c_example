#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int No;						// �ΨӰO���O�ĴX����
	static int Total ;			// �R�A��Ʀ���(�R�A�ܼ�)�A�O�����l�`��
	static void ShowTotalCars()	// �R�A�����禡(�R�A��k)
	{
		cout << "�{�b�@�� " << Total << " �����l" << endl ;
	}
	void ShowMe(string vCarName)
	{
		cout << vCarName << " �O�� " << No << " �����C" << endl;
	}
	Car()
	{
		Total += 1;
		No = Total;               //�O������
	}
	~Car()						//�Ѻc��
	{
		Total -= 1;
	}
 };
 int::Car::Total = 0;	//Car���O���R�A��Ʀ�����l�Ȭ�0
int main(int argc, char** argv)
{
   	Car::ShowTotalCars();	// �I�s�R�A�����禡
		Car Benz ;//�ŧi�Ĥ@���s��
		cout << "Benz �O�� " << Benz.No << " ����" << endl;
		Car::ShowTotalCars();	// �I�s�R�A�����禡
		Car BMW ;   //�ŧi�ĤG���s��
		Car Ford ;// �ŧi�ĤT���s��
		BMW.ShowMe("BMW");
		Ford.ShowMe("Ford");
		Car::ShowTotalCars();
		Car *MyCar;      				// �ŧi�@�� Car ���Ѧ� 
		Car::ShowTotalCars();		// �I�s�R�A����
		MyCar = &BMW;    				// �N MyCar ���V BMW
		MyCar->ShowMe("MyCar");

    	system("PAUSE");
    	return 0;
 }

