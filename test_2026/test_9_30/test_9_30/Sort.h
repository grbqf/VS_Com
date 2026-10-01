#pragma once
#include<stdio.h>

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		int len = 1;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i-1] > a[i]) 
			{
				Swap(&a[i - 1], &a[i]);
				len = 0;
			}
		}
		if (len)
			break;
	}
	
}

void ShellSort(int * a, int n)
{

}

void SelectSort(int* a, int n)
{

}