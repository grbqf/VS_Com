#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//char a = 128;
//	////10000000;
//	//printf("%u", a);
//	int a = 9;
//	float b = a;
//	printf("%f\n", b);
//	int A = 9;
//	float* B = &a;
//	printf("%f", B);
//	return 0;
//}

//struct Stu
//{
//    char name[20];//名字
//    int age;//年龄
//    char sex[5];//性别
//    char id[20];//学号
//};
//
//int main()
//{
//    //按照结构体成员的顺序初始化
//    struct Stu s = { "张三", 20, "男", "20230818001" };
//    printf("name: %s\n", s.name);
//    printf("age : %d\n", s.age);
//    printf("sex : %s\n", s.sex);
//    printf("id : %s\n", s.id);
//
//    //按照指定的顺序初始化【指定初始化器 C99特性】
//    struct Stu s2 = { .age = 18, .name = "lisi", .id = "20230818002", .sex = "女" };
//    printf("name: %s\n", s2.name);
//    printf("age : %d\n", s2.age);
//    printf("sex : %s\n", s2.sex);
//    printf("id : %s\n", s2.id);
//    return 0;
//}
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//printf("%d\n", sizeof(struct S1));
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//printf("%d\n", sizeof(struct S4));