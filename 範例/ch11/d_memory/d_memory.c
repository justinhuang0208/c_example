#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 		int *ptr, n, i, search_num, num=-1;
		printf(" �аݭn��J�X�Ӿ�ơG");
		scanf("%d", &n);
		ptr=(int*)malloc(sizeof(int)*n);	   /* �ʺA�t�m�O���� */
		for(i=0;i<n;i++)
		{
			/* �N�ϥΪ̿�J����Ʃ�J����ptr�ثe���V��}���O����Ŷ� */
			printf("   ��%2d�Ӿ�ơG", i+1);
			scanf("%d", ptr+i);
		}
		printf("\n");
		printf(" �п�J�n�j�M���ƭȡG");
		scanf("%d", &search_num);
		for(i=0;i<n;i++)	/* �`�Ƿj�M�k */
		{
			if(*(ptr+i)==search_num)
			{
		 	 	num=i; break;
			}
		}
		printf(" ========================\n");
		if(num==-1)		/* ��ܷj�M�����G */
		{
			printf(" �S���o�ӼƦr-> %d \n", search_num);
		}
		else
		{
			printf(" %d �O�� %d �ӼƦr! \n", search_num, (num+1));
		}
		free(ptr);		/*����O����*/
   	system("PAUSE");	
   	return 0;
}

