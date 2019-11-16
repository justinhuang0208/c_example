#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int,int); /* 函式宣告，傳回整數值*/

int main(int argc, char *argv[])
{
  int a=10,b=20;  printf("add(20,30)=%d\n\n",add(20,30));   
  printf("add(%d,%d)=%d\n\n",a,b,add(a,b));
  system("PAUSE");	
  return 0;
}

int add(int x,int y)
{
  int temp;
  temp=x+y;
  return temp; //將temp傳回給主函式  
}

