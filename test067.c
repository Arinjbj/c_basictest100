#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n & 0x80000000)
	{
		printf("minus\n");
		if(-n & 1)
		{
			printf("odd");
		}
		else
		{
			printf("even");
		}
	}
	else
	{
		printf("plus\n"); 
		if(n & 1)
		{
			printf("odd");
		}
		else
		{
			printf("even");
		}
	}
	return 0;
}
