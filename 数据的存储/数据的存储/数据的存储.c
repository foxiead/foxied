#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
////{
////	int a = 10;
////	float f = 10.0;
////		return 0;
////}//bi比较不同的形式所占的内存形式		
//


//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//
//	}
//	else
//	{
//		printf("大端\n");
//
//	}return 0;
//}//百度的一道题，
////q请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前的字节序（10分）

//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//返回1，小端，
//	//返回0，大端
//	//return *p;
//	//
////}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
////指针类型的意义；
////1.指针的类型决定了指针解引用操作符能访问几个字节，char *p ;*p 访问了1个字节，int*p; *p访问4个字节
////2.指针类型决定了指针+1，-1，假得或者减的是几个字节，char*p;p+1，跳过一个字符，int *p;p+1,跳过一个整形-4个字节
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端，
//	//返回0， 大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//
//	}
//		return 0;
//	
//}
//
////以上一直到题目均是一道题的不同写法


//
//
////输出什么？
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a= %d,b= %d ,c = %d",a,b,c);
//		return 0 ;
//}//-1，-1，255
////整形提升，符号补位。



//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}//结果为429497168//重点是%u是无符号数字打印，所以》

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d \n", i + j);
//	//按照补码的许昌进行运算，最好格式化成为有符号整数
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}//无符号运算导致的死循环，2的32次方然后继续跑

/*int main()
{
	char a[1000];
    int i;
	for (i = 100; i >0; i--)
{
	a[i] = i-1;
}
printf("%d", strlen(a));
return 0;
}*///需要知道char的范围，最后是255 =128+127
//strlen 求字符串的长度是靠找\0。





//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word\n");
//	}
//	return 0;
/*}*///无限循环

//
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n",*pFloat );
//
//	*pFloat =  9.0;
//	printf("num的值为：%d\n", n);
//	printf("num的值为：%f\n", *pFloat);
//	return 0;
//}//两种不同的类型储存和使用的区别。


//int main()
//{
//	float f = 5.5;
	//5.5
	//101.1    转换成为2进制表示
	//（-1）^0*1.011*2^2    机器储存方式
	//S=0;
	//M=1.011
	//E= 2
	//0100 0000 1011 0000 0000 0000 0000 0000 
	//0x40b00000
	//
//	return 0;
//}

//不同的保存方式不同，所以会有不同的结果