#include<stdio.h>

int main() 
{
	int num[5];
	int i, n, t, j;
	printf("\n==氣泡排序法(由小到大排列)==\n");
	printf("\n請輸入五個整數數字\n\n");
	printf("排序前:");
	for (i=0; i<=4; i++) 
	{
		scanf("%d", &n);
		num[i]=n;
	}
	for (i=3; i>=0; i--) 
	{
		for (j=0; j<=i; j++)
		{
			if(num[j]>num[j+1])
				{
					t=num[j];
					num[j]=num[j+1];
					num[j+1]=t;
				}
		}
	}
	printf("\n排序後：");
	for (i=0; i<=4; i++)
	{
	printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}
