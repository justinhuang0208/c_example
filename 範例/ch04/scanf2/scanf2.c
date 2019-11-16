#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char myName[10];
	printf(" 請輸入姓名:" );
	scanf("%s",&myName);
	printf(" 你的名字是 %s \n", myName);
	
	system("PAUSE");

	return 0;
}
