#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//int main()
//{
//	char arr[] = "I am A sTudent";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* dest,const char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char* ret = dest;
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}
//	*dest = *scr;
//	return ret;
//}
//
//int main()
//{
//	char arr1[]   = "qweqweqweqwe";
//	char arr2[20] = "xxxxxxxxxxxxxxxxxxx";
//	//char* p = "xxxxxxxxxx";//常量字符串,无法被修改
//	//char* strcpy(char* destination, const char* source);
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[30] = "xxx";
//	//strncpy(arr2, arr1, 8);
//	strncat(arr2, arr1, 3);
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	char arr[] = "this is an apple";
//	const char* p = "app";
//	char* ret = strstr(arr, p);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "3257948923@gmail.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	const char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 50; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

void* my_memcpy(void* dest, const void* scr, size_t num)
{
	assert(dest && scr);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)scr;
		dest = (char*)dest + 1;
		scr = (char*)scr + 1;
	}
	return ret;
}

//1 2 3 4 5 6 7 8 9


void* my_memmove(void* dest, const void* scr, size_t num)
{
	assert(dest && scr);
	void* ret = dest;
	if (dest < scr)
	{
		while (num--)
		{
			*(char*)dest = *(char*)scr;
			dest = (char*)dest + 1;
			scr = (char*)scr + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)scr + num);
		}
	}
	return ret;
}

int  main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int arr2[20] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 20);
	//memmove(arr + 2, arr, 5 * sizeof(int));

	char arr[] = "hello world";
	memset(arr, 'x', 5);//只能以字节为单位来设置
	return 0;
}