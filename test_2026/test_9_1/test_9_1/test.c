#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0x11223344;
//	}
//	//for ()
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 3;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	printf("hehe\n");
////	main();
//	return 0;
//}

//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//	num = Fact(n);
//	printf("%d", num);
//	return 0;
//}
//123 12 1
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 3;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//long long int Fib(long long int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	long long int n = 0;
//	scanf("%lld", &n);
//	long long int num = Fib(n);
//	printf("%lld ", num);
//	return 0;
//}

//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d\n", num);
//	return 0;
//}

////尾递归辅助函数
//int FibTail(int n, int a, int b)
//{
//    if (n == 1)
//    {
//        return a;
//    }
//    return FibTail(n - 1, b, a + b);
//}
//
////对外接口
//int Fib(int n)
//{
//    if (n <= 0)
//        return -1; //非法输入标记
//    return FibTail(n, 1, 1);
//}
//
//int main()
//{
//    printf("%d\n", Fib(5)); //5
//    printf("%d\n", Fib(3)); //2
//    printf("%d\n", Fib(2)); //1
//    return 0;
//}

//int main()
//{
//	printf("%d\n", 0157);
//	printf("%d\n", 0x111);
//	return 0;
//}
//十进制转16进制,先把10进制转换成2进制,再转换成16进制


//int main()
//{
//	int a = 1;
//	int b = 0;
//	//b = a << 2;
//	//printf("%d", b);//左移一位相当于乘2
//	//b = a >> 1;
//	a >>= 1;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = -2;
//	int c = a & b;
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//00000011
//	//00000000
//	printf("%d %d", a, b);
//	return 0;
//}
//int count = 0;
//int test(int n)
//{
//	
//	if (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		return test(n / 2);
//	}
//	else
//		return 0;
//}	


//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a); 
//	int i = 0;
//	int count = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (a & 1 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	a >>= 1;
//	//}
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);
//	return 0;
//}

//a = get_val();
//count_val(a);
//while (a > 0)
//{
//	//业务处理
//	a = get_val();
//	count_val(a);
//}
//如果使?逗号表达式，改写：
//while (a = get_val(), count_val(a), a > 0)
//{
//	//业务处理
//}