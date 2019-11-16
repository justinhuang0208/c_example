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
	cout << "請輸入員工的人數：";
	cin >> num;
	Employee *ptr;				//宣告Employee類別的指標
	//動態配置陣列，ptr指向物件陣列的第一個元素的位址
	ptr=new Employee[num];		//產生num個陣列元素
	cout << "請輸入 " << num << " 位員工的姓名與薪資\n";
	for (i=0; i<num; i++)
	{
		cout << "第 " << (i+1) << " 位員工姓名：" ;
		cin >> ptr->Name  ;
		cout << "第 "  << (i+1) << " 位員工薪資：";
		cin >> ptr->Salary  ;
		ptr++;
	}
	cout << "\n印出所有員工的姓名與薪資\n";
	cout << "編號\t姓名\t薪資\n";
	cout << "======================\n";
	ptr-=num;		//ptr指向物件陣列的第一個元素的位址
	for (i=0; i<num; i++)
	{
		cout <<" " << (i+1) << "\t" << ptr->Name << "\t" 
			<< ptr->Salary  << endl;
		ptr++;
	}

 	system("PAUSE");

	return 0;
}
