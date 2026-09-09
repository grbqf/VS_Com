#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqLIst.h"

//初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

//销毁
void SLDestory(SL* ps)
{
	assert(ps->arr);
	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
	}
	ps->capacity = ps->size = 0;
}
//打印
//void SLPrint(SL s)
//{
//	for (int i = 0; i < s.size; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	printf("\n");
//}

//扩容
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}

}

//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//指定位置删除
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//查找元素
//int SLFind(SL* ps, SLDataType x)
//{
//	assert(ps);
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->arr[i] == x)
//			return i;
//	}
//	return -1;
//}