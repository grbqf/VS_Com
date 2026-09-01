#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

_Bool Is_leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}

int get_days(int year, int month)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = days[month];
	if (month == 2 && Is_leap_year(year))
	{
		day++;
	}
	return day;
}

static int g_val = 10;//static 来修饰全局变量,使其变成只有内部链接属性的