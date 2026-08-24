#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	for (int i = left, j = right; i <=j; i++, j--)
//	{
//		if ((arr[i] == key)||((arr[j] == key)))
//		{
//			return key;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int key = 10;
//	int num;
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	num = bin_search(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, key);
//	printf("%d", num);
//	return 0;
//}


//
//void Print_mul(int num)
//{
//	for (int i=1;i<=num;i++)
//	{
//		for (int j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d ", j, j, j * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	Print_mul(num);
//	return 0;
//}


//
//void Judg_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	Judg_leap_year(year);
//	return 0;
//}




int is_prime(int num)
{
	if (num <= 1)
		return 0;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;

}

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime(i))
			printf("%d  ", i);
	}
	return 0;
}

















