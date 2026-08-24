#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int pay = 0, count = 0, num = 0;
//	scanf("%d", &pay);
//	while (pay--)
//	{
//		if (count == 2)
//		{
//			pay++;
//			count = 0;
//		}
//		count++;
//		num++;
//	}
//
//	printf("%d\n", num);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	for (int i = 1; i < 2 * num; i++)
//	{
//		for (int j = 1; j < 2 * num; j++)
//		{
//			if (abs(i - num) + abs(j - num) <= num - 1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//   * 
//  ***
//   *
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int num = i;
//		int count = 0;
//		
//		if (num == 0)
//			count = 1;
//		else
//		{
//			while (num)
//			{
//				num /= 10;
//				count++;
//			}
//		}
//		num = i;
//		int sum = 0;
//
//		while (num)
//		{
//			int digit = num % 10;
//			sum += (int)pow((double)digit, (double)count);
//			num /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//		
//	}
//	return 0;
//}
//
//
//

#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	int a = 0;
	scanf("%d", &a);
	num = a;
	for (int i = 0; i < 5; i++)
	{
		sum += num;
		num = num * 10 + a;
	}
	printf("%d", sum);
	return 0;
}


//2 22 222 2222








