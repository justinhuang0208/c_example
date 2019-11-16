#include <stdio.h>

#define C(x) (x-32.0)*5.0/9.0/*print C degree*/
#define F(x) (9.0*x)/5.0+32.0/*print F degree*/

int main(int argc, char const *argv[])
{
	int n;
	double x;
	printf("(1)C or (2)F\n");
	scanf("%d\n", &n);
	if (n==1)
	{
		printf("Please enter a number:");
	    scanf("%lf\n", &x);
		printf("%.2lf\n", C(x));
	}
	else if (n==2)
	{
		printf("Please enter a number:");
	    scanf("%lf\n", &x);
		printf("%.2lf\n", F(x));
	}
	else
	{
		printf("wrong number!\n");
	}
	return 0;
}
