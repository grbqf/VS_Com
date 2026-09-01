#define _CRT_SECURE_NO_WARNINGS 1


//int add(int x, int y)//形式参数
//{
//	return x + y;
//}
//
//void print()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	char arr = "weqeqweqe";
//	int a = 0;
//	int b = 0;
//	//scanf("%d %d", &a, &b);
//	int ret = add(a, b);//实参,真实传递的参数
//	//printf("%d\n", ret);
//
//	print();
//	print(1);
//	return 0;
//}

//void set_arr(int arr2[10], int sz2)//数组传参传的是地址   &arr == &arr2
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//
//void print_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz1);//数组传参只需要传数组名
//	set_arr(arr, sz1);
//	print_arr(arr, sz1);
//	return 0;
//}

#include<stdbool.h>
#include<stdio.h>
//#include"day.h"

//_Bool Is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		return true;
//	else 
//		return false; 
//}
//
//int get_days(int year, int month)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[month];
//	if (month == 2 && Is_leap_year(year))
//	{
//		day++;
//	}
//	return day;
//}

//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int day = get_days(year, month);
//	printf("%d\n", day);
//	return 0;
//
//}


//int a = 10;//全局变量
//
//int main()
//{
//	int a = 10;
//	{
//		//int a = 10;
//		printf("%d", a);
//	}
//
//	printf("%d", a);
//	return 0;
//}

void test()
{
	static int n = 0;//static 修饰局部变量改变生命周期,单不改变作用域
	n++;
	printf("%d ", n);
}

extern int g_val;//声明外部符号
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}

//extern 和 static 作用于函数时和作用于变量时功能一样