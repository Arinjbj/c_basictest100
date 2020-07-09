#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if(x & 1) printf("odd\n");
	else printf("else\n");
	if(y & 1) printf("odd\n");
	else printf("else\n");
	if(z & 1) printf("odd\n");
	else printf("else\n");
	return 0;
}