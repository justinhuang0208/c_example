#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char *argv[])
{
 		char pw[10];
		int count=0;
		do
		{
			count++;
			printf("�� %d ����J�K�X�G", count);
			gets(pw);
			if(strcmp(pw, "gotop")==0)
			{
               	break;
			}
			else if(count==3)
			{
               	printf("\n �s��T�� �������� .... \n");
               	getche();
				exit(0);		/* �פ�{������ */
			}
			else
				printf(" ^_^ Sorry! �K�X���~ ....  \n\n");    
		}while(1);
		printf("�K�X���T!! Pass ....\n\n");
 		system("PAUSE");	
 		return 0;
}

