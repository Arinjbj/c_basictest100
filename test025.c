#include <stdio.h>

int main()
{
	int a, s, d, f, g;
	scanf("%1d%1d%1d%1d%1d", &a, &s, &d, &f, &g);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a * 10000, s * 1000, d * 100, f * 10, g);
	return 0;
}
