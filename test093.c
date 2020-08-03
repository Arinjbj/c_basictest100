#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLSTU 23

int main()
{
	int n, i, temp, student[ALLSTU] = {0};
	char * call;
	char * ptr;
	
	scanf("%d\n", &n);
	
	call = (char *)malloc(n * 4);
	scanf("%[^\n]s", call);
	
	ptr = strtok(call, " ");
	temp = atoi(ptr) - 1;
	student[temp]++;
	
	for(i = 1;i < n;i++)
	{
		ptr = strtok(NULL, " ");
		temp = atoi(ptr) - 1;
		student[temp]++;
	}
	
	for(i = 0;i < ALLSTU;i++)
	{
		printf("%d ", student[i]);
	}
	free(call);
	return 0;
}
