#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Init_chess(char chess[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{ 
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			chess[i][j] = set;
		}
	}
}

void Print_chess(char Chess[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf(" %c", Chess[i][j]);
		}
		printf("\n");
	}
}

void Set_mine(char chess[ROWS][COLS], int row, int col,int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (chess[x][y] == '0')
		{
			chess[x][y] = '1';
			count--;
		}
	}
}

int Get_mine_count(char chess[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			count += chess[i][j] - '0';
		}
	}
	return count;
}



void Find_mine(char Chess_in[ROWS][COLS], char Chess_out[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win <= row * col - easy_count)
	{
		printf("请输入坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Chess_in[x][y] == '1')
			{
				printf("踩到雷了,游戏结束\n");
				Print_chess(Chess_in, ROW, COL);
				break;
			}
			else
			{
				int count = Get_mine_count(Chess_in, x, y);
				Chess_out[x][y] = count + '0';
				Print_chess(Chess_out, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入错误,请重新输入\n");
		}
	}
	if (win == row * col - easy_count)
	{
		printf("恭喜你扫雷成功\n");
	}

}