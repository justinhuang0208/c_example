#include<stdio.h>

int main() {
	int a[3][4] ={ {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
	int sum = 0;
	int i, j;
	for (i=0; i<=2; i++) {
		for (j=0; j<=3; j++) {
			printf("a[%d][%d]= %2d, ", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
	printf("\n=== 陣列a的總和爲：%d===\n\n", sum);
	return 0;
}
