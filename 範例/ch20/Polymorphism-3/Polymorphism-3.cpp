#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Traffic
{        
protected:
	static int _miles; 			//_miles�ΨӰO���e�i��������
public:	 
	virtual void SpeedUp()=0;	//SpeedUp���µ����禡�A���Traffic����H���O
};
int Traffic::_miles = 0;		//_miles�R�A������l�Ƭ�0

class Car : public Traffic
{
public:
	void SpeedUp()  				//Car�l���O�����мgSpeedUp()��k
	{
		_miles += 2;
		cout << "�r�p���l, �[�t��, �e�i" << _miles <<"����" << endl;
	}
};

class Airplane : public Traffic
{
public:
	void SpeedUp()				//Airplane�l���O�����мgSpeedUp()��k
	{
		_miles += 15;
		cout << "�r�p����, �[�t��, �e�i" << _miles << "����" << endl;
	}
};

int main(int argc, char** argv)
{
   Traffic *r;					//r�OTaffic���O���������
	Car myCar ;					//myCar�OCar���������, �P���~��Taffic
	Airplane myAirplane ;		//myAirplane�OAirplane���������
                               	//�P���~��Taffic
	int input;
	while (true)
	{
		cout <<"�аݭn�r�p->1.���l  2.����  ��L.���}�G";
		cin >> input ;
		if (input == 1)
		{
			r = &myCar;       	//�}���l, r���Ы��VmyCar������骺��}
		}
		else if (input == 2)
		{
			r = &myAirplane;  	//�}����, r���Ы��VmyAirplane������骺��}
		}
		else
		{
			break;
		}
		r->SpeedUp();			//�I�sr���Ы��V������骺SpeedUp()��k
		cout << endl;
	}

   system("PAUSE");
   return 0;
}

