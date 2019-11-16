#include <stdio.h>

double a(double n);

int main(int argc, char const *argv[])
{
	double x;
	scanf("%lf", &x);
	printf("%.0lf!= %.0lf\n", x, a(x));
	return 0;
}

double a(double n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n*a(n-1);
}