#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
   typedef map<string, string, less<string> >  my_map ;
	
	my_map container;
	container.insert
	(my_map::value_type ("vb001", "Visual Basic 2013程式設計經典"));
	container.insert
	(my_map::value_type ("cs001", "Visual C# 2013程式設計經典"));
	container.insert
	(my_map::value_type ("fcs01", "Flash CS 6 網站實務經典"));
	my_map::iterator ptr;
	cout << "書號\t書名\n";
	cout << "=====================================\n";
	for (ptr=container.begin (); ptr!=container.end(); ptr++){
		cout << ptr->first << "\t" << ptr->second << "\n";
	}
	cout << "\n";
	system("PAUSE");
   return 0;
}

