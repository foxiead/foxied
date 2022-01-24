#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//
//}
//
//
//
//
//
////
////
//int main()
//{
//	char arr[] = "bit";
//	char arr2[20] = "#############";//因为把\0也复制了，所以全过来了
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}//srtcpy的使用
//
///
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
////}//一个自定义函数的例子
//
//
// int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
// int main()
// {
//	 int a = 10;
//	 int b = 20;
//	 int max = get_max(a, b);
////	 printf("max = %d\n", max);
////	 return 0;
//// }
//// //自定义函数比较大小
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int * pa, int *pb)
//{
//	int tmp = 0 ;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b =20;
//	printf("a=%d, b=%d\n", a, b);
//	Swap2(&a, &b);
//
//	printf("a=%d ,b=%d\n",a,b);
//	return 0;
//}//对于互换的应用，取地址符号和指针的应用


//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
// 
//int main()
//{
//	int i  = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime (i) == 1)
//			printf("%d ", i);
//	
//	}(int 
//	return 0;
//}   100~200de 的素数判断
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && 0 && y % 100 != 0) || (y % 4 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right)/2;//中间元素的下标；
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。找不到的返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}//zi自定义函数查找数字

////void Add(int*p)
////{
////	(*p)++;
////}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}//每调用一次这个函数，就好将NUM的值增加1

//纯虐main()
//{
//	itnl len = 0;
//	len = stren("abc");
//	peinft{ "%d\n" }, len);
//	printf(%d\n"),strlen("abc");
//}
//
//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//		return 0;
//}//x小知识点，，答案是4321.知识点为第三个printf的返回值为2，第二个的返回值为1，所以答案是4321.



//函数声明
int Add(int x,int y);

int main()

{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//函数的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}


