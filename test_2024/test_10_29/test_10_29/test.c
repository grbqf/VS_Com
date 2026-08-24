#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
int main()
{
	unsigned int i;
	unsigned char a = 256;
	printf("%d\n", a);
	for (i = 9; i >= 0; i--) 
	{
		printf("%u\n", i);
		Sleep(500);
	}
		
	return 0;
}