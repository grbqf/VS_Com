#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;

typedef struct HP
{
	HPDataType* arr;
	int size;
	int capacity;
}HP;

// 堆的初始化
void HPInit(HP* php);

// 堆的销毁
void HPDestory(HP* php);

// 堆的插入
void HPPush(HP* php, HPDataType x);

//向上调整
void AdjustUp(HPDataType* arr, int chlid);

//向下调整
void AdjustDown(HPDataType* arr, int parenr);

// 堆的删除
void HPPop(HP* php);

// 取堆顶的数据
HPDataType HPTop(HP* php);

// 堆的数据个数
int HPSize(HP* php);

// 堆的判空
bool HPEmpty(HP* php);
