#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int arr1[2][3] ;
	int i = 0;
	for (i = 0; i <= 40; i++)
	{
		printf("%s\n", strerror(i));
	}

	return 0;
}