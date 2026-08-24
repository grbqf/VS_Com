#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define row 9
#define col 9
#define rows row+2
#define cols col+2
#define easy_count 10


//创建棋盘
void Init_chess(char arr[rows][cols], int Row, int Col, int set);


//打印棋盘
void Print_chess(char arr[rows][cols], int Row, int Col);


//布置雷
void Set_mine(char arr[rows][cols], int Row, int Col);


//排查雷
void Find_mine(char in[rows][cols], char out[rows][cols], int Row, int Col);


// 展开空白区域
void Expand_blank(char in[rows][cols], char out[rows][cols], int x, int y, int* win);