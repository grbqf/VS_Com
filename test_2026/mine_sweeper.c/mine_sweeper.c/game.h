#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define easy_count 10

//初始化棋盘
void Init_chess();

//打印棋盘
void Print_chess();

//布置雷
void Set_mine();

//排查雷
void Find_mine();

//递归展开空白
void Expand_blank();

//统计周围雷个数
int Get_mine_count();