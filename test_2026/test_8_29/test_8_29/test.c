#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的是0");
//	else if (num >= 0)
//		printf("输入的是正数");
//	else
//		printf("输入的是负数");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <= 18)
//		printf("青年\n");
//	else if (age <= 45)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//if (3 == a)
//	//	printf("hehe");
//	//else
//	//	printf("haha");
//
//	if (a >= 18 && a <= 45)
//		printf("right");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d", &a);
//	//b = (a > 5 ? 5 : -5);
//	//printf("%d\n", b);
//	scanf("%d %d", &a, &b);
//	int max = (a > b ? a : b);
//	printf("%d\n", max);
//	//逗号表达式,会从左向右依次计算,整个表达式的结果会取最后一个表达式的结果
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)//当flag为假时,!flag为真
//		printf("jeje");
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = ++a && ++b && d++;
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}