﻿#include <stdio.h>

int main()
{
	int board[19] = {}, loca, hakobu, n, i, j;
	
	scanf("%d\n", &n);
	
	for( ;n > 0;n--)
	{
		scanf("%d %d\n", &loca, &hakobu);
		board[loca - 1] += 1 << (hakobu - 1);
	}
	
	for(i = 0;i < 19;i++)
	{
		for(j = 0;j < 19;j++)
		{
			printf("%d ", board[i] & 1);
			board[i] >>= 1;
		}
		printf("\n");
	}
	return 0;
}