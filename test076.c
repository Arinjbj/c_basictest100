#include <stdio.h>

int main()
{
	int n, a;
	scanf("%c", &n);
	for(a = 'a';a <= n;a++)
	{
		printf("%c", a);
		printf(" ");
	}
	return 0;
}