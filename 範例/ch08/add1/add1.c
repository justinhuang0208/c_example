#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void add(int,int); /* �禡�ŧi�A���Ǧ^�� */

int main(int argc, char *argv[])
{
  int a=10,b=20;
  add(20,30); /* �����Ǳ`�� */
  add(a,b);  /* ���ܼ� */
  system("PAUSE");
  return 0;
}

void add(int x,int y)
{
  int temp;
  temp=x+y;
  printf("add(%d,%d)=%d\n\n",x,y,temp);
}

