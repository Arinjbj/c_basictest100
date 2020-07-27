#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count;
	char * n;
	char * ptr;
	
	scanf("%d\n", &count);	//getchar() 대신 \n 
	
	n = (char *)malloc(16 * count);
	
	scanf("%[^\n]s", n);
	
	ptr = strtok(n, " ");
	printf("%s\n", n);
	count--;
	
	while(count != 0)
	{
		ptr = strtok(NULL, " ");
		printf("%s\n", ptr);
		count--;
	}
	free(n);
	return 0;
}
