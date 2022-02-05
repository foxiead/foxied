#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5 % 2;//商2余1
//	printf("a= %d\n ", a);
//	return 0;
//}
////sr算术平方得数
//
//
//int main()
//{
//	int a = 16;
//	int b = a << -1;
//	printf("%d\n",b);
//		return 0;
//}//不可以移动负数



//一个例题：在不创建一个临时变量的情况下，a=3，b=5,进行变量更换
//int main()
//{
//	//int a = 3;
//	//int b = 5;
	////int tmo = 0;//临时变量
	//printf("before:a=%d b= %d\n", a, b);
	////tmp = a;
	////a = b;
	////b = tmp;

	////加减法可能会溢出
	//a = a + b;
	//b = a - b;
	//a = a + b;
	//printf("after:a = %d\n", a, b);
	//return 0;


	//按位异或的操作方法
	/*int a = 2147483648;
	int b = 10;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("after: a = %d b = %d\n", a, b);
	return 0;*/





//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//		return 0; 
//}\测试一个数字中的二进制中的1的个数

//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < sizeof i; i++)
//	{
//		if (1 == ((num >> 1) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//}
////上个问题的优化版本


//int main()
//{
//	int a = 10;
//	a = a + 2;
//	 
//	等于
//		a += 2;
//}//复合赋值符起的作用是
//   


//int main()
//{
//	int a = 10;
//	int *p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
////
//
//}


//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char*p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[5]));
//	return 0;
//}


int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);
	a = a&(~(1 << 2));
	printf("%d\n", a);
	return 0;
}
//~的用法