#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<math.h>

//int main()
//{
//	size_t;
//	signed;
//	unsigned; //unsigned int %u      unsigned long %lu    unsigned long long %llu
//
//	printf("%zd\n", sizeof(int));
//	printf("%llu\n", sizeof(int));
//
//	unsigned int a = -10;
//	printf("%u\n", a);
//	int b = -10;
//	printf("%u\n", b);
//	unsigned int c = 10;
//	printf("%d\n", c);
//	return 0;
//}


//int Sup; //全局变量不初始化默认是0
//
//int main()
//{
//	Sup = pow(2, 3);
//	printf("%d\n", Sup);
//	int a = 0;
//	printf("%f\n", 6 / 4);//整数除以整数还是整数
//	printf("%f\n", 6.0 / 4);
//
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//	return 0;
//}


#include <stdio.h>
int main()
{
	printf("%d\n", 11 % -5); // 1
	printf("%d\n", -11 % -5); // -1
	printf("%d\n", -11 % 5); // -1
	//负数求模的规则是，结果的正负号由第⼀个运算数的正负号决定

	//int a = 100;//初始化
	//a = 200;//赋值，这⾥使⽤的就是赋值操作符

	int a = 3;
	int b = 5;
	int c = 0;
	c = b = a + 3;//连续赋值，从右向左依次赋值的。

	int x = 3;
	x += 3;
	printf("%d\n", x);

	return 0;
	
}