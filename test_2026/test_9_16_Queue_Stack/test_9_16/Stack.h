#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* arr;
	int top;
	int Capacity;
}ST;

void STInit(ST* pst);

void STDistory(ST* pst);

void STPhush(ST* pst, STDataType x);

void STPop(ST* pst);

STDataType STTop(ST* pst);

bool STEmpty(ST* pst);

int STSize(ST* pst);