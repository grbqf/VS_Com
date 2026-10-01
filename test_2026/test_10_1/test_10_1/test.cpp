#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//namespace shg
//{
//	int a = 10;
//}
//
////using namespace shg;
//
//using shg::a;
//
//int main()
//{
//	printf("%d", a);
//
//	return 0;
//}


#include<iostream>

using namespace std;

//int main()
//{
//	//int i = 1234;
//	//char a = 'w';
//	//double b = 1.1;
//	//cout << i << " " << a << endl;
//	//std::cout << i << " " << a << std::endl;
//	//cin >> a;
//	//cin >> i >> b;
//	//cout << i << " " << a << " " << b << endl;
//
//	printf("hello"); // 行缓冲stdout。没有换行！数据只留在缓冲区，屏幕暂时看不到！
//	Sleep(3000);
//	printf("\n");    // 遇到换行，flush，hello才打印出来
//
//	return 0;
//}

//void Func(int a, int b = 10, int c = 20)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//
//void Swap(int& a, int& b)
//{
//	int tmp = b;
//	b = a;
//	a = tmp;
//}
//
//int main()
//{
//	//Func(10, 20);
//	int a = 1, b = 0;
//	Swap(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}


int main()
{
	const int a = 10;
	const int& ra = a;

	int b = 20;
	const int& rb = b;

	const int& rc = 10;
	return 0;
}