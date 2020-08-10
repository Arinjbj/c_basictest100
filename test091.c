#include <stdio.h>

int main()
{
	long long a, m, d, n;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	for( ;n > 1;n--)
	{
		a = a * m + d;
	}
	printf("%lld", a);
	return 0;
}
