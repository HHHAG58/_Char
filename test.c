#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	return 0;
//}

//写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	int a = 1;
//	char* p = (char*) &a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//优化
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	/*if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}
//再优化
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//求输出什么
//int main()
//{
//	char a = -1;//11111111
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);//-1 -1 255
//	return 0;
//}

//求输出什么
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//01111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//11111111111111111111111110000000 - 整形提升后补码的
//	//%u把负数的补码当成原码即正数
//	printf("%u\n", a);//4294967168
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//10000000000000000000000010000000
//	//01111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//11111111111111111111111110000000 - 整形提升后补码的
//	//%u把负数的补码当成原码即正数
//	printf("%u\n", a);//4294967168
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//按照补码运算,最后格式化位有符号整数
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//-10
//	//-20
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100 - 补码
//	//10
//	//00000000000000000000000000001010
//	//结果
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010 - 补码 - -10
//	return 0;
//}

//求输出结果
#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//9到0后死循环
//		Sleep(100);
//	}
//	return 0;
//}

//求输出结果
//int main()
//{
//	char a[1000];
//	int i; 
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//255
//	return 0;
//}

//求输出结果
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}