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
		cout << name << "的身高是"
    		 << height << ", 體重是" << weight << endl;
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
		cout << name << "找出" << a << ", " 
			 << b << "之中的最大數為" << max << "\n\n";  
	}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 	student<int> peter("彼得", 164, 50);
	peter.show ();
	peter.getmax(5, 2);
	student<double> david("大衛", 170.5, 65.33);
	david.show();
	david.getmax(5.3, 9.8);
  	system("PAUSE");
	return 0;
}
