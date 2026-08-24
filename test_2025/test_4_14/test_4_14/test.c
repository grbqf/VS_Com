#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int FBNQ(int n)
//{
//	if (n == 0)
//		return 0;
//	if (n == 1 || n == 2)
//		return 1;
//
//	return FBNQ(n - 1) + FBNQ(n - 2);
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = FBNQ(num);
//	printf("%d", ret);
//	return 0;
//}


//int Square(int n)
//{
//	if (n == 0)
//		return 0;
//	else
//		return Square(n - 1) + 2 * n - 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", Square(num));
//	return 0;
//}

//int Digitsum(int n)
//{
//	if (n < 10)
//		return n;
//	return Digitsum(n / 10) + Digitsum(n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", Digitsum(num));
//	return 0;
//}	



//int Rec_fac(int n)
//{
//	if (n == 1)
//		return 1;
//	return n * Rec_fac(n - 1);
//}
//
//int Fac(int n)
//{
//	int sum = 1;
//	while (n)
//	{
//		sum *= n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//printf("%d\n", Rec_fac(num));
//	printf("%d\n", Fac(num));
//	return 0;
//}


void Print(int n)
{
	if (n <= 9)
		printf("%d ", n);
	else
	{
		Print(n / 10);
		printf("%d ", n % 10);
	}

}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Print(num);
	return 0;
}

