#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdbool.h>

int main()
{
	_Bool a = 1;//ֻ�ܴ洢1\0
	bool b = false;
	bool c = true;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	printf("%zd\n", sizeof(_Bool));
	printf("%zd\n", sizeof(bool));
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof(b));
	printf("%zd\n", sizeof(c));
	
	float x = 6.0 / 4;
	printf("%f\n", x);

	
	return 0;
}