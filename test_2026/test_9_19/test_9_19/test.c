#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i ;
		int tmp = arr[end + 1];
		while (end>= 0)
		{
			if (tmp < arr[end])
			{
				arr[end + 1] = arr[end ];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end] = tmp;
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	InsertSort(arr, sizeof(arr)/ sizeof(arr[0]));


	return 0;
}