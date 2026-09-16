#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

int main()
{
	int begin = clock();
	int i = 0;
	for (i = 0; i < 1000000000; i++)
	{
		;
	}
	int end = clock();
	printf("%dms", end - begin);
	return 0;
}