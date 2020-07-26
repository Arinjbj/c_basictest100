#include <stdio.h>

int main()
{
	int n, i = 1, sum = 0;
	scanf("%d", &n);
	while(1)
	{
		sum += i;
		i++;
		if(sum >= n) break;
	}
	printf("%d", sum);
	return 0;
}