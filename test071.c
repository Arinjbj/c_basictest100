#include <stdio.h>
#include <stdlib.h>

void press0(void)
{
	int *num;
	num = (int *)malloc(sizeof(int));
	scanf("%d", num);
	if(*num == 0)
	{
		free(num);
		exit(1);
	}
	else
	{
		printf("%d\n", *num);
		free(num);
		press0();
	}
}

int main()
{
	press0();
	return 0;
}
