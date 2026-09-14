#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
#include<locale.h>
#include<time.h>
#include<assert.h>
#define WALL L'□'
#define FOOD L'★'
#define BODY L'●'
#define POS_X 24
#define POS_Y 5
#define KEY_PRESS(VK)  (GetAsyncKeyState(VK)&1?1:0)

enum Direction
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};

enum GameStatus
{
	Normal = 1,
	Kill_by_wall,
	Kill_by_self,
	End_normal
};
//蛇节点--单链表
typedef struct SnackNode
{
	int x;
	int y;
	struct SnackNode* next;
}SnackNode, * PSnackNode;

//蛇
typedef struct SnackInfo
{
	PSnackNode pSnackHead;//蛇头指针
	PSnackNode pFood;//食物指针
	enum Direction dir;//方向
	enum GameStatus status;//状态
	int fScore;//食物分数
	int Score;//总分数
	int SleepTime;
}SnackInfo, * PSnackInfo;

//光标定位函数 SetPos
void SetPos(short x, short y);

//游戏初始化总控函数 GameStart
void GameStart(PSnackInfo ps);

//欢迎界面函数 WelcomeToGame
void WelcomeToGame();

//绘制地图函数 CreateMap
void CreateMap();

//打印蛇
void PrintSnack(PSnackNode ps);

//初始化蛇函数 InitSnake
void InitSnake(PSnackInfo ps);

//创建食物函数 CreateFood
void CreateFood(PSnackInfo ps);

//游戏运行函数 GameRun
void GameRun(PSnackInfo ps);

//蛇移动函数 SnakeMove
void SnakeMove(PSnackInfo ps);

//判断是否是食物函数 NextIsFood
int NextIsFood(PSnackNode pn, PSnackInfo ps);

//吃食物函数 EatFood
void EatFood(PSnackNode pn, PSnackInfo ps);

//没吃到食物函数 NoFood
void NoFood(PSnackNode pn, PSnackInfo ps);

//撞墙检测函数 KillByWall
void KillByWall(PSnackInfo ps);

//撞自己检测函数 KillBySelf
void KillBySelf(PSnackInfo ps);

//游戏结束善后函数 GameEnd
void GameEnd(PSnackInfo ps);
