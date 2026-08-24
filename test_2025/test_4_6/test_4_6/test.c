#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Print(int n)
{
	if (n > 9)
	{
		int c = n / 10;
		Print(c);
	}
	printf("%d ", n % 10);
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}