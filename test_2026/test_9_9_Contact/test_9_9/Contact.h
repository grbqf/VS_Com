#pragma once
#define NAME_MAX 20
#define SEX_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 20

typedef struct Seqlist Contact;
//        SL --->  Contact
typedef struct PersonInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

//初始化通讯录
void ContactInit(Contact* con);

//销毁通讯录
void ContactDestory(Contact* con);

//添加通讯录数据
void ContactAdd(Contact* con);

//删除通讯录数据
void ContactDel(Contact* con);

//展示通讯录
void ContactShow(Contact* con);

//查找通讯录
void ContactFind(Contact* con);

//修改通讯录
void ContactModify(Contact* con);

