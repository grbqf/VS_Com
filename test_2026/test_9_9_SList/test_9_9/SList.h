#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//¥Ú”°
void SLTPrint(SLTNode* phead);

//Õ∑≤Â
void SLTPushFront(SLTNode** pphead, SLTDataType x);

//Œ≤≤Â
void SLTPushBack(SLTNode** pphead, SLTDataType x);

//Õ∑…æ
void SLTPopBack(SLTNode** pphead);

//Œ≤…æ
void SLTPopBack(SLTNode** pphead);

//≤È’“
void SLTFind();