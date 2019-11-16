#include <stdio.h>

double a(double n);

int main(int argc, char const *argv[])
{
	double i, x;
	scanf("%lf", &x);
	for (i = 0; i <= x; i++) /*print 0!~x!*/
	{
		printf("%.0lf!= %.0lf\n", i, a(i));
	}
	return 0;
}

double a(double n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n*a(n-1);
}