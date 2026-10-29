#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> ls;
	ls.push_back(1);
	ls.push_back(2);
	ls.push_back(3);
	ls.push_back(4);
	list<int>::iterator it = ls.begin();
	it++;

	return 0;
}