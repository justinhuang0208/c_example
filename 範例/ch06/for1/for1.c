#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for (i=1; i<=10; i++)
	{
	    printf(" %d", i);	/* 顯示數字 */
		if (i < 10) printf(","); 		/* 數字後面加逗號,最後一個數字10省略逗號 */ 
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}
