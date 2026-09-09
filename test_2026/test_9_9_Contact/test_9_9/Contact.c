#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"
#include"SeqLIst.h"


//初始化通讯录
void ContactInit(Contact* con)
{
	SLInit(con);
}

//销毁通讯录
void ContactDestory(Contact* con)
{
	SLDestory(con);
}

//添加通讯录数据
void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入姓名\n");
	scanf("%s", info.name);

	printf("请输入性别\n");
	scanf("%s", info.sex);

	printf("请输入年龄\n");
	scanf("%d", &(info.age));

	printf("请输入号码\n");
	scanf("%s", info.tel);

	printf("请输入住址\n");
	scanf("%s", info.addr);

	SLPushBack(con, info);
}

int FindByName(Contact* con, const char* name)
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp((con->arr[i].name), name))
			return i;
	}
	return -1;
}

//删除通讯录数据
void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入你要删除的联系人姓名\n");
	scanf("%s", name);
	int pos = FindByName(con, name);
	if (pos < 0)
	{
		printf("没找到联系人姓名\n");
		return;
	}
	SLErase(con, pos);
	printf("删除成功\n");
}

//展示通讯录
void ContactShow(Contact* con)
{
	printf("姓名 性别 年龄 电话 住址\n");
	for (int i = 0; i < con->size; i++)
	{
		printf("%s   %s   %d   %s   %s  \n", 
			con->arr[i].name, 
			con->arr[i].sex, 
			con->arr[i].age, 
			con->arr[i].tel, 
			con->arr[i].addr  
		);
	}
}


//修改通讯录
void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入你要修改的联系人姓名\n");
	scanf("%s", name);
	int pos = FindByName(con, name);
	if (pos < 0)
	{
		printf("没找到联系人姓名\n");
		return;
	}
	printf("请输入你要修改的姓名\n");
	scanf("%s", con->arr[pos].name);
	printf("请输入你要修改的性别\n");
	scanf("%s", con->arr[pos].sex);
	printf("请输入你要修改的年龄\n");
	scanf("%d", &(con->arr[pos].age));
	printf("请输入你要修改的号码\n");
	scanf("%s", con->arr[pos].tel);
	printf("请输入你要修改的住址\n");
	scanf("%s", con->arr[pos].addr);
}


//查找通讯录
void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入你要查找的联系人姓名\n");
	scanf("%s", name);
	int pos = FindByName(con, name);
	if (pos < 0)
	{
		printf("没找到联系人姓名\n");
		return;
	}
	printf("姓名 性别 年龄 电话 住址\n");
	printf("%s   %s   %d   %s   %s  \n",
			con->arr[pos].name,
			con->arr[pos].sex,
			con->arr[pos].age,
			con->arr[pos].tel,
			con->arr[pos].addr
		);

}


