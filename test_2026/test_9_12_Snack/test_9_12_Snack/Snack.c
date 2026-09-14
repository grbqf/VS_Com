#define _CRT_SECURE_NO_WARNINGS 1
#include"Snack.h"

void SetPos(short x, short y)
{
	//获取标准输出流的句柄
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//COORD 是Windows API中定义的?个结构体，表??个字符在控制台屏幕幕缓冲区上的坐标，坐标系
	//(0，0) 的原点位于缓冲区的顶部左侧单元格。
	COORD pos = { x, y };

	//把光标放到指定位置
	SetConsoleCursorPosition(houtput, pos);
}
//打印蛇
void PrintSnack(PSnackNode ps)
{
	while (ps)
	{
		SetPos(ps->x, ps->y);
		wprintf(L"%lc", BODY);
		ps = ps->next;
	}
}

void CreateMap()
{
	int i = 0;
	//上墙
	for (i = 0; i < 58; i+=2)
	{
		wprintf(L"%lc",WALL);
	}
	//下墙
	SetPos(0, 26);
	for (i = 0; i < 58; i+=2)
	{
		wprintf(L"%lc", WALL);
	}
	//左墙
	for (i = 1; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);
	}
	//右墙
	for (i = 1; i < 26; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", WALL);
	}
}

void WelcomeToGame()
{
	SetPos(40, 14);
	wprintf(L"欢迎来到贪吃蛇");
	SetPos(40, 20);
	system("pause");
	system("cls");
	SetPos(30, 14);
	wprintf(L"? ↑ . ↓ . ← . → 分别控制蛇的移动， F3为加速，F4为减速");
	SetPos(40, 15);
	wprintf(L"加速将能得到更?的分数。");
	SetPos(40, 18);
	system("pause");
	system("cls");

}

void InitSnake(PSnackInfo ps)
{

	assert(ps);
	for (int i = 0; i < 5; i++)
	{
		PSnackNode newnode = (PSnackNode)malloc(sizeof(SnackNode));
		if (newnode == NULL)
		{
			perror("InitSnack malloc fail");
			return;
		}
		newnode->next = NULL;
		newnode->x = POS_X + i * 2;
		newnode->y = POS_Y;

		if (ps->pSnackHead == NULL)
		{
			ps->pSnackHead = newnode;
		}
		else
		{
			newnode->next = ps->pSnackHead;
			ps->pSnackHead = newnode;
		}
	}
	PSnackNode pcur = ps->pSnackHead;
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", BODY);
		pcur = pcur->next;
	}
	//PrintSnack(ps->pSnackHead);
	ps->dir = RIGHT;
	ps->status = Normal;
	ps->fScore = 10;
	ps->Score = 0;
	ps->SleepTime = 200;
}

void CreateFood(PSnackInfo ps)
{
	int x = 0;
	int y = 0;
	assert(ps);
again:
	do
	{
		x = rand() % 52 + 2;
		y = rand() % 25 + 1;
	}while(x % 2 == 1);

	PSnackNode pcur = ps->pSnackHead;
	while (pcur)
	{
		if (x == pcur->x && y == pcur->y)
		{
			goto again;
		}
		pcur = pcur->next;
	}

	PSnackNode newnode = (PSnackNode)malloc(sizeof(SnackNode));//创建食物
	if (newnode == NULL)
	{
		perror("CreateFood malloc fail");
	}
	else
	{
		newnode->x = x;
		newnode->y = y;
		newnode->next = NULL;
		SetPos(newnode->x, newnode->y);
		wprintf(L"%lc", FOOD);
		ps->pFood = newnode;
	}
}

void GameStart(PSnackInfo ps)
{
	//设置窗口大小,名称
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");

	//隐藏光标
	//获取句柄
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//定义光标信息结构体变量
	CONSOLE_CURSOR_INFO cursor_info = { 0 };
	//将获取的句柄信息放到结构体变量
	GetConsoleCursorInfo(houtput, &cursor_info);
	//设置光标信息
	cursor_info.bVisible = false;
	//将设置好的光标信息放到句柄中
	SetConsoleCursorInfo(houtput, &cursor_info);

	//打印菜单开始页面
	WelcomeToGame();
	//打印地图
	CreateMap();

	//创建蛇
	InitSnake(ps);

	//创建食物
	CreateFood(ps);
	//SetPos(70, 18);
	//system("pause");
}

void PrintHelpInfo()
{
	//打印提?信息
	SetPos(64, 12);
	printf("不能穿墙，不能咬到自己\n");
	SetPos(64, 13);
	printf("?↑.↓.←.→分别控制蛇的移动.");
	SetPos(64, 14);
	printf("F3 为加速，F4 为减速\n");
	SetPos(64, 15);
	printf("ESC ：退出游戏.space：暂停游戏.");
	SetPos(64, 20);
	printf("shg@版权");
}

void Pause()
{
	do {
		Sleep(300);
		if (KEY_PRESS(VK_SPACE))
			break;
	} while (1);
}

int NextIsFood(PSnackNode pn, PSnackInfo ps)
{
	return(pn->x == ps->pFood->x) && (pn->y == ps->pFood->y);
}

void EatFood(PSnackNode pn, PSnackInfo ps)
{
	pn->next = ps->pSnackHead;
	ps->pSnackHead = pn;
	PSnackNode pcur = ps->pSnackHead;
	while (pcur)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", BODY);
		pcur = pcur->next;
	}
	ps->Score += ps->fScore;
	free(ps->pFood);
	CreateFood(ps);
}

void NoFood(PSnackNode pn, PSnackInfo ps)
{
	pn->next = ps->pSnackHead;
	ps->pSnackHead = pn;
	PSnackNode pcur = ps->pSnackHead;
	while (pcur->next->next)
	{
		SetPos(pcur->x, pcur->y);
		wprintf(L"%lc", BODY);
		pcur = pcur->next;
	}
	SetPos(pcur->next->x, pcur->next->y);
	wprintf(L"  ");
	free(pcur->next);
	pcur->next = NULL;
}

void KillByWall(PSnackInfo ps)
{
	if (ps->pSnackHead->x == 0 || ps->pSnackHead->x == 56 ||
		ps->pSnackHead->y == 0 || ps->pSnackHead->y == 26)
	{
		ps->status = Kill_by_wall;
	}
}

void KillBySelf(PSnackInfo ps)
{
	PSnackNode pcur = ps->pSnackHead->next->next;
	while (pcur->next)
	{
		if (pcur->x == ps->pSnackHead->x && pcur->y == ps->pSnackHead->y)
		{
			ps->status = Kill_by_self;
			break;
		}
		pcur = pcur->next;
	}
}

void SnakeMove(PSnackInfo ps)
{
	PSnackNode newhead = (PSnackNode)malloc(sizeof(SnackNode));
	if (newhead == NULL)
	{
		perror("SnakeMove newhead malloc fail");
		return;
	}
	switch (ps->dir)
	{
	case UP:
		newhead->x = ps->pSnackHead->x;
		newhead->y = ps->pSnackHead->y - 1;
		break;
	case DOWN:
		newhead->x = ps->pSnackHead->x;
		newhead->y = ps->pSnackHead->y + 1;
		break;
	case LEFT:
		newhead->x = ps->pSnackHead->x - 2;
		newhead->y = ps->pSnackHead->y;
		break;
	case RIGHT:
		newhead->x = ps->pSnackHead->x + 2;
		newhead->y = ps->pSnackHead->y;
		break;
	}
	if (NextIsFood(newhead, ps))
	{
		EatFood(newhead, ps);
	}
	else
	{
		NoFood(newhead, ps);
	}
	KillByWall(ps);
	KillBySelf(ps);
}

void GameRun(PSnackInfo ps)
{
	PrintHelpInfo();
	do {
		SetPos(64, 10);
		printf("总分 = %d  ", ps->Score);
		printf("每个食物分数 = %d  ", ps->fScore);
		if (KEY_PRESS(VK_UP) && ps->dir != DOWN)
		{
			ps->dir = UP;
		}
		else if (KEY_PRESS(VK_DOWN) && ps->dir != UP)
		{
			ps->dir = DOWN;
		}
		else if (KEY_PRESS(VK_LEFT) && ps->dir != RIGHT)
		{
			ps->dir = LEFT;
		}
		else if (KEY_PRESS(VK_RIGHT) && ps->dir != LEFT)
		{
			ps->dir = RIGHT;
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->status = End_normal;
			break;
		}
		else if (KEY_PRESS(VK_SPACE))
		{			
			//暂停
			Pause();
		}
		else if (KEY_PRESS(VK_F3))
		{
			if (ps->SleepTime >= 80)
			{
				ps->SleepTime -= 80;
				ps->fScore += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			if (ps->SleepTime <= 320)
			{
				ps->SleepTime += 80;
				ps->fScore -= 2;
			}
		}
		Sleep(ps->SleepTime);
		SnakeMove(ps);

	} while (ps->status == Normal);

}
