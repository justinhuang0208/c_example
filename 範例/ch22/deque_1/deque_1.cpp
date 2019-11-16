#include <cstdlib>
#include <iostream>
#include <deque>
using namespace std;

template <class T>
void PrintOut(T& container);

int main(int argc, char** argv)
{
   deque<int> container(2);
   container[0]=1;
   container[1]=2;
   PrintOut(container);

	cout << "將 3, 4 兩個元素壓入deque容器的最後面...\n";
	container.push_back (3);
	container.push_back (4);
	PrintOut(container);

	cout << "將deque容器內最前面的元素刪除...\n";
	container.erase (container.begin ());
	PrintOut(container);

   cout << "將 5 元素放入deque容器的最後面...\n";
	container.insert  (container.end(), 5);
	PrintOut(container);

	cout << "將 6,7 兩個元素壓入deque容器的最前面...\n";
	container.push_front (6);
	container.push_front (7);
	PrintOut(container);

	cout << "由deque容器內最前面彈出兩個元素...\n";
	container.pop_front ();
	container.pop_front ();
	PrintOut(container);

	cout << "由deque容器內最後面彈出兩個元素...\n";
	container.pop_back ();
	container.pop_back ();
	PrintOut(container);


	cout << "deque容器內有 " << container.size () << " 個元素\n";
	cout << "deque容器內最大可存放 " << container.max_size () << " 個元素\n\n";
   system("PAUSE");
   return 0;
}
template <class T>
void PrintOut(T& container)
{
    if(container.empty())
    {
        cout << "容器為空";
    }
    else
    {
        deque<int>::iterator ptr;
		 cout << "容器內的資料為：";
        for(ptr=container.begin();ptr!=container.end();ptr++)
        {
            cout << *ptr << " ";
        }
        cout << "\n\n";
    }
}

