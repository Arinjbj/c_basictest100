#include <stdio.h>

#define Bsize 19

int main()
{
	int board[Bsize][Bsize], i, j, x, y, n;
	
	for(i = 0;i < Bsize;i++)
	{
		for(j = 0;j < Bsize;j++)
		{
			scanf("%d", &board[i][j]);
		}
	}
	
	scanf("%d", &n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%d %d", &x, &y);
		x--;
		y--;
		for(j = 0;j < Bsize;j++)
		{
			if(j == x) continue;
			board[x][j] = !board[x][j];
		}
		for(j = 0;j < Bsize;j++)
		{
			if(j == y) continue;
			board[j][y] = !board[j][y];
		}
	}
	
	for(i = 0;i < Bsize;i++)
	{
		for(j = 0;j < Bsize;j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}
