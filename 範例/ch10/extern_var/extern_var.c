#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include "shopping.h"		/*�t�Jshopping.h���Y��*/

int main(int argc, char *argv[])
{
 	extern int total;			/*�ϥ�shopping.h��total�����ܼ�*/
	char ch;
	int keyin;
	do
	{
		printf("   �п�J�ʪ����B�G");
		scanf("%d", &keyin);
		printf("   �ثe���I�`���B�G%d\n", buy(keyin));
		printf("�O�_(y/n)�~���ʪ��G");
		ch=toupper(getche());
		printf("\n\n");
	}while(ch=='Y');	
	printf("���±z���ʶR�A�`�@ %d ��\n", total);
  system("PAUSE");	
  return 0;
}

