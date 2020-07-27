#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	for(i = 0;i <= n;i++)
	{
		if(!(i & 1 == 1)) sum += i;
	}
	printf("%d", sum);
	return 0;
}
