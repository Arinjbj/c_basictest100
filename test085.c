#include <stdio.h>

int main()
{
	long long h, b, c, s;
	double size;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	size = (double)(h * b * c * s) / 8 / 1024 / 1024;
	printf("%.1f MB", size);
	return 0;
}
