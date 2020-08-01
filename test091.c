#include <stdio.h>

int main()
{
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	for( ;n > 1;n--)
	{
		a = a * m + d;
	}
	printf("%d", a);
	return 0;
}