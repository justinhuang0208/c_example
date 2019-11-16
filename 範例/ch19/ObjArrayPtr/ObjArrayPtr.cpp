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
	Employee aryEmployee[5];	//宣告aryEmployee[0]~aryEmployee[4]
	Employee *ptr;				//宣告Employee類別的ptr指標
	ptr = aryEmployee;			//ptr指到陣列元素aryEmployee[0]的位址
	cout << "請輸入 5 位員工的姓名與薪資\n";
	for (i=0; i<5; i++)
	{
		cout << "第 " << (i+1) << " 位員工姓名：" ;
		cin >> ptr->Name  ;		//使用指標存取Name屬性
		cout << "第 "  << (i+1) << " 位員工薪資：";
		cin >> ptr->Salary  ;	//使用指標存取Salary薪水
		ptr++;					//指標往下移，相當於陣列元素跳下一個註標
	}
	cout << "\n印出所有員工的姓名與薪資\n";
	cout << "編號\t姓名\t薪資\n";
	cout << "======================\n";
	ptr = aryEmployee;		//ptr指到陣列元素aryEmployee[0]
	for (i=0; i<5; i++)
	{
		cout <<" " << (i+1) << "\t" << ptr->Name << "\t" 
		 << ptr->Salary  << endl;
	    ptr++;
    }
    system("PAUSE");

	return 0;
}
