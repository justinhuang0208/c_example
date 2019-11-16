#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define LEN 512

int main(int argc, char *argv[])
{
 	int fno1, fno2, readbytes;
	int buff[LEN];
	char f1path[LEN], f2path[LEN];
	printf("請輸入欲複製的來源檔案：");
	gets(f1path);
	printf("請輸入欲複製的目地檔案：");
	gets(f2path);
	fno1=open(f1path, O_RDONLY);		/*開啟檔案為唯讀模式*/
	/*開檔模式為建新檔及附加寫入模式，存取模式為允許讀寫*/
	fno2=open(f2path, O_CREAT|O_WRONLY, S_IWRITE|S_IREAD);
	if(fno1==-1 || fno2==-1)
	{
		printf("\n複製失敗...\n");
		exit(0);
	}
   /*判斷檔案指標是否讀到EOF檔案結尾*/
	while(eof(fno1)==0)	
	{
     /*讀出fno1對應檔案的資料並放入buff陣列*/
	  readbytes=read(fno1, buff, LEN);
    /*將buff陣列寫入fno2對應的檔案*/
	  write(fno2, buff, readbytes);	
	}
	close(fno1);		/*關閉fno1檔案代碼對應的檔案*/
	close(fno2);		/*關閉fno2檔案代碼對應的檔案*/
	printf("\n完成將 %s 複製到 %s\n", f1path, f2path);

  system("PAUSE");	
  return 0;
}

