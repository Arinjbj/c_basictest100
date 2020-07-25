#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int n;
	int i, j, leng, clap;
	char str[32];
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
	{
		sprintf(str, "%d", i);
		leng = strlen(str);
		for(j = 0, clap = 0;j < leng;j++)
		{
			if(str[j] == '3' || str[j] == '6' || str[j] == '9')
			{
				clap++;
			}
		}
		if(clap == 0) printf("%s", str);
		else
		{
			for(j = 0;j < clap;j++)
			{
				printf("X");
			}
		}
		printf(" ");
	}
	return 0;
}
