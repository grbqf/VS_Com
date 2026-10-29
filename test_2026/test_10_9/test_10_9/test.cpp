#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;


void test1()
{
	vector<int> s1;
	vector<int> s2(10, 1);
	vector<int> s3(++s2.begin(), --s2.end());

	for (size_t i = 0; i < s3.size(); ++i)
	{
		cout << s3[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : s3)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test2()
{
	vector<int> v1(10, 1);
	v1.reserve(20);
	cout << v1.capacity() << endl;

	v1.push_back(2);
	v1.insert(v1.begin(), 3);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.insert(v1.begin() + 3, 10);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.clear();
	int x;
	cin >> x;
	v1.push_back(x);
}

void test3()
{
	vector<string> v1;
	string s1("1234567");
	v1.push_back(s1);
	v1.push_back("qwert");
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	vector<int> v(5, 1);
	vector<vector<int>> vv1(5, v);
	vv1[2][1] = 9;

	for (size_t i = 0; i < vv1.size(); ++i)
	{
		for (size_t j = 0; j < vv1[i].size(); ++j)
		{
			cout << vv1[i][j] << " ";
		}
		cout << endl;
	}
 }

int main()
{
	test3();

	return 0;
}