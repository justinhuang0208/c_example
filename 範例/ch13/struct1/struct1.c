#include <stdlib.h>
#include<string.h>
#define SIZE 10

struct product 	
{
	char no[SIZE];
	char *name;
	int price;
} iPad,iPhone;

int main(int argc, char *argv[])
{
 	char str1[20];
	struct product iMac ={"a003","iMac 2���q",1500}; /* �ŧi�ɦP�ɳ]�w��� */
	strcpy(iPad.no,"a001");
	iPad.name="iPad 2���O";
	iPad.price=5000;
	printf(" �п�J���~�s���G");
	gets(iPhone.no);
	printf(" �п�J���~�W�١G");
	gets(str1);
	iPhone.name=str1;
	printf(" �п�J���~����G");
	scanf("%d",&iPhone.price);

	printf("\n ====== ���~����M�� ====== \n\n");
	printf("\t���~�s���G%s\n", iPad.no);
	printf("\t���~�W�١G%s\n", iPad.name);
	printf("\t���~����G%d\n\n", iPad.price);

	printf("\t���~�s���G");
	puts(iPhone.no);
	printf("\t���~�W�١G");
	puts(iPhone.name);
	printf("\t���~����G%d\n\n", iPhone.price);

	printf("\t���~�s���G%s\n", iMac.no);
	printf("\t���~�W�١G%s\n", iMac.name);
	printf("\t���~����G%d\n\n", iMac.price);

   system("PAUSE");	
   return 0;
}

