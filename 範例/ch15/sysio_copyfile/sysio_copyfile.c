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
	printf("�п�J���ƻs���ӷ��ɮסG");
	gets(f1path);
	printf("�п�J���ƻs���ئa�ɮסG");
	gets(f2path);
	fno1=open(f1path, O_RDONLY);		/*�}���ɮ׬���Ū�Ҧ�*/
	/*�}�ɼҦ����طs�ɤΪ��[�g�J�Ҧ��A�s���Ҧ������\Ū�g*/
	fno2=open(f2path, O_CREAT|O_WRONLY, S_IWRITE|S_IREAD);
	if(fno1==-1 || fno2==-1)
	{
		printf("\n�ƻs����...\n");
		exit(0);
	}
   /*�P�_�ɮ׫��ЬO�_Ū��EOF�ɮ׵���*/
	while(eof(fno1)==0)	
	{
     /*Ū�Xfno1�����ɮת���ƨé�Jbuff�}�C*/
	  readbytes=read(fno1, buff, LEN);
    /*�Nbuff�}�C�g�Jfno2�������ɮ�*/
	  write(fno2, buff, readbytes);	
	}
	close(fno1);		/*����fno1�ɮץN�X�������ɮ�*/
	close(fno2);		/*����fno2�ɮץN�X�������ɮ�*/
	printf("\n�����N %s �ƻs�� %s\n", f1path, f2path);

  system("PAUSE");	
  return 0;
}

