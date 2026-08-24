#pragma once

#define name_max 20
#define gender_max 10 
#define tel_max 20
#define addr_max 100
//定义联系人数据 结构
//姓名 性别 年龄 电话 地址
typedef struct personinfo
{
	char name[name_max];
	char gender[gender_max];
	int age;
	char tel[tel_max];
	char addr[addr_max];
}peoinfo;


//要用到顺序表相关的方法，对通讯录的操作实际就是对顺序表进行操作
//给顺序表改个名字，叫做通讯录
typedef struct seqlist contact; //sl
//通讯录相关的方法

//通讯录的初始化
void contactinit(contact* con);
//通讯录的销毁
void contactdestroy(contact* con);
//通讯录添加数据
void contactadd(contact* con);
//通讯录删除数据
void contactdel(contact* con);
//通讯录的修改
void contactmodify(contact* con);
//通讯录查找
void contactfind(contact* con);
//展示通讯录数据
void contactshow(contact* con);



