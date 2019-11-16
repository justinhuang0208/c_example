#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	int a=30,b=10,c=20;
		printf(" %d \n", a>b && a>c); 	/*  印出1，1表示true	*/
   	printf(" %d \n", a>b || a<c);   	/*  印出1，1表示true 	*/
   	printf(" %d \n", !(a>b));      	/*  印出0，0表示false 	*/
   	system("PAUSE");	
   	return 0;
}

