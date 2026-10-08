#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

void test()
{
	string s1("12345");
	getline(cin, s1, ' ');
	size_t pos = s1.find(' ');
	cout << s1 << endl;
}

int main()
{
	test();
	return 0;
}