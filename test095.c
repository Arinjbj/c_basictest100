#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, n, min, temp = 0;
	char *call, *ptr;
	
	scanf("%d\n", &n);
	
	call = (char *)calloc(n, 3);
	
	scanf("%[^\n]s", call);
	
	ptr = strtok(call, " ");
	min = atoi(ptr);
	for(i = 1;i < n;i++)
	{
		ptr = strtok(NULL, " ");
		temp = atoi(ptr);
		if(temp < min) min = temp;
	}
	printf("%d", min);
	return 0;
}