#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//int* p = (int*)malloc(5 * sizeof(int));
//
//	//int* p = (int*)calloc(5, sizeof(int));//会自动初始化内存为0
//
//	int* p = (int*)realloc(NULL, 5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	//free(p);//释放的必须是动态申请的起始地址
//	//p = NULL;
//	int* p2 = realloc(p, 40);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	else
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//void mymalloc(char** ptr)
//{
//	*ptr = (char*)malloc(100);
//}
//
//void test()
//{
//	char* p = NULL;
//	mymalloc(&p);
//	strcpy(p, "hello word");
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	//打开文件
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	//fputc('a', p);
	//int a = fgetc(p);
	//printf("%c", a);
	//fputs("hello world", p);//只读一行,并且自动存一个\0
	char arr[20] = { 0 };
	fgets(arr, 15, p);
	printf("%s", arr);

	fgets(arr, 15, p);
	printf("%s", arr);


	//关闭文件
	fclose(p);
	p = NULL;
	return 0;
}