#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

int main()
{
	SLTNode* Plist = NULL;//起始节点
	SLTPushBack(&Plist, 1);
	SLTPushBack(&Plist, 2);
	SLTPushBack(&Plist, 3);
	SLTPushBack(&Plist, 4);
	SLTPushBack(&Plist, 5);
	//SLTPushFront(&Plist, 1);
	//SLTPrint(Plist);
	//SLTPopBack(&Plist);
	//SLTPrint(Plist);
	//SLTPopBack(&Plist);
	//SLTPrint(Plist);
	//SLTPopBack(&Plist);
	//SLTPrint(Plist);
	SLTNode* find = SLTFind(Plist, 4);
	//SLTInsert(&Plist, find, 99);
	SLTInsertAfter(find, 99);
	SLTPrint(Plist);
	return 0;
}