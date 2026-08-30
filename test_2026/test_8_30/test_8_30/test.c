#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdlib.h>

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)//必须是整型表达式,可以是字符
//	{
//	case 0://必须是整型常量,也可以是字符
//		printf("余数是0");
//		break;
//	case 1:
//		printf("余数是1");
//		break;
//	case 2:
//		printf("余数是2");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day % 7)
//	{
//	case 1:
//		printf("周一");
//		break;
//	case 2:
//		printf("周二");
//		break;
//	case 3:
//		printf("周三");
//		break;
//	case 4:
//		printf("周四");
//		break;
//	case 5:
//		printf("周五");
//		break;
//	case 6:
//		printf("周六");
//		break;
//	case 0:
//		printf("周日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day % 7)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 0:
//		printf("休息日");
//		break;
//	default://没有严格顺序
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; ++i)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; ++i)
//	{
//		if (i % 3 == 0)
//			n += i;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//			n += i;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//循环体必须执行一次
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	do
//	{
//		num /= 10;
//		++i;
//	} while (num > 0);//do while保证至少执行一次,eg 0是一位数,
//	printf("%d\n", i);
//
//	//continue;
//		//break;
//	return 0;
//}

//对方是否
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; ++i)
//	{
//		int j = 1;
//		int flag = 1;
//		for (j = 2; j < i; ++j)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//again:
//	printf("%d ", i);
//	i++;
//	goto again;
//	return 0;
//}

//#include<time.h>
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//
//	return 0;
//}

//
//void menu()
//{
//	printf("*********************\n");
//	printf("***输入 1 开始游戏***\n");
//	printf("***输入 0 退出游戏***\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int num = rand() % 100 +1;
//	//int num = 0;
//	int count = 6;
//	while (count)
//	{
//		printf("请输入你猜的数字: ");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了\n");
//			printf("还剩%d次机会\n", count-1);
//		}
//		else if (guess < num)
//		{
//			printf("猜小了\n");
//			printf("还剩%d次机会\n", count-1);
//		}
//		else
//		{
//			printf("猜对了,数字是%d", num);
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("次数用完,游戏失败,随机数是%d\n", num);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入: ");
//		scanf("%d", &input);//1 , 0
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//	//int data[10] = {0};//
//	//int data1[10] = { 1,2,3 };//不完全初始化
//	//char ch[10] = { 'a','b' };
//	//double arr[10];
//
//	int arr[10] = { 0 };
//	//printf("%d\n", arr[5]);
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int num = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//}

//int main()
//{
//	//int arr[3][5] = { 1,2,3 };//
//	//int arr5[][5] = { 1,2,3 };
//	//int arr6[][5] = { 1,2,3,4,5,6,7 };
//	//int arr7[][5] = { {1,2}, {3,4}, {5,6} };
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		scanf("%d", &arr[i][j]);
//	//	}
//	//}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		//printf("\n");
//	}
//
//}
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//int main()
//{
//	char arr1[] = "1234567789934";
//	char arr2[] = "*************";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(500);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int find = 1;
//	scanf("%d", &key);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//	if (1 == find)
//	{
//		printf("找到了,下标是%d\n", mid);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
#include<math.h>

int main()
{
	double ret = sqrt(100);
	printf("%4.2lf", ret);
	return 0;
}