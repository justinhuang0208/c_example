#include <stdio.h>
#include <stdlib.h>
#define MSG "�w����{!"
#define KEYIN "�п�J�m�W :"

int main(int argc, char *argv[])
{
   char name[15];
   printf(" %s  %s ", MSG, KEYIN);
   scanf("%s", name);
   printf(" %s, �z�n ! \n", name); 
   system("PAUSE");	
   return 0;
}
