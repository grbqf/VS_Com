#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	struct stu s = { 0 };
//	FILE* p = fopen("test.txt", "r");
//	assert(p);
//	
//	//fprintf(p, "%s %d", s.name, s.age);
//	fscanf(stdin, "%s %d", s.name, &(s.age));
//	fprintf(stdout, "%s %d", s.name, s.age);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//
//int main()
//{
//	printf \
//		("%s\n", __FILE__);
//	printf \
//		("%s\n", __DATE__);
//	printf \
//		("%s\n", __TIME__);
//	printf \
//		("%d\n", __LINE__);
//	return 0;
//}

//#define sqr(x) ((x)*(x))
////        参数  替换的形式
//int main()
//{
//	int a = 4;
//	int b = sqr(a);
//	printf("%d", b);
//	return 0;
//}
//#define M 1 

int main()
{
#ifndef M
	printf("hehe");
#endif
	return 0;
}