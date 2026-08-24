#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a = 10;
	int* p = &a;
	int* pp = p;
	pp = NULL;
	return 0;
}