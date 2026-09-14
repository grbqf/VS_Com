//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Snack.h"


//int main()
//{
//	//system("mode con cols=30 lines=100");
//	//system("pause");
//	//system("");
//
//	COORD pos = { 0, 0 };
//	return 0;
//}

//int main()
//{
//	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//?????????????????????????????????
//
//	CONSOLE_CURSOR_INFO cursor_info = { 0 };
//	//??????????????
//
//	GetConsoleCursorInfo(houtput, &cursor_info);//???????????????????
//	//??????????????????????????????,???????????
//
//	cursor_info.dwSize = 100;
//	cursor_info.bVisible = false;
//
//	SetConsoleCursorInfo(houtput, &cursor_info);
//	system("pause");
//	return 0;
//}

//void set_pos(short x, short y)
//{
//	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//?????????????????????????????????
//
//	COORD pos = { x, y };
//	SetConsoleCursorPosition(houtput, pos);
//}
//
//#define KEY_PRESS(VK)  (GetAsyncKeyState(0x35)&1?1:0)
//int main()
//{
//	//set_pos(20, 20);
//
//	//system("pause");
//
//	//short ret = GetAsyncKeyState(0x35);
//	//if (ret & 0x1)
//	//	printf("5??????");
//	//else
//	//	printf("5???????");
//
//	while (1)
//	{
//		if (KEY_PRESS(0x30))
//		{
//			printf("0\n");
//		}
//		else if (KEY_PRESS(0x31))
//		{
//			printf("1\n");
//		}
//		else if (KEY_PRESS(0x32))
//		{
//			printf("2\n");
//		}
//		else if (KEY_PRESS(0x33))
//		{
//			printf("3\n");
//		}
//		else if (KEY_PRESS(0x34))
//		{
//			printf("4\n");
//		}
//		else if (KEY_PRESS(0x35))
//		{
//			printf("5\n");
//		}
//		else if (KEY_PRESS(0x36))
//		{
//			printf("6\n");
//		}
//		else if (KEY_PRESS(0x37))
//		{
//			printf("7\n");
//		}
//		else if (KEY_PRESS(0x38))
//		{
//			printf("8\n");
//		}
//		else if (KEY_PRESS(0x39))
//		{
//			printf("9\n");
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char* ret = setlocale(LC_ALL, "");
//	//printf("%s", ret);
//	//printf("%s\n", "ab");
//	//printf("%s\n","??");
//	wchar_t wc1 = L'ку';
//	wprintf(L"%lc", wc1);
//	return 0;
//}