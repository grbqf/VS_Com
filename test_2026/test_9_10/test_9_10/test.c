#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void test()
{
	//LTNode* plist = NULL;
	//LTInit(&plist);//初始化创建哨兵位
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);
	LTNode* find = LTFind(plist,2);
	LTInsert(find, 99);
	LTPrint(plist);
	LTErase(find);
	find = NULL;//因为LTErase传的是一级指针,函数形参无法影响到实参,所以要手动置空
	LTPrint(plist);
	LTDestroy(plist);
	plist = NULL;
	LTPrint(plist);
}


int main()
{
	test();
	return 0;
}