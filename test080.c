#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	for(i = 0;sum < n;i++)
	{
		sum += i;
	}
	printf("%d", --i);
	return 0;
}