#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  	char name[5][10];
	char t[10];
	int i, j;
	printf("-��w�Ʈ�k(�Ѥp��j�ƧǦr��)-\n");
	printf("-----�п�J����ǥͪ��m�W-----\n");
	printf("\n");
	printf(" �Ƨǫe->\n");
	for(i=0;i<5;i++) 
	{
		printf(" �� %d ��ǥ͡G", i+1);
		gets(name[i]);
	}

	for(i=3;i>=0;i--)						/* ��w�ƧǪk*/
	{
		for(j=0;j<=i;j++)
		{
			if(strcmp(name[j], name[j+1])>0)	/* ����r�� */
			{
				strcpy(t, name[j]);			/* �r�꤬��*/
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], t);
			}
		}
	}

	printf("\n �Ƨǫ�->\n");
	for(i=0;i<5;i++)
	{
		printf(" %d.->%s\n", i+1, name[i]);
	}
	printf("\n");
    system("PAUSE");	
    return 0;
}
