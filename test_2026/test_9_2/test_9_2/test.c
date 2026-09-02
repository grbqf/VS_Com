#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct tag
//{
//	member - list;
//}variable - list;
//
//struct student
//{
//	char name[20];
//	int hight;
//	char id[10];
//}s1, s2;//s1 s2 全局变量
//
//struct A
//{
//	int n;
//};
//
//struct B
//{
//	struct A a; 
//}b = { {1} };
//
//int main()
//{
//	//struct student s3;
//	//struct student s1 = { "刘文德", 180, "1234354" };
//	//struct student s2 = { .hight = 20, .name = "库里", .id = "123123" };
//	//printf("%s %d %s", s1.name, s1.hight, s1.id);
//	printf("%d", b.a.n);
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	*pa = 1;
//	printf("%d", a);
//	return 0;
//}
//
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	//int* p = &arr[0];
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	char arr[10] = { 0 };
//	printf("%zd", &arr[9] - &arr[0]);//两个指针指向同一块空间
//	return 0;
//}

//int My_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count++;
//}
//
//int main()
//{
//	char arr[] = "qewrtyui";
//	int len = My_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
#define NDUBUG
#include<assert.h>

int main()
{
	//assert(1);
	int a = 10;
	int* p = &a;
	assert(p != NULL);
	return 0;
}