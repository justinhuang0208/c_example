#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;
template<class T>
class student
{
private:
	string name;
	T height, weight;
public:
	student(string n, T h, T w)
	{
		name=n;
		height=h;
		weight=w;
	}
	void show()
	{
		cout << name << "�������O"
    		 << height << ", �魫�O" << weight << endl;
	}
	void getmax(T a, T b)
	{
		T max;
		if(a>b)
		{
			max=a;
		}
		else
		{
			max=b;
		}
		cout << name << "��X" << a << ", " 
			 << b << "�������̤j�Ƭ�" << max << "\n\n";  
	}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	student<int> peter("���o", 164, 50);
	peter.show ();
	peter.getmax(5, 2);
	student<double> david("�j��", 170.5, 65.33);
	david.show();
	david.getmax(5.3, 9.8);
  	system("PAUSE");
	return 0;
}
