#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct std
	{
		char name[20];
		char ID[10];
		int point[6];
		int age;
	}a2;

struct std a1;

int main()
{
	//int a = 1;
	//int b = 0;
	//float f = 1.333333f;
	////浮点数无法在c语言中精确保存
	//printf("%f\n", f);
	struct std a3; 
	struct std a4 = { "fuck","7708117",1,2,3,4,5,6,21 };
	printf("%d", a4.age);
	

	return 0;
}