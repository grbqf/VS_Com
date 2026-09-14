#define _CRT_SECURE_NO_WARNINGS 1
#include"Snake.h"

void test()
{
	int ch = 0;
	do {
		system("cls");
		//创建蛇信息
		SnakeInfo Snake = { 0 };
		//初始化游戏
		GameStart(&Snake);

		//运行游戏
		GameRun(&Snake);

		//结束游戏

		GameEnd(&Snake);
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		SetPos(20, 15);

		printf("再来一句吗 (Y/N)");
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'Y' || ch == 'y');
	SetPos(0, 26);

}

int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();
	return 0;
}