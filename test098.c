#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h, w, n, l, d, x, y, i, j;
	int **board;
	
	scanf("%d %d", &h, &w);
	
	board = (int **)calloc(h, sizeof(int *));
	for(i = 0;i < h;i++)
	{
		board[i] = (int *)calloc(w, sizeof(int));
	}
	
	scanf("%d", &n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		x--;
		y--;
		
		switch(d)
		{
			case 0:
			for(j = 0;j < l;j++)
			{
				board[x][y + j] = 1;
			}
			break;
			
			default:
			for(j = 0;j < l;j++)
			{
				board[x + j][y] = 1;
			}
			break;
		}
	}
	
	for(i = 0;i < h;i++)
	{
		for(j = 0;j < w;j++)
		{
			printf("%d", board[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	for(i = 0;i < h;i++)
	{
		free(board[i]);
	}
	free(board);
	
	return 0;
}