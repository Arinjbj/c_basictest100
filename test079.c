#include <stdio.h>

int main()
{
	int c;
	while(1)
	{
		c = fgetc(stdin);
		printf("%c\n", c);
		getchar();
		if(c == 'q') break;
	}
	return 0;
}