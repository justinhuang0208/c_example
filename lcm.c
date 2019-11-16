#include <stdio.h>

long long a, b;
long long gcd2(long long int a, long long int b);

int main(int argc, char const *argv[])
{
	long long int lcm, x, y;
	scanf("%lld", &x);
	scanf("%lld", &y);
	lcm = x*y/gcd2(x, y);
	printf("%lld\n", lcm);
	return 0;
}

long long gcd2(long long int a, long long int b)
{
	return b==0 ? a : gcd2(b,a%b);
}
