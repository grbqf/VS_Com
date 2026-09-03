#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
//	printf("arr       = %p\n", arr);
//	printf("arr+1     = %p\n", arr + 1);
//	printf("&arr      = %p\n", &arr);
//	printf("&arr+1    = %p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; ++i)
//	{
//		scanf("%d", (p + i));//p + i == arr + i == &arr[i]
//	}
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", p[i]);//*(p + i) == *(arr + i) == arr[i]
//	}//[]下标引用操作符
//	return 0;
//}

//void Bubble_stor(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//假设已经有序
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_stor(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,4,5,6 };
//	int arr3[] = { 1,2,3,4,5,6 };
//	int* arr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int main()
//{
//	//int* p1[10];//指针数组
//	//int (*p2)[10];//数组指针,p2是指针,指向的是一个数组
//
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int (*p2)[10] = &arr;//&arr代表的是整个数组的地址,arr代表的是数组首元素的地址,
//	//去掉名字就是 类型 int (*)[10]
//	//arr + 1 != &arr + 1 ,,, &arr + 1跳过整个数组
//	return 0;
//
//}

//void Print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6 ,3,4,5,6,7 };
//	Print(arr, 3, 5);
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = add(a, b);
//	int (*p1)(int, int) = &add;
//	int d = (*p1)(a, b);
//	int e = p1(a, b);
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
// 
//void menu()
//{
//	printf("*************************\n");
//	printf("    1:add      2:sub    \n");
//	printf("    3:mul      4:div \n");
//	printf("         0:exit \n");
//	printf("*************************\n");
//	printf("请选择：");
//}
//
//int main()
//{
//	int x, y;
//	int input = 0;
//	int (*Pf[5])(int, int) = { 0, add,sub,mul,div };
//	int ret = 0;
//	do 
//	{
//		menu();
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作做数 :");
//			scanf("%d %d", &x, &y);
//			ret = Pf[input](x, y);
//			printf("结果是   %d \n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器");
//		}
//		else
//		{
//			printf("输入错误");
//		}
//	} while (input);
//
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
#include<stdbool.h>

void Print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", *(arr + i));
	}
}
int compar(const void* p1, const void* p2)
{
	//if (*(int*)p1 > *(int*)p2)
	//	return 1;
	//else if (*(int*)p1 == *(int*)p2)
	//	return 0;
	//else 
	//	return -1;
	return *(int*)p1 - *(int*)p2;
}

void test()
{
	int arr[10] = { 3,6,4,0,1,9,7,2,8,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compar);
	Print(arr, sz);
}

int main()
{
	test();
	return 0;
} 