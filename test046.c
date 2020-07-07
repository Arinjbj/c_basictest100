#include <stdio.h>

int main()
{
	int a, b, c;
	long long int sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	printf("%lld\n%.1lf", sum, (double)sum / 3);
	return 0;
}
