#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <conio.h>
#define LEN 100

typedef struct 
{
	char bookid[6];
	char bookname[30];
	int price;
	int qty;
	char flag[3];
}book;

int main(int argc, char *argv[])
{
 	int fno1, rectot=0;
	char fpath[LEN], t_price[10], t_qty[10];
	book mybook;
	printf("�п�ܥ\��->1.�}�s��  2.�}���ɡG");
	if(getche()=='1')
	{
		printf("\n�п�J�s�ɮ׸��|�G");
		gets(fpath);
		fno1=open(fpath, O_WRONLY|O_CREAT, S_IREAD|S_IWRITE);
	}
	else
	{
		printf("\n�п�J���}�Ҫ��ɮ׸��|�G");
		gets(fpath);
		fno1=open(fpath, O_WRONLY|O_APPEND, S_IREAD|S_IWRITE);
	}
	if(fno1==-1)
	{
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}

	while(1)
	{
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y')
		{
			printf("\n�п�J�n�s�W�����->\n");
			printf("�Ѹ��G");
			gets(mybook.bookid);
			printf("�ѦW�G");
			gets(mybook.bookname );
			printf("����G");
			gets(t_price);
			mybook.price = atoi(t_price);
			printf("�w�s�G");
			gets(t_qty);
			mybook.qty = atoi(t_qty);
			write(fno1, &mybook, sizeof(mybook));
		}
		else
		{
			close(fno1);
			printf("\n��Ƨ�s����...\n");
			break;	
		}
	}
	fno1=open(fpath, O_RDONLY);
	if(fno1==-1)
	{
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	while(!eof(fno1))
	{
		read(fno1, &mybook, sizeof(mybook));
		printf("%6s %30s %5d %5d\n", 
			mybook.bookid, mybook.bookname, 
           mybook.price, mybook.qty);
		rectot++;
	}
	close(fno1);
	printf("�O���`���ơG%d\n\n", rectot);

  system("PAUSE");	
  return 0;
}

