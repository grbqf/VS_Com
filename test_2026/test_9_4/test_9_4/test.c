#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_name(const void *p1, const void *p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int cmp_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//void Print_name(struct Stu *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%s  ", p->name);
//		p++;
//	}
//}
//
//void Print_age(struct Stu* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d  ", p->age);
//		p++;
//	}
//}
//
//void test()
//{
//	struct Stu arr[3] = { {"zhang", 20}, {"li", 10}, {"wang", 30} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_age);
//	Print_age(arr, sz);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; ++i)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "qwert";
//	char arr2[] = { 'a', 'b', 'c' };
//	int ret = strlen(arr2);//随机值,strlen只能求\0结尾的字符串的长度,别的不适应
//	printf("%d", ret);
//}

int main()
{
	int ret = islower('a');
	printf("%d ", ret);
	return 0;
}