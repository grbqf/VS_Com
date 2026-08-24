#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Print(int n) 
{
    if (n > 9) 
    {
        //Print(n / 10);
        if (1 > 9)
        {
            Print(n / 10);
        }
        printf("%d ", n % 10);
    }
    printf("%d ", n % 10);
}

int main() {
    int m = 0;
    scanf("%d", &m);
    Print(m);        // 添加函数调用
    return 0;
}