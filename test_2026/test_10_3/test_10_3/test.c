//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////
//////回调函数：我写的代码
////void MyPrint(int num)
////{
////    printf("数字是：%d\n", num);
////}
////
//////这是工具函数，接收函数指针参数
////void ForEach(int arr[], int n, void(*callback)(int))
////{
////    for (int i = 0; i < n; i++)
////    {
////        //工具里面，回头调用传进来的函数，这就是回调！
////        callback(arr[i]);
////    }
////}
////
////int main()
////{
////    int array[] = { 1,2,3 };
////    int size = sizeof(array) / sizeof(array[0]);
////
////    //把MyPrint函数地址传给ForEach，注意这里没有写MyPrint()！没有直接调用！
////    ForEach(array, size, MyPrint);
////    return 0;
////}
////回调函数
//void A(int x)
//{
//	printf("A:%d\n", x);
//}
//
////参数p就是函数指针！用来接收回调函数地址
//void B(void (*p)(int))
//{
//	printf("B开始\n");
//	//p(100);   //? 通过【函数指针p】完成回调！！
//	(*p)(100);
//	printf("B结束\n");
//}
//
//typedef void (*FP)(int);
//
//int main()
//{
//	//void (*fp)(int) = A; //fp是函数指针变量，存A的地址
//	FP fp = A;
//	B(fp); //把函数指针fp传给B；等价 B(A);
//	return 0;
//}
