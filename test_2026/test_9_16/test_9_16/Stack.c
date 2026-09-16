#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void STInit(ST* pst)
{
	assert(pst);
	pst->arr = NULL;
	pst->top = pst->Capacity = 0;
}

void STDistory(ST* pst)
{
	assert(pst);
	free(pst->arr);
	pst->arr = NULL;
	pst->top = pst->Capacity = 0;
}

void STPhush(ST* pst, STDataType x)
{
	assert(pst);
	if (pst->top == pst->Capacity)
	{
		int newcapacity = (pst->Capacity == 0) ? 4 : pst->Capacity * 2;
		STDataType* tmp = (STDataType*)realloc(pst->arr, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		pst->arr = tmp;
		pst->Capacity = newcapacity;
	}
	pst->arr[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst)
{
	assert(pst);
	assert(pst->top > 0);
	pst->top--;
}

STDataType STTop(ST* pst)
{
	assert(pst);
	assert(pst->top > 0);
	return pst->arr[pst->top - 1];
}

bool STEmpty(ST* pst)
{
	assert(pst);
	return pst->top == 0;
}

int STSize(ST* pst)
{
	assert(pst);
	return pst->top;
}