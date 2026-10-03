#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void test1()
{
	Date d1(2026, 10, 3);
	d1 += 100;
	d1.print();
}

void test2()
{
	Date d1(2023, 9, 1);
	Date d2(2026, 10, 3);
	d1.CheckDate();
	cout << d1;
	cout << d2 - d1 << endl;
	cin >> d1;
	d1.print();
}

int main()
{
	test2();

	return 0;
}