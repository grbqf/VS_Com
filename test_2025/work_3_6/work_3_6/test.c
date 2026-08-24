#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void init(int* arr, int num)
{
	while (num--)
	{
		arr[num] = 0;
	}
}

void print(int* arr, int a)
{
	int count = 0;
	while (count < 10)
	{
		printf("%d ", arr[count++]);
	}
	printf("\n");
}

void reverse(int* arr, int a)
{
	int left = 0;
	int right = a - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr1[10];
	init(arr1, 10);
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,0 };
	print(arr2, 10);
	reverse(arr2, 10);
	print(arr2, 10);
	return 0;
}