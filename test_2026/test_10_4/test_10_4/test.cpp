#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;

//class A
//{
//public:
//	A (int a1, int a2)	
//		:_a1(a1)
//		,_a2(a2)
//	{}
//	A(const A& aa)
//	{
//		_a1 = aa._a1;
//	}
//	void print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a1;
//	int _a2;
//};

//class Time
//{
//public:
//	Time(int hour  = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:    //  缺省参数
//	Date(int year=2026, int month =1, int day =1)
//		//定义
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		//, _n(1)//相当于成员变量的初始化定义,所以是给const修饰的变量初始化的地方
//		//, _rx(x)//引用和const都必须在这初始化
//		//, _T()
//	{}
//	void print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//private:
//	//声明     缺省值->给初始化列表使用的
//	int _year = 2021;
//	int _month = 1;
//	int _day = 1;
//	//必须在初始化列表初始化
//	//const int _n = 1;
//	////int& _rx;
//	//Time _T = 1;
//};
//int main()
//{
//	//A aa1(1);
//	Date d1;
//	d1.print();
//	return 0;
//}

//
//class A
//{
//public:
//	A()
//	{
//		++_scount;
//	}
//	A(const A& t)
//	{
//		++_scount;
//	}
//	~A()
//	{
//		--_scount;
//	}
//	static int GetACount()//静态成员函数只能访问静态成员变量
//	{
//		return _scount;
//	}
//private:
//	// 类里声明
//	static int _scount;
//};
////类外初始化
//int A::_scount = 0;
// 
//int main()
//{
//	//cout << A::_scount << endl;
//	//cout << sizeof(A) << endl;
//	A a1;
//	{
//		A a2, a3;
//		cout << A::GetACount() << endl;
//
//	}
//	cout << A::GetACount() << endl;
//	return 0;
//}
//
//class A
//{
//	// 友元声明
//	friend class B;
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//class B
//{
//public:
//	void func(const A& aa)
//	{
//		cout << aa._a1 << endl;
//		cout << _b1 << endl;
//	}
//private:
//	int _b1 = 3;
//	int _b2 = 4;
//};
//int main()
//{
//	A aa;
//	B bb;
//	bb.func(aa);
//	return 0;
//}

//class A
//{
//private:
//	static int _k;
//	int _h = 1;
//public:
//	class B // B默认就是A的友元
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << _k << endl; //OK
//			cout << a._h << endl; //OK
//		}
//	private:
//		int _b1;
//	};
//};
//
//int A::_k = 0;
//
//int main()
//{
//	A aa;
//	A::B bb;
//	bb.foo(aa);
//	return 0;
//}
//

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//...
//		return n;
//	}
//};
//
//int main()
//{
//	A a1;
//	//A();
//	Solution s1;
//	cout << s1.Sum_Solution(10) << endl;
//	cout << Solution().Sum_Solution(10) << endl;
//	int a[10] = { 9 ,8,7,6,5,4,3,2,1,0 };
//	sort(a, a + 10);
//	return 1;
//}

//
//class A
//{
//public:
//	A(int a = 0)
//		:_a1(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		:_a1(aa._a1)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		if (this != &aa)
//		{
//			_a1 = aa._a1;
//		}
//		return *this;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//
//		int _a1 = 1;
//};
//void f1(A aa)
//{}
//A f2()
//{
//	A aa;
//	return aa;
//}


int main()
{
	int* p1 = new int;
	int* p2 = new int[10];

	delete p1;
	delete[] p2;


	int* p3 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* p4 = new int(1);
	delete[] p3;
	delete p4;
	return 0;
}