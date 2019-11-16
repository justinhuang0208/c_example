#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class point
{
private:
	int x, y;
public:
	point();
	point operator+(point);		//�h��+�G���B��l
	point operator+(int);			//�h��+�G���B��l
	point operator++();			//�h��+�@���B��l(�e�m�B��)
	void getxy();
	void setxy(int, int);
};
point::point()
{
	x=0;
	y=0;
}
point point::operator+(point obj) 
{
	point t;		
	t.x=x+obj.x; 
	t.y=y+obj.y;	
	return t;		
}
point point::operator+(int n)
{
	point t;
	t.x=x+n;
	t.y=y+n;
	return t;
}
point point::operator++()
{
	x=x+1;
	y=y+1;
	return *this;
}
void point::getxy()
{
	cout << "x�y��:" << x << "\ty�y��:" << y << endl;
}
void point::setxy(int x1, int y1)
{
	x=x1;
	y=y1;
}

int main(int argc, char** argv)
{
	point p1, p2, p3;
	p1.setxy (10,20);
	cout << "obj1�y��->" ;
	p1.getxy ();
	p2.setxy (15,23);
	cout << "obj2�y��->" ;
	p2.getxy ();
	p3.setxy (0,0);
	cout << "obj3�y��->" ;
	p3.getxy ();
	cout << endl;
	p3=p1+p2;
	cout << "p1+p2=p3\np3�y��->" ;
	p3.getxy ();
	cout << endl;
	p3=p3+6;
	cout << "p3+6\np3�y��->" ;
	p3.getxy ();
	cout << endl;
	++p3;
	cout << "++p3\np3�y��->" ;
	p3.getxy ();
	system("PAUSE");
 	return 0;
}

