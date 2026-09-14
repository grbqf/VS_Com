#define _CRT_SECURE_NO_WARNINGS 1
#include"Snack.h"

void test()
{

	do {
		system("cls");
		//创建蛇信息
		SnackInfo Snack = { 0 };
		//初始化游戏
		GameStart(&Snack);

		//运行游戏
		GameRun(&Snack);
		getchar();
		//结束游戏


	} while (0);
}

int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();
	return 0;
}