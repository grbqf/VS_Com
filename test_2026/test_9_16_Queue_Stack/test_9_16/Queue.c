#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

// 初始化队列
void QueueInit(Queue* pq)
{
	pq->size = 0;
	pq->phead = pq->ptail = NULL;
}

// 队尾入队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->next = NULL;
	newnode->val = x;
	if (pq->phead == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size++;

}

// 队头出队列
void QueuePop(Queue* pq)
{
	assert(pq && pq->phead);
	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;
}

// 获取队列中有效元素个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

// 获取队列头部元素
QDataType QueueFront(Queue* pq)
{
	assert(pq && pq->phead);
	return pq->phead->val;
}

// 获取队列队尾元素
QDataType QueueBack(Queue* pq)
{
	assert(pq && pq->ptail);
	return pq->ptail->val;
}

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return (pq->size != 0);
}

// 销毁队列
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* pcur = pq->phead;
	while (pcur)
	{
		QNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}