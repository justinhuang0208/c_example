#include <stdio.h>
#include <stdlib.h>

int fib(int);
	 
int main(int argc, char *argv[])
{
  	printf("\n �O�� f(6)�Ĥ����Y�Ƭ��G %d\n", fib(6));
		printf("\n �O�� f(10)�ĤQ���Y�Ƭ��G %d\n\n", fib(10));
   	system("PAUSE");	
   	return 0;
}
int fib(int n)
{
		if(n==1 || n==2)					/* �Yn��1��2�A�h�Ǧ^1 */
		{
	 	 	return 1;					/* f(1)=1   f(2)=1   */
		}
		else								/* �Yn>2, �h�I�s�禡�ۤv����  */
		{
			return fib(n-1)+fib(n-2); 	/* �I�s�禡�ۤv����  */
		}
}

