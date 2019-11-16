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
	printf("請選擇功能->1.開新檔  2.開舊檔：");
	if(getche()=='1')
	{
		printf("\n請輸入新檔案路徑：");
		gets(fpath);
		fno1=open(fpath, O_WRONLY|O_CREAT, S_IREAD|S_IWRITE);
	}
	else
	{
		printf("\n請輸入欲開啟的檔案路徑：");
		gets(fpath);
		fno1=open(fpath, O_WRONLY|O_APPEND, S_IREAD|S_IWRITE);
	}
	if(fno1==-1)
	{
		printf("\n開檔失敗, %s 可能不存在\n", fpath);
		exit(0);
	}

	while(1)
	{
		printf("\n請問是否要繼續新增資料(Y/N)：");
		if(toupper(getche())=='Y')
		{
			printf("\n請輸入要新增的資料->\n");
			printf("書號：");
			gets(mybook.bookid);
			printf("書名：");
			gets(mybook.bookname );
			printf("單價：");
			gets(t_price);
			mybook.price = atoi(t_price);
			printf("庫存：");
			gets(t_qty);
			mybook.qty = atoi(t_qty);
			write(fno1, &mybook, sizeof(mybook));
		}
		else
		{
			close(fno1);
			printf("\n資料更新完成...\n");
			break;	
		}
	}
	fno1=open(fpath, O_RDONLY);
	if(fno1==-1)
	{
		printf("\n開檔失敗, %s 可能不存在\n", fpath);
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
	printf("記錄總筆數：%d\n\n", rectot);

  system("PAUSE");	
  return 0;
}

