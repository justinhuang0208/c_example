#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
 		int i;
		char ch, keyin;
		do
		{
			printf("\n�n�L�X�X�� * ��(����J1-9)�G");
			keyin=getche();
			printf("\t");
			if(keyin<='9' && keyin>='1')	/*�P�_�O�_��J 1-9*/
			{
               	printf("\n��X :");
				i=1;			
				do
				{
					printf("*");
					i++;
				}while(i<=(keyin-'0'));
			}
			else
			{
				printf("\n���~ ! �п�J1-9���Ʀr �K�K");
			}
			printf("\n\n �O�_�~��L�C(y/n)? ");
			ch=toupper(getche());
			printf("\n");
		}while(ch=='Y');
		printf("\n");
 		system("PAUSE");	
 		return 0;
}

