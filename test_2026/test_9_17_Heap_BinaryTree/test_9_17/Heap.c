#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *b;
	*b = *a;
	*a = tmp;
}

// 堆的初始化
void HPInit(HP* php)
{
	php->arr = NULL;
	php->capacity = php->size = 0;
}

// 堆的销毁
void HPDestory(HP* php)
{
	assert(php);
	free(php);
	php->arr = NULL;
	php->capacity = php->size = 0;
}

void AdjustUp(HPDataType* arr, int chlid)
{
	assert(arr && chlid > 0);
	int parent = (chlid - 1) / 2;
	while (chlid > 0)
	{
		if (arr[parent] > arr[chlid])
		{
			Swap(&arr[parent], &arr[chlid]);
			chlid = parent;
			parent = (chlid - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


// 堆的插入
void HPPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* newnode = (HPDataType*)realloc(php->arr, newcapacity * sizeof(HPDataType));
		if (newnode == NULL)
		{
			perror("malloc fail");
			return;
		}
		php->arr = newnode;
		php->capacity = newcapacity;
	}
	php->arr[php->size] = x;
	php->size++;
	AdjustUp(php->arr, php->size - 1);
}

//向下调整
void AdjustDown(HPDataType* arr, int n, int parent)
{
	assert(arr);
	int chlid = parent * 2 + 1;

	while (chlid < n)
	{
		if (chlid + 1 < n && arr[chlid] > arr[chlid + 1])
		{
			chlid += 1;
		}
		if (arr[parent] > arr[chlid])
		{
			Swap(&arr[parent], &arr[chlid]);
			parent = chlid;
			chlid = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// 堆的删除
void HPPop(HP* php)
{
	assert(php && php->size > 0);
	Swap(&php->arr[0], &php->arr[php->size - 1]);
	php->size--;
	AdjustDown(php->arr, php->size, 0);

}

// 取堆顶的数据
HPDataType HPTop(HP* php)
{
	assert(php && php->size);
	return php->arr[0];
}

// 堆的数据个数
int HPSize(HP* php)
{
	assert(php);
	return php->size;
}

// 堆的判空
bool HPEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}