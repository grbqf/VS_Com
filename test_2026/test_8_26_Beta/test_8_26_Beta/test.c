#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//int main()
//{
//	
//	printf("%c\n", '\141');
//	printf("%c", '\x30');
//	return 0;
//}

//int main()
//{
//	int len = strlen("1324qewr");
//	printf("%d\n", len);
//	int len1 = strlen("c:\test\deta\113.c");//一个转义字符算1单位
//	printf("%d\n", len1);
//	char arr[] = "c:\test\deta\113.c";
//	printf("%d\n", strlen(arr));
//	printf("%s", arr);
//	return 0;
//}

int main()
{
	char;
	int;
	short;
	long;
	signed int;
	unsigned int;
	float;
	double;
	long double;
	_Bool;//只有0是假 -1也是真  stdbool.h
	bool;
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));
	printf("%zd\n", sizeof(_Bool));
	int a = 8;
	short b = 5;
	printf("%zd\n", sizeof(a = a + b));
	printf("%d\n", a);
	
	return 0;
}