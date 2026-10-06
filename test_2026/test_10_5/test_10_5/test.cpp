#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;


//class Date
//{
//public:
//    //单参数构造函数：【转换构造函数】，允许隐式转换
//    Date(int year)
//        :_year(year)
//    {}
//private:
//    int _year;
//};
//
//int main()
//{
//    Date d1(2025);   //正常直接构造，没问题
//    Date d2 = 2025;  //?重点！隐式类型转换！
//    //等价于： Date tmp(2025); 再拷贝构造d2；（现代编译器会拷贝消除，直接构造）
//    //含义：用内置int(2025)，隐式转换成Date类临时对象，再赋值/初始化
//    return 0;
//}

//
//int main()
//{
//	int* p1 = new int;
//	int* p2 = new int(0);
//	int* p3 = new int[3];
//
//	delete p1;
//	delete p2;
//	delete[] p3;
//	return 0;
//}

//int main()
//{
//	try
//	{
//		void* p1 = new char[1024 * 1024 * 1024];
//		cout << p1 << endl;
//		void* p2 = new char[1024 * 1024 * 1024];
//		cout << p2 << endl;
//
//		void* p3 = new char[1024 * 1024 * 1024];
//		cout << p3 << endl;
//
//	}
//	catch(const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}
//
//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p1 = new A(1);
//	delete p1;
//
//	A* p2 = (A*)operator new(sizeof(A));
//	new(p2)A(1);
//
//	p2->~A();
//	operator delete(p2);
//	return 0;
//}

//template<class T>
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template<class T1, typename T2>
//void func(const T1& a, const T2& b)
//{
//
//}
//
//template<typename T>
//T Add(const T& a, const T& b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int i = 1, j = 2;
//	double m = 1.1, n = 2.2;
//	Swap(i, j);
//	Swap(m, n);
//	func(i, m);
//	cout << Add<int>(i, m) << endl;
//	return 0;
//}
//
//template<typename T>
//class Stack
//{
//public:
//	Stack(int n = 4)
//		:_a(new T[n])
//		, _size(0)
//		, _capacity(n)
//	{}
//	~Stack()
//	{
//		if (_a)
//		{
//			delete[] _a;
//			_a = nullptr;
//		}
//		_capacity = 0;
//		_size = 0;
//	}
//	void push(const T& x)
//	{
//		if (_size == _capacity)
//		{
//			T* tmp = new T[_capacity * 2];
//			memcpy(tmp, _a, sizeof(T) * _size);
//			delete[] _a;
//
//			_a = tmp;
//			_capacity *= 2;
//		}
//		_a[_size++] = x;
//	}
//private:
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};
//
//int main()
//{
//	Stack<int> st1;
//	st1.push(1);
//	st1.push(2);
//	st1.push(3);
//
//	Stack<double> st2;
//	st2.push(1.1);
//	st2.push(1.1);
//	st2.push(1.1);
//	st2.push(1.1);
//
//	return 0;
//}


int main()
{
	string s1;
	string s2("hello world");
	//string s3 = s2;
	string s3(s2);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	//cin >> s1;
	//cout << s1 << endl;

	string s4(s2, 6, 5);
	cout << s4 << endl;

	string s5(s2, 6);
	cout << s5 << endl;

	string s6("1234567890", 5);
	cout << s6 << endl;

	string s7(5, 'c');
	cout << s7 << endl;

	s6[0] = 'a';
	cout << s6 << endl;

	return 0;
}