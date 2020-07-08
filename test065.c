#include <stdio.h>

int main()
{
	int n[3];
	scanf("%d %d %d", n, n+1, n+2);
	if(n[0] % 2 == 0) printf("%d\n", n[0]);
	if(n[1] % 2 == 0) printf("%d\n", n[1]);
	if(n[2] % 2 == 0) printf("%d\n", n[2]);
	return 0;
}
