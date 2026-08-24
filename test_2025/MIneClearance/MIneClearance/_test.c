#define _CRT_SECURE_NO_WARNINGS 1
#include "_game.h"


void menu()
{
	printf("***********************\n");
	printf("******* 1 star ********\n");
	printf("******* 0 exit ********\n");
	printf("***********************\n");

}

void game()
{
	//完成扫雷游戏

	//Chess_in数组中存放布置好的雷的信息
	//数组全部初始化为'0'
	char Chess_in[rows][cols] = {0};

	//Chess_out数组中存放排查出的雷的信息
	//数组全部初始化为'*'
	char Chess_out[rows][cols] = {0};


	//初始化棋盘
	Init_chess(Chess_in, rows, cols, '0');
	Init_chess(Chess_out, rows, cols, '*');

	//布置雷
	//就9*9的棋盘上随机布置10个雷
	Set_mine(Chess_in, row, col);
	//Print_chess(Chess_in, row, col);

	//打印棋盘
	Print_chess(Chess_out, row, col);

	//排查雷
	Find_mine(Chess_in, Chess_out, row, col);
	

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//随机种子
	do
	{
		menu();
		printf("\n请输入——>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("游戏退出\n");
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
