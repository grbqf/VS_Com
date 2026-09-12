#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
} LTNode;
//初始化
LTNode* LTInit();

//销毁双向链表
void LTDestroy(LTNode* phead);

//打印链表
void LTPrint(LTNode* phead);


bool LTEmpty(LTNode* phead);

//尾插
void LTPushBack(LTNode* phead, LTDataType x);

//尾删
void LTPopBack(LTNode* phead);

//头插
void LTPushFront(LTNode* phead, LTDataType x);

//头删
void LTPopFront(LTNode* phead);


//在pos位置之后插?数据
void LTInsert(LTNode* pos, LTDataType x);

//删除pos位置的数据
void LTErase(LTNode* pos);

//查找数据
LTNode* LTFind(LTNode* phead, LTDataType x);
