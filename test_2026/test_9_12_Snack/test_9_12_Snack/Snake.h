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
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode, * PSnakeNode;

//蛇
typedef struct SnakeInfo
{
	PSnakeNode pSnakeHead;//蛇头指针
	PSnakeNode pFood;//食物指针
	enum Direction dir;//方向
	enum GameStatus status;//状态
	int fScore;//食物分数
	int Score;//总分数
	int SleepTime;
}SnakeInfo, * PSnakeInfo;

//光标定位函数 SetPos
void SetPos(short x, short y);

//游戏初始化总控函数 GameStart
void GameStart(PSnakeInfo ps);

//欢迎界面函数 WelcomeToGame
void WelcomeToGame();

//绘制地图函数 CreateMap
void CreateMap();

//打印蛇
void PrintSnake(PSnakeNode ps);

//初始化蛇函数 InitSnake
void InitSnake(PSnakeInfo ps);

//创建食物函数 CreateFood
void CreateFood(PSnakeInfo ps);

//游戏运行函数 GameRun
void GameRun(PSnakeInfo ps);

//蛇移动函数 SnakeMove
void SnakeMove(PSnakeInfo ps);

//判断是否是食物函数 NextIsFood
int NextIsFood(PSnakeNode pn, PSnakeInfo ps);

//吃食物函数 EatFood
void EatFood(PSnakeNode pn, PSnakeInfo ps);

//没吃到食物函数 NoFood
void NoFood(PSnakeNode pn, PSnakeInfo ps);

//撞墙检测函数 KillByWall
void KillByWall(PSnakeInfo ps);

//撞自己检测函数 KillBySelf
void KillBySelf(PSnakeInfo ps);

//游戏结束善后函数 GameEnd
void GameEnd(PSnakeInfo ps);
