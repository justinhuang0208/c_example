#include<stdio.h>

int main() {
	char *name[] = {"周華健","劉德華","張學友","梁朝偉"};
	int vote[4][3] = {{700,600,300},{1000,500,200},{500,700,300},{1200,400,800}};
	int personTot[4] = {0,0,0,0};
	int total, i, j;
	printf("\n 歌星姓名\t第一地區\t第二地區\t第三地區\t總得票數\n");
	printf("====================================");
	printf("====================================\n");
	for (i=0; i<=3; i++) {
		printf("%s", name[i]);
		for (j=0; j<=2; j++) {
			printf("\t\t%d", vote[i][j]);
			personTot[i]+=vote[i][j];
			total+=vote[i][j];
		}
		printf("\t\t%d", personTot[i]);
		printf("\n");
	}
	printf("====================================");
	printf("====================================\n");
	for (i=0; i<=3; i++) {
		printf("%s得票率：%5.2f",name[i], ((float)personTot[i]/total)*100);
		printf("\n");
	}
	printf("\n");
	return 0;
}
