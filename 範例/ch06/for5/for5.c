#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	int x;
  	for(x=2;x<=5;x++)
		{
			printf(" f(%d) = %d", x, 3*x*x+2*x+1);
			printf("\n");
    	}
    	printf("\n");
    	system("PAUSE");	
   	return 0;
}

