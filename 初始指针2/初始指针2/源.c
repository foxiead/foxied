#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int *pa = &a;//初始化
//	int *p = NULL; //用来初始化指针的，给指针赋值。
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int  sz = sizeof(arr) / sizeof (arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//	p = p + 1;//ci此处可以用P++
//}
//return 0; 
//}//

//#define N_VALUES 5
//float balues[N_VALUES]
//float *vp;
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//	*p++ = 0;
//}


//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		;
//	printf("%d\n", &arr[0] - &arr[9]); 
//	
//	return 0;
//}

//
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归- 模拟实现了strlen- 计数器的方式1 ，递归的方式2
//	char arr[] = "bit";
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//1.&arr- &数组名- 数组名不是首元素的地址- 数组名表示这个数组- &数组名 取出的是整个数组的地址
//	//2.sizeof (arr) - sizefo (数组名） - 数组名表示整个数组- sizeof（数组名） 计算的是整个数组的大小
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}//指针也可以访问数组

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **papa = &pa;//ppa 就是二级指针
//	//int*** pppa = &ppa;
//
//	return 0;
//}