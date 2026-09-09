#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"Contact.h"
//#define N 100
//
////静态顺序表
//struct Seqlist
//{
//	int arr[N];
//	int size;
//};

//#define SLDataType int 

typedef struct PersonInfo SLDataType;

typedef struct Seqlist
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;//Contact

//初始化
void SLInit(SL* ps);

//销毁
void SLDestory(SL* ps);

//扩容
void SLCheckCapacity(SL* ps);

//打印
void SLPrint(SL s);

//尾插
void SLPushBack(SL* ps, SLDataType x);

//头插
void SLPushFront(SL* ps, SLDataType x);

//尾删
void SLPopBack(SL* ps);

//头删
void SLPopFront(SL* ps);

//指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x);

//指定位置删除
void SLErase(SL* ps, int pos);

//查找元素
int SLFind(SL* ps, SLDataType x);