#include <stdio.h>

int main()
{
	int w, h, b;
	double size;
	scanf("%d %d %d", &w, &h, &b);
	size = (double)(w * h * b) / 8 / 1024 / 1024;
	printf("%.2f MB", size);
	return 0;
}