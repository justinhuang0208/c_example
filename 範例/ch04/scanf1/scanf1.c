#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yy,mm,dd; 
	printf("Date�G(yyyy-mm-dd) : ");
	scanf("%d-%d-%d",&yy ,&mm,&dd);
	printf("\n���Ѥ���G%d/%d/%d \n\n",yy,mm,dd);
	
	system("PAUSE");

	return 0;
}
