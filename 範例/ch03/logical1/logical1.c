#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	int a=30,b=10,c=20;
		printf(" %d \n", a>b && a>c); 	/*  �L�X1�A1���true	*/
   	printf(" %d \n", a>b || a<c);   	/*  �L�X1�A1���true 	*/
   	printf(" %d \n", !(a>b));      	/*  �L�X0�A0���false 	*/
   	system("PAUSE");	
   	return 0;
}

