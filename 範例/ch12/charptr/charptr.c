#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  	int i,k, max, min, max_index=0, min_index=0;
	int price[5]={400,320,350,150,280};
	char *name[5]={"���P�J�|","�p���λ�","���צפz","��o�J��","�D�D�G��"};
	printf(" ���~�W��\t���\n");
	printf(" ===================\n");
	for(i=0;i<5;i++)		/*�L�X���~�γ��*/
	{
		printf(" %s\t%d\n", name[i], price[i]);
	}
	max=price[0];
	min=price[0];
	for(i=1,k=1;i<5;i++,k++)
	{
		if(price[i]>max)
		{
			max=price[i]; 	/*�N�ثe�}�C�����s�Jmax�ܼ�*/
			max_index=i;	/*�N�ثe��X�̤j�Ȫ����Цs�J���ܼ�*/
		}
		if(price[i]<min)
		{
			min=price[k];	/*��X�̤p��*/
			min_index=k; 	/*��X�̤p�Ȧb�ĴX�Ӥ���*/
		}
	}
	printf("\n");
	printf(" �� �Q �����~ : %s, ��� : %d\n",name[max_index], 
		price[max_index]);
    printf(" �̫K�y�����~ : %s, ��� : %d\n",name[min_index], 
        price[min_index]);
    printf("\n");
    system("PAUSE");	
    return 0;
}
