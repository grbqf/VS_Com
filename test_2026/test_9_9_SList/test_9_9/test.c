#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

int main()
{
	SLTNode* Plist = NULL;//起始节点
	SLTPushBack(&Plist, 1);
	SLTPushBack(&Plist, 2);
	SLTPushBack(&Plist, 3);
	SLTPushBack(&Plist, 4);
	//SLTPushFront(&Plist, 1);
	SLTPrint(Plist);
	SLTPopBack(&Plist);
	SLTPrint(Plist);
	SLTPopBack(&Plist);
	SLTPrint(Plist);
	SLTPopBack(&Plist);
	SLTPrint(Plist);

	return 0;
}