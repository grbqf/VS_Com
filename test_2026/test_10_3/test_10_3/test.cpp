//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 2024, int month = 1, int day = 1)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day =  day;
//	}
//	void print()
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//	//拷贝构造函数
//	//Date(const Date& d)
//	//{
//	//	this->_year = d._year;
//	//	this->_month = d._month;
//	//	this->_day = d._day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void Fuc(Date& d)
//{
//	cout << "Fuc(Date& d)" << endl;
//	d.print();
//}
//
////int main()
////{
////	Date d1;
////	//拷贝构造新的类的对象
////	Date d2(d1);
////	//Fuc(d2);
////	d2.print();
////	d2.print();
////	return 0;
////}
//
//typedef int STDataType;
//
//class Stack
//{
//public:
//	//构造函数
//	Stack(int n = 4)
//	{
//		cout << "Stack" << endl;
//		_a = (STDataType *)malloc(sizeof(STDataType) * n);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	//拷贝构造
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//		this->_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//		if (this->_a == nullptr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		memcpy(this->_a, st._a, sizeof(STDataType) * st._capacity);
//		this->_capacity = st._capacity;
//		this->_top = st._top;
//	}
//	~Stack()
//	{
//		cout << "~Stack" << endl;
//		free(_a);
//		_a = nullptr;
//		_capacity = 0;
//		_top = 0;
//	}
//
//	//析构函数
//private:
//	STDataType* _a;
//	int _top;
//	int _capacity;
//};
////建议写成引用传参,不然会调用拷贝构造生成一大片新的空间
//Stack Fuc()
//{
//	Stack st;
//	return st;
//}
//
//int main()
//{
//	//Stack st1;
//	//Stack st2(st1);
//	//Stack st3 = st1;
//	Stack ret = Fuc();
//	return 0;
//}

//class A
//{
//public:
//	void func()
//	{
//		cout << "void func()" << endl;
//	}
//};
//
//typedef void (A::* PF)();
//
//int main()
//{
//	PF pf = nullptr;
//	pf = &A::func;
//
//	A aa;
//	(aa.*pf)();
//	return 0;
//}


//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test" << endl;
//	}
//	void Print(int x)
//	{
//		cout << "Print x = " << x << endl;
//	}
//};
//
////工具函数，接收【成员函数指针】，还要接收对象！成员函数必须要有对象才能调用
//void Tool(Test* obj, void (Test::* callback)(int))
//{
//	//通过成员函数指针完成回调！！ .* 或者 ->*
//	(obj->*callback)(100);  //这就是成员函数的回调调用
//}
//
//int main()
//{
//	Test t;
//	//取成员函数地址 &Test::Print
//	Tool(&t, &Test::Print);
//	return 0;
//}

//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//赋值运算符重载
//	//d1 = d2
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		return *this;
//	}
//
//	//运算符重载
//	bool operator==(const Date& d)
//	{
//		return this->_year == d._year
//			&& this->_month == d._month
//			&& this->_day == d._day;
//	}
//	//日期加天数
//	Date operator+(int day)
//	{
//
//	}
//	//日期减天数
//	Date operator-(int day)
//	{
//
//	}
//	//日期减日期
//	int operator-(const Date& d)
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 重载为全局的?临对象访问私有成员变量的问题
//// 有?种?法可以解决：
//// 1、成员放公有
//// 2、Date提供getxxx函数
//// 3、友元函数
//// 4、重载为成员函数
////bool operator==(const Date& d1, const Date& d2)
////{
////	return d1._year == d2._year
////		&& d1._month == d2._month
////		&& d1._day == d2._day;
////}
//int main()
//{
//	Date d1(2024, 7, 5);
//	Date d2(2024, 7, 6);
//
//	 // 运算符重载函数可以显?调?
//	d1.operator==(d2);
//	// 编译器会转换成 operator==(d1, d2);
//	d1 == d2;
//
//	//赋值重载拷贝,两个已经存在的对象,本质还是重载
//	d1 = d2;
//
//	//拷贝构造
//	Date d3(d2);
//	Date d4 = d1;
//	return 0;
//}

