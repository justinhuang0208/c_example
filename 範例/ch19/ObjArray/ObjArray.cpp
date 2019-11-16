#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Employee				//定義Employee員工類別有Name姓名及Salary薪水屬性
{
public :
	string Name;
	int Salary;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	Employee aryEmployee[5];	//宣告aryEmployee[0]~aryEmployee[4]
	cout << "請輸入 5 位員工的姓名與薪資\n";
	for (i=0; i<5; i++)
	{
		cout << "第 " << (i+1) << " 位員工姓名：" ;
		cin >> aryEmployee[i].Name  ;		//輸入第i位員工的姓名
		cout << "第 "  << (i+1) << " 位員工薪資：";
		cin >> aryEmployee[i].Salary  ; 		//輸入第i位員工的薪資
	}
	cout << "\n印出所有員工的姓名與薪資\n";
	cout << "編號\t姓名\t薪資\n";
	cout << "==================\n";
	for (i=0; i<5; i++)
	{    //印出第i位員工的姓名與薪資
		cout <<" " << (i+1) << "\t" << aryEmployee[i].Name << "\t" 
			<< aryEmployee[i].Salary  << endl;
	}

   system("PAUSE");

	return 0;
}
