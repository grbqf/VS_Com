#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqLIst.h"

//void SLtest()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(sl);
//	SLPushFront(&sl, 4);
//	SLPushFront(&sl, 3);
//	SLPushFront(&sl, 2);
//	SLPushFront(&sl, 1);
//	SLPrint(sl);
//	SLDestory(&sl);
//}

//void SLtest()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLInsert(&sl, 1, 99);
//	SLPrint(sl);
//	SLErase(&sl, 2);
//	SLPrint(sl);
//	SLDestory(&sl);
//}
//
//void ContactTest()
//{
//	Contact con;
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//	ContactDestory(&con);
//}
//
//int main()
//{
//	//SLtest();
//	ContactTest();
//	return 0;
//}

void menu()
{
	printf("=====================================\n");
	printf("         通 讯 录 管 理 系 统\n");
	printf("=====================================\n");
	printf("  1. 增加联系人     2. 删除联系人\n");
	printf("  3. 修改联系人     4. 查找联系人\n");
	printf("  5. 展示所有联系人 0. 退出程序\n");
	printf("=====================================\n");
	printf("           请输入你的选择：");
}


int main()
{
	Contact con;
	ContactInit(&con);

	int op = -1;
	do{
		menu();
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("退出通讯录...");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}

	} while (op);
	
	ContactDestory(&con);
	return 0;
}