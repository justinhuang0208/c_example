#include <stdio.h>

long long int gcd1(long long int a, long long int b);
long long gcd2(long long int a, long long int b);
long long gcd3(long long int a, long long int b);
long long a, b;

int main(int argc, char const *argv[])
{
	scanf("%lld", &a);
	scanf("%lld", &b);
	printf("%lld\n", gcd2(a,b));
	return 0;
}
/*暴力法求最大公因數*/
long long int gcd1(long long int a, long long int b)
{
	long long i;
	for (i=b; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			return i;
		}
	}
	return 1;
}

/*遞迴法求最大公因數*/
long long gcd2(long long int a, long long int b)
{
	return b==0 ? a : gcd2(b,a%b);
}
/*用迴圈求最大公因數*/
long long gcd3(long long int a, long long int b)
{
	int gcd=b;
	while(a % gcd != 0)
	{
		gcd = a%b;
		a=b;
		b = gcd;
	}
	return gcd;
}
