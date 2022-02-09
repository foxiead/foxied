#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
////	return 0;
////}//可以以此来查看调用堆栈
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//调用，条件调用


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//vc6.0 环境下，<=10 就死循环了
//	//gcc编译器 <=11 就死循环了
//	//vs2013  <=死循环
//	for (i = 0; i <= 13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//


//int my_strlen(const char  * str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
////断言assert，const, void 


int Add(int x, int y)
{
	return x + y;

}

int main()
{
	int a =10 ;
	int b = 20;

		int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}//连结性错误