#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getmin(double, double);
double getmin(double[], int);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a=21.3, b=14.8;
	cout << a << " �M " << b << " �̤p���ƭȬ� " << getmin(a, b) << "\n\n";
	double f[]={12.1, 54.33, 7.2, 40, 65.1};
	cout << "�}�C���� [12.1, 54.33, 7.2, 40, 65.1] ���̤p���ƭȬ� " 
	 	<< getmin(f, 5) << "\n\n";
   	system("PAUSE");

	return 0;
}

double getmin(double x, double y)
{
		if (x < y)
		{
			return x;
		}
		else
		{
			return y;
		}
}

double getmin(double varray[], int n)
{
		double min=varray[0];
		for(int i=1; i<n-1; i++)
		{
			if(varray[i]<min)
			{
				min=varray[i];
			}
		}
		return min;
}

