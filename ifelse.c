#include<stdio.h>

int main() {
	int cost, total, meal = 800;
	printf("Hoe many costmer do you have: ");
	scanf("%d", &cost);
	if(cost>=4)
		total = (cost * 800) * 0.8;
	else
		total = cost * 800;
	printf("total:%d \n", total);
	return 0;
}
