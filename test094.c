#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUNUM 23

int main()
{
	int n, i, *call;
	char *k, *ptr;
	scanf("%d\n", &n);
	
	k = (char *)calloc(n, 3);
	call = (int *)calloc(n, sizeof(int));
	
	scanf("%[^\n]s", k);
	
	ptr = strtok(k, " ");
	call[0] = atoi(ptr);
	for(i = 1;i < n;i++)
	{
		ptr = strtok(NULL, " ");
		call[i] = atoi(ptr);
	}
	
	for(i = n - 1;i >= 0;i--)
	{
		printf("%d ", call[i]);
	}
	free(k);
	free(call);
	return 0;
}