#include <stdio.h>
#include <string.h>

int main()
{
/*	int count;
	char n[20];
	char * ptr;
	scanf("%d\n", &count);
	
	
	scanf("%[^\n]s", n);
	ptr = strtok(n, " ");
	printf("%s\n", ptr);
	count--;
	if(count == 0) return 0;
	reprint:
	ptr = strtok(NULL, " ");
	printf("%s\n", ptr);
	count--;
	if(count != 0) goto reprint;
	return 0;
*/
	
	int count, num;
	scanf("%d\n", &count);
	
	reprint:
	scanf("%d", &num);
	printf("%d\n", num);
	--count;
	if(count != 0) goto reprint;
	return 0;
}
