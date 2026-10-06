#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;



//
//void test1()
//{
//	string s1;
//	string s2("hello world");
//	s2[0] = 'x';
//	cout << s2 << endl;
//	for (size_t i = 0; i < s2.size; i++)
//	{
//		cout << s2[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//int main()
//{
//    string s = "hello";
//
//    // 1.普通迭代器，可以读、可以修改字符
//    string::iterator it = s.begin();
//    // s.begin() 返回第一个字符迭代器
//    // s.end() 返回尾后哨兵（'\0'的下一个，不是有效字符）
//    while (it != s.end())
//    {
//        cout << *it << " ";
//        *it += 1;   // 修改字符
//        ++it;
//    }
//    cout << endl;
//
//
//    // 2.const_iterator：只读迭代器，不能修改，适合const string
//    const string s2 = "world";
//    string::const_iterator cit = s2.cbegin();
//    while (cit != s2.cend())
//    {
//        cout << *cit << " ";
//        // *cit = 'x'; // 报错！只读，无法修改
//        ++cit;
//    }
//    cout << endl;
//
//
//    //3.反向迭代器，倒着遍历string
//    string::reverse_iterator rit = s.rbegin();
//    while (rit != s.rend())
//    {
//        cout << *rit;
//        ++rit;   //?反向迭代器依旧写 ++，不要写 --
//    }
//    cout << endl;
//
//    return 0;
//}

void test1()
{
	string s1("hello world");

	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
	string::iterator it = s1.begin();
	while (s1.end() != it)
	{
		*it += 2;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//for (auto ch : s1)

	for (auto& ch : s1)
	{
		ch -= 2;
		cout << ch << " ";
	}
	cout << endl;

	int arr[] = { 1,2,3,4,5,6 };
	for (auto& a : arr)
	{
		a *= 2;
		cout << a << " ";
	}
}

void test2()
{
	string s1("hello world");
	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

void test3()
{
	const string s1("hello world");
	//string::const_iterator cit = s1.cbegin();
	auto cit = s1.cbegin();
	while (cit != s1.cend())
	{
		cout << *cit << " ";
		++cit;
	}
	cout << endl;

	const string s2("hello world");
	string::const_reverse_iterator rcit = s2.crbegin();
	//auto rcit = s1.crbegin();
	while (rcit != s2.crend())
	{
		cout << *rcit << " ";
		++rcit;
	}
	cout << endl;
}

void test4()
{
	string s1("hello world");
	cout << s1.size() << endl;
	cout << s1.length() << endl;

	cout << s1.capacity() << endl;

	s1.reserve(100);

	cout << s1.capacity() << endl;

	s1.clear();
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	cout << s1.empty() << endl;

	//reverse 反转
	//reserve 保留
}

void test5()
{
	string s1("hello world");
	s1.push_back(' ');
	s1.push_back('x');
	s1.append("xxxxxx");

	cout << s1 << endl;

	s1 += ' ';
	s1 += "xxxxxxxxxx";
	cout << s1 << endl;

	s1.insert(0, "shg ");
	cout << s1 << endl;

	char ch = 'x';
	s1.insert(0, 1, ch);
	cout << s1 << endl;


}


void test6()
{
	string s1("hello world");
	s1.erase(0, 1);
	cout << s1 << endl;
	s1.erase(9, 1);
	cout << s1 << endl;
	s1.erase(s1.begin());
	cout << s1 << endl;

	s1.erase(--s1.end());
	cout << s1 << endl;

	string s2("hello world");
	s2.erase(6);
	cout << s2 << endl;
	
	string s3("hello world");
	s3.replace(5, 1, "$$");
	cout << s3 << endl;
}
int main()
{
	test6();

	return 0;
}