#include <cstdlib>
#include <iostream>
#include <functional>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv)
{	//�ϥ�greater<string>�禡����A�G������ȥѤj��p�Ƨ�
   typedef map<string, string, greater<string> >  my_map ;
	my_map container;
	container.insert (my_map::value_type 
		("vb001", "Visual Basic 2013�{���]�p�g��"));
	container.insert (my_map::value_type 
		("cs001", "Visual C# 2013�{���]�p�g��"));
	container.insert (my_map::value_type
		("fcs01", "Flash CS 6 ������ȸg��"));
	my_map::iterator ptr;
	cout << "�Ѹ�\t�ѦW\n";
	cout << "=====================================\n";
	for (ptr=container.begin (); ptr!=container.end(); ptr++){
		cout << ptr->first << "\t" << ptr->second << "\n";
	}
	cout << "\n";
	system("PAUSE");
	return 0;
 }

