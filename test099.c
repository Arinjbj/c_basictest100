#include <stdio.h>

#define MX 10
#define MY 10

int main()
{
	int maze[MX][MY], i, j, x, y;
	
	for(i = 0;i < MX;i++)
	{
		for(j = 0;j < MY;j++)
		{
			scanf("%d", &maze[i][j]);
		}
	}
	
	x = y = 1;
	while(1)
	{
		if(maze[x][y] == 2)
		{
			maze[x][y] = 9;
			break;
		}
		
		maze[x][y] = 9;
		
		if(maze[x][y + 1] != 1) y++;
		else if(maze[x + 1][y] != 1) x++;
		else break;
	}
	
	for(i = 0;i < MX;i++)
	{
		for(j = 0;j < MY;j++)
		{
			printf("%d", maze[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
