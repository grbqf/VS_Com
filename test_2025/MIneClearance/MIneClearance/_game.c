#define _CRT_SECURE_NO_WARNINGS 1

#include "_game.h"

void Init_chess(char arr[rows][cols], int Row, int Col, int set)
{
	int i = 0;
	for (i = 0; i < Row; i++)
	{
		int j = 0;
		for (j = 0; j <Col; j++)
		{
			arr[i][j] = set;
		}
	}
}

void Print_chess(char arr[rows][cols], int Row, int Col)
{
	int i = 0;
	printf("\n");
	for (i = 0; i <= Row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");

	for (i = 1; i <= Row; i++)
	{
		int j = 1;
		printf("%d",i);
		for (j = 1;j <= Col; j++)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Set_mine(char arr[rows][cols], int Row, int Col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

static int Sta_mine(char arr[rows][cols], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (arr[i][j] == '1')
				count++;
		}
	}
	return count;
}

void Expand_blank(char in[rows][cols], char out[rows][cols], int x, int y, int* win)
{
	// 检查边界条
	if (x < 1 || x > row || y < 1 || y > col || out[x][y] != '*')
		return;

	int count = Sta_mine(in, x, y);
	out[x][y] = count + '0';
	(*win)++;

	if (count == 0)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				// 递归调用展开空白区域
				Expand_blank(in, out, i, j, win);
			}
		}
	}
}

void Find_mine(char in[rows][cols], char out[rows][cols], int Row, int Col)
{
	int x = 0, y = 0, win = 0;
	while (Row * Col - win > easy_count)
	{
		printf("请输入坐标——>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//验证坐标是否正确
		{
			if (out[x][y] == '*')
			{
				if (in[x][y] == '1')
				{
					printf("很遗憾，你被炸死了！！！\n");
					Print_chess(in, row, col);
					break;
				}
				else
				{
					//统计周围雷的数量
					//int count = Sta_mine(in, x, y);
					//out[x][y] = count + '0';
					Expand_blank(in, out, x, y, &win);
					Print_chess(out, row, col);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查了\n");
			}
		}
		else
		{
			printf("坐标输入错误\n");
		}
	}
	if (win == Row * Col - easy_count)
	{
		printf("恭喜你，排雷完成！！！\n");
		Print_chess(in, row, col);
	}

	
}










