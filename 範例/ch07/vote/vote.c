#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		/* name���а}�C�s��4��q�P���m�W */
		char *name[]={"�P�ب�","�B�o��","�i�Ǧ�","��¬�"};
		int vote[4][3]=			/* vote�}�C�s��4��q�P1-3�a�Ϫ��o���� */
		        	 	{ 
					   	{700,600,300}, 
					   	{1000,500,200},
				       	{500,700,300},
					   	{1200,400,800},
					 };
		/* personTot�}�C�s��4��q�P���o���ơA�Y�O�q�P1-3�a���`�o���� */
		int personTot[4]={0,0,0,0}; 	
		int total=0, i, j;		/* total�N���`�o���� */
		printf("\n �q�P�m�W\t�Ĥ@�a��\t�ĤG�a��\t�ĤT�a��\t�`�o����\n");
		printf("====================================");
		printf("====================================\n");
		for(i=0;i<4;i++)	
		{
			printf(" %s", name[i]);
			for(j=0;j<3;j++)			
			{
			printf("\t\t%d", vote[i][j]);/*�L�X��i��q�P�b��j�Ӧa�Ϫ�����*/
			personTot[i]+=vote[i][j];	/* �p���i��q�P���o���� */
			total+=vote[i][j];			/* �p���`�o���� */
			}
			printf("\t\t%d", personTot[i]);	/* �L�X�C��q�P���o���� */
			printf("\n");
		}
		printf("====================================");
		printf("====================================\n");
		printf("\n");
		for(i=0;i<4;i++)	/* �p��4��q�P���`�o���v�æL�X */
		{
			printf(" %s �o���v�G%5.2f �H", name[i],
			(float)personTot[i]*100/total);
			printf("\n");
		}
  	printf("\n");
  	system("PAUSE");	
  	return 0;

	return 0;
}
