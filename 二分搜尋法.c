#include<stdio.h>

int main()
{
	int a[5];
	int i, j, t;
	int low=0, high=4, mid, searchNum, num=-1;
	printf("====== 二分搜尋法 ======\n\n");
	printf("連續輸入五個數字（數字間空一格）:");
	for(i=0; i<=4; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n\n排序前：");
	for(i=0; i<=4; i++)
	{
		printf("%d ", a[i]);
	}
	for(i=3; i>=0; i--)
	{
		for(j=0; j<=i; j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n排序後：");
	for(i=0; i<=4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n請輸入要搜尋的數字：");
	scanf("%d", &searchNum);
	do
	{
		mid=(high+low)/2;
		if(a[mid]==searchNum)
		{
			num=mid;
			break;
		}
		if(a[mid]>searchNum)
			high=mid-1;
		else
			low=mid+1;
	}while(low<=high);
	
	if(num==-1)
		printf("找不到");
	else
		printf("%d在第%d個", searchNum, (num+1));
	printf("\n\n");
	return 0;
}
