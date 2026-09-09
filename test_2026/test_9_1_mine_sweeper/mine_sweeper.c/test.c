#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("********************\n");
	printf("*****  1 play  *****\n");
	printf("*****  0 exit  *****\n");
	printf("********************\n");
}

void game()
{
	char Chess_in[ROWS][COLS] = { 0 };
	char Chess_out[ROWS][COLS] = { 0 };

	//初始化棋盘
	Init_chess(Chess_in, ROWS, COLS, '0');
	Init_chess(Chess_out, ROWS, COLS, '*');

	//布置雷
	Set_mine(Chess_in, ROW, COL, easy_count);

	//打印棋盘
	//Print_chess(Chess_in, ROW, COL);
	Print_chess(Chess_out, ROW, COL);

	//排查雷
	Find_mine(Chess_in, Chess_out, ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择> \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("扫雷\n");
			game();
			break;
		case 0:
			printf("   游戏结束  \n");
			break;
		default :
			printf("输入错误,请重新输入\n");
			break;
		}
	}while(input);
	return 0;
}

int main()
{
	test();
	return 0;
}