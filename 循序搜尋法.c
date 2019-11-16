#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int i, searchNum, num=-1;
	int b[5];
	printf("========  循序搜尋法  ========\n\n");
	printf("連續輸入五個整數（數字間空一格）:");
	for(i=0; i<=4; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("\n\n輸入要搜尋的整數：");
	scanf("%d", &searchNum);
	for(i=0; i<5; i++)
	{
		if(b[i]==searchNum)
		{
			num=i;
			break;
		}
	}
	if(num==-1)
		printf("\n\n找不到%d", searchNum);
	else
		printf("\n\n%d在第%d個\n", searchNum, (num+1));
	return 0;
	
	
}
