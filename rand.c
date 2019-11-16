#include<stdio.h>
#include<time.h>
#include<stdlib.h>

	int main() {
	int a, b;
	srand(time(NULL));
	a = rand() % 5 + 1;
	printf("Please enter a number(1~5): ");
	scanf("%d", &b);
	if(b > a)
		printf("too big\n");
	else if(a > b)
		printf("too small\n");
	else if(a == b)
		printf("correct\n");
	return 0;
}
