#include <stdio.h>

int main()
{
	int a, d, n;
	scanf("%d %d %d", &a, &d, &n);
	while(n > 1)
	{
		a += d;
		n--;
	}
	printf("%d", a);
	return 0;
}