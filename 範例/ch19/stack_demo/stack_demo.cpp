#include <cstdlib>
#include <iostream>

using namespace std;

class Stack	//�w�qStack���|���O
{
private:
       //�ŧi�T�ӫ���
       //full��ܰ��|����, empty��ܰ��|����, ptr��ܥثe���|���쪺��m 
       int *full, *empty,  *ptr; 

public:
      //�غc��
      Stack(int n)
      {
         ptr = new int[n];	//�ʺA�t�m���|���ƶq 
         full = ptr + n ;  	//�]�wfull���|���� 
         empty = ptr;      	//�]�wempty���|���� 
      }
       //�N��Ʃ�J���|��Push()��k 
      void Push(int n)
      {

          if (ptr==full)   	//�P�_���|�O�_�w�� 
          {
              cout << "    ���|���F";
              return;               
          }
          *ptr = n ;       	//�N��Ʀs�J�ثe���Ы��V���|����m 
          cout << "    ���J" << *ptr << "����|��";
          ptr++;          	 	//���|���Ц�m���W�� 
       }
       //�N���|����Ƽu�X��Pop()��k 
       void Pop()
       {
          if (ptr==empty)  	//�P�_���|�O�_�w�� 
          {
               cout << "    ���|�ŤF";
               return;                          
          }
          ptr--;          		//���|���Ц�m���U��
          cout << "    �Ѱ��|�u�X��ơG" <<  *ptr;         
       }
       //�L�X���|���Ҧ���ƪ�PrintStack()��k 
       void PrintStack()
       {
           if (ptr==empty) 	//�P�_���|�O�_�w��
           {
               cout << "    ���|���S�����";
               return;                
           }
           cout << "    �L�X���|���e�G";
           int *lptr;
           lptr = ptr;
           do{     				//�ѥثe���|��m�}�l�L��Ƥ@���L����|���� 
                if (lptr!=empty)
                {
                    lptr--;
                    cout << *lptr << " ";
                }
                else
                {
                    break;
                }
           }while(1);
           cout << endl;
       }
   };

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "�п�J���|�i�s�񪺼ƶq�G";
	    int num ;
    cin >> num;
    Stack s(num) ;     //�إ�Stack���|����s�As����i�s��num�Ӿ�Ƹ�� 
    int sel, input;
    do
    {
         cout << "\n\n=== Stack Operation ===\n";
         cout << "    1. Push Operation \n";
         cout << "    2. Pop Operation \n";
         cout << "    3. Printout Stack \n";
         cout << "    4. Quit \n";
         cout << "======================= \n";
         cout << "    �п�� [0-3]�G";
         cin >> sel ;         
         if (sel == 1)             
         {
              cout << "    �п�J�n��J���|����ơG";
              cin >> input ;
              s.Push(input);    	//�Ninput��J����Ʃ�J���|�� 
         }
         else if (sel == 2)
         {
              s.Pop();          		//�Ѱ��|���u�X��� 
         }
         else if (sel == 3)
         {
               s.PrintStack();   	//�L�X���|���Ҧ������ 
          }
          else if (sel == 4)
          {
               cout << "    ���}�t�� \n";
               break;
          }
          else
          {
               cout << "    === Error input(0-3)!! \n";
          }
    } while (1);
    system("PAUSE");


	return 0;
}
