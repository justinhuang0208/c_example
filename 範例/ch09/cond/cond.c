#include <stdio.h>
#include <stdlib.h>
#define LEVEL 2		/* �u�n���Ʀr�A�sĶ���|�̱����ܽsĶ */
#if LEVEL==1		
 		#define ROOM "�`�ήM��"
#elif LEVEL==2
 		#define ROOM "�e��M��"
#elif LEVAL==3
 		#define ROOM "�L�����H��"
#else
 		#define ROOM "�s��/�����зǩ�"
#endif

int main(int argc, char *argv[])
{
 		printf(" ===�w����{-�غְs��===\n\n");
		printf(" �z���|�����ŬO %d\n", LEVEL);
		printf(" �i�H���ж��O %s\n", ROOM);
		printf("\n");
   	system("PAUSE");	
   	return 0;
}

