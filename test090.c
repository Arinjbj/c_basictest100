#include <stdio.h>

int main()
{
	long long a, r, n, i;
	scanf("%lld %lld %lld", &a, &r, &n);
	for(i = 1;i < n;i++)
	{
		a *= r;
	}
	printf("%lld", a);
	return 0;
}
