#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100
typedef struct 			/*�w�q���y���c*/
{
	char bookid[6];		/*�Ѹ�*/
	char bookname[30];	/*�ѦW*/
	int price;			/*���*/
	int qty;				/*���*/
	char flag[3];		/*�R���X��*/
}book;

int main(int argc, char *argv[])
{
 	FILE *fptr;
	char fpath[LEN], t_price[10], t_qty[10];
	int fno, fsize, rectot;
	book mybook;
	printf("�п�ܥ\��->1.�}�s��  2.�}���ɡG");
	if(getche()=='1')
	{
		printf("\n�п�J�s�ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "w+");
	}
	else
	{
		printf("\n�п�J���}�Ҫ��ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "a+");
	}
	if(fptr==NULL)
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
           /*�N���c�g�J�ɮ�*/
			fwrite(&mybook, sizeof(mybook), 1, fptr);
		}
		else
		{
			fclose(fptr);
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);
	fsize=filelength(fno);
   /*���o�O���`����*/
	rectot=filelength(fileno(fptr))/sizeof(book);	
	printf("\n��Ƨ�s����...");
	printf("\n%s �ثe�ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	printf("\n�O���`���ơG%d\n", rectot);
	/* �P�_�O�_�٦����*/
	while(fread(&mybook, sizeof(mybook), 1, fptr)!=NULL)
	{	/*���X�@���O���A�ɮ׫��ЦA���Ჾ�ʤ@���O��������*/
		printf("%6s %30s %5d %5d\n", 
			mybook.bookid, mybook.bookname, mybook.price, mybook.qty);
	}
	fclose(fptr);
	printf("\n");

  system("PAUSE");	
  return 0;
}

