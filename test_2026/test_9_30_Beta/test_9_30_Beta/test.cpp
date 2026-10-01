#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


//ÃüÃû¿Õ¼äÓò
namespace bit
{
	namespace s1
	{
		int rand = 1;
		int Add(int a, int b)
		{
			return a + b;
		}
	}

	namespace s2
	{
		int rand = 2;
		struct Node
		{
			int val;
			struct Node* next;
		};
	}


}

int a = 1;

int main()
{
	//cout << "hello world" << endl; 

	int a = 0;

	//printf("%d\n", a);
	//printf("%d\n", ::a);
	//printf("%p\n", rand);
	//printf("%d\n", bit::rand);
	//printf("%d\n", bit::Add(1, 1));
	printf("%d", bit::s1::rand);
	struct bit::s2::Node node = { .val = 10 , .next = NULL};

	return 0;
}


