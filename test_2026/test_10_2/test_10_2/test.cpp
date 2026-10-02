#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//inline int ADD(int a, int b)
//{
//	int ret = a + b;
//	return ret;
//}
//
//void Fuc(int x)
//{
//	cout << "Fuc(int x)" << endl;
//}
//
//void Fuc(int* x)
//{
//	cout << "Fuc(int* x)" << endl;
//}
//int main()
//{
//	//int ret = ADD(1, 2);
//	//cout << ret << endl;
//
//	//void* ptr1 = NULL;
//	//int* ptr2 = (int*)ptr1;
//
//	//int* p1 = nullptr;
//
//	Fuc(0);
//	Fuc(nullptr);
//	return 0;
//}


#include<iostream>
using namespace std;

class Stack
{
public:
	void Push();
//public:
	void Pop()
	{}
	int Top()
	{
		return 0;
	}
private:
	int* arr;
	int top;
	int capacity;
};

class Date
{
public:
	//无参构造函数
	//Date()
	//{
	//	_year = 2023;
	//	_month = 1;
	//	_day = 1;
	//}
	//有参构造函数
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	//全缺省构造函数
	Date(int year = 2023, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	//析构函数
	~Date()
	{
		cout << "析构函数执行" << endl;
	}
	//运算符重载函数
	bool operator==(Date d2)
	{
		return _year == d2._year &&
			_month == d2._month &&
			_day == d2._day;
	}
private:
	int _year;
	int _month;
	int _day;
};

//void Date::Init(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}

int main()
{
	//Stack st;
	//st.Pop();
	//st.Top();
	Date d1;
	Date d2(2021, 11, 11);
	Date d3(2024);
	//d1.Init(2020, 10, 10);
	d1.print();
	//d2.Init(2021, 11, 11);
	d2.print();
	d3.print();
	d2.operator==(d2);
	d1 == d2;
	return 0;
}

//class A
//{
//public:
//	A() { cout << "A的构造执行" << endl; }
//};
//class B
//{	
//	B()
//		: a()   //?【初始化列表阶段，隐式插入】调用A()；x这里什么也不写！
//	{
//		// ?函数体，里面是空！没有任何代码！
//	}
//	A a;
//	int x;
//};
////没有手写B构造，编译器合成 B() {}

