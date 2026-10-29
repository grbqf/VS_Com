#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

void test1()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(1);
	lt.push_back(1);
	lt.push_back(1);

	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
	 
	string s("skdlajfals");
	cout << s << endl;
	sort(s.begin(), s.end());
	cout << s << endl;

}

void test2()
{
	list<int> lt;
	lt.push_back(1);
	lt.emplace_back(2);
	lt.emplace_back(3);
	lt.emplace_back(4);
	lt.emplace_back(5);

	list<int>::iterator it = lt.begin();
	lt.insert(it, 30);
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.sort();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	int x = 0;
	cin >> x;
	it = find(lt.begin(), lt.end(), x);
	if (it != lt.end())
	{
		lt.erase(it);
	}
	for (auto e : lt)
	{
		cout << e << " ";
	}
}

void test3()
{
	list<int> lt;
	lt.push_back(1);
	lt.emplace_back(2);
	lt.emplace_back(3);
	lt.emplace_back(4);
	lt.emplace_back(5);

	greater<int> gt;
	lt.sort(gt);
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//sort(lt.begin(), lt.end());
	//for (auto e : lt)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
}

int main()
{
	test3();
}