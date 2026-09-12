#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

LTNode* LTBuyNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	node->data = x;
	node->next = node->prev = node;
	return node;
}

//初始化
//void LTInit(LTNode** pphead)
//{
//	//创建哨兵位
//	*pphead = LTBuyNode(-1);
//}
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}

//尾插
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->prev = phead->prev;
	newnode->next = phead;
	phead->prev->next = newnode;
	phead->prev = newnode;

	//LTNode* ptail = phead;
	//if (phead->next == phead)
	//{
	//	phead->next = phead->prev = newnode;
	//	newnode->next = newnode->prev = phead;
	//}
	//else
	//{
	//	while (ptail->next != phead)
	//	{
	//		ptail = ptail->next;
	//	}
	//	ptail->next = newnode;
	//	newnode->prev = ptail;
	//	phead->prev = newnode;
	//	newnode->next = phead;
	//}
}

//头插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	phead->next->prev = newnode;
	newnode->next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	//if (phead->next == phead)
	//{
	//	phead->next = phead->prev = newnode;
	//	newnode->next = newnode->prev = phead;
	//}
	//else
	//{
	//	LTNode* pfirst = phead->next;
	//	phead->next = newnode;
	//	newnode->prev = phead;
	//	newnode->next = pfirst;
	//	pfirst->prev = newnode;
	//}
}

//打印链表
//void LTPrint(LTNode* phead)
//{
//	LTNode* pcur = phead->next;
//	while (pcur != phead)
//	{
//		printf("%d<->", pcur->data);
//		pcur = pcur->next;
//	}
//	printf("\n");
//}
void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	printf("哨兵<->");
	if (pcur == phead)
	{
		printf("哨兵\n");
		return;
	}
	while (pcur->next != phead)
	{
		printf("%d<->", pcur->data);
		pcur = pcur->next;
	}
	printf("%d<->哨兵\n", pcur->data);
}


bool LTEmpty(LTNode* phead);

//尾删
void LTPopBack(LTNode* phead)
{
	assert(phead && phead->next != phead);
	LTNode* ptail = phead->prev;
	ptail->prev->next = ptail->next;
	phead->prev = ptail->prev;
	free(ptail);
	ptail = NULL;
}


//头删
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);
	LTNode* pfirst = phead->next;
	phead->next = pfirst->next;
	pfirst->next->prev = pfirst->prev;
	free(pfirst);
	pfirst = NULL;
}


//在pos位置之后插?数据
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);

	pos->next->prev = newnode;
	newnode->next = pos->next;
	pos->next = newnode;
	newnode->prev = pos;

	pos = NULL;
}

//删除pos位置的数据
void LTErase(LTNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}

//查找数据
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
			return pcur;
		pcur = pcur->next;
	}
	return NULL;
}

//销毁双向链表
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(phead);
	phead = NULL;
}