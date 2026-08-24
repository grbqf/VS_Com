#define bool _Bool
#define false 0
#define true 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	unsigned int a;
	_Bool num = true;
	printf("%d\n", num);
	printf("%zd\n", sizeof(_Bool));
	printf("%d\n",INT_MAX);
	int s = (int)3.14;
	printf("%d\n", 'a');
	printf("%*.*f\n", 6, 2, 0.5);
	printf("%.5s\n", "hello world");

	goto pat;
	pat:
	printf("%d\n", rand());

	return 0;
}