#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   /* 結構若定義在函式內，則只有該函式才能使用 */
 	struct date		/* 定義date出生日期結構，含有年月日成員 */
	{
		int year;
		int month;
		int day;
	};

	struct ename		/* 定義ename英文姓名結構，含有last和first成員 */
	{
		char last[10];
		char first[10];
	};

	struct person	/* 定義person個人資料結構 */
	{
		char id[11];
		char cname[10];
		struct date birth;		/* date出生日期結構 */
		char blood[3] ;
		char married;
		struct ename name; 	/* ename英文姓名結構 */
	};

	struct person p1={"B123456789","張三",{1980,10,25},
	"A",'Y',{"Lin","David"}};
	printf(" 1. 身分證字號: %s\n", p1.id);
	printf(" 2. 中文姓名  : %s\n", p1.cname);
	printf(" 3. 出生年份  : %d 年\n", p1.birth.year-1911);
	printf(" 4. 出生月份  : %d 月\n", p1.birth.month);
	printf(" 5. 出生日期  : %d 日\n", p1.birth.day);
	printf(" 6. 血    型  : %s 型\n", p1.blood);
	printf(" 6. 結    婚  : %c \n", p1.married);
	printf(" 7. 英文姓名  : %s %s\n", p1.name.first, p1.name.last);
  printf("\n");
  system("PAUSE");	
  return 0;
}

