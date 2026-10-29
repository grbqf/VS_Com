#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"

namespace shg
{
	void test1()
	{
		std::string s1("1111111111111");
		std::string s2(s1);
		printf("%p\n", s1.c_str());
		printf("%p\n", s2.c_str());
	}
}

int main()
{
	shg::test1();

}
