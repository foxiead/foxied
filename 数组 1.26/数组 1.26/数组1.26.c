#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<Windows.h>


//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
////	return 0;
////}
//sizeof and strlen de 区别；

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//	//strlen 只有碰到\0才会停止，第四个因为不知道\0在哪里所以不是输出3.
//	//一个重点，错误率很高
//
//
//
////}
//
//int main()
//{
////	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}



//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//int sz= sizeof(arr) / sizeof(arr[0]);
//int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

	//int main()
	//{

	//	int arr[3][4];
	//	char ch[5][6];
	//	return 0;
	//}

//int arr[3][4] = { 1, 2, 3, 4, };
//int arr[3][4] = { { 1, 2 }, { 3, 4 } };
//int arr[][4] = { { 2.3 }, { 4, 5 } };
//
//er二位数列举例
//int main()
//{
//
//int arr[3][4] = { { 1,2,3 },{ 4,5 } };
//int i = 0;
//for (i = 0; i < 3; i++)
//{
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		printf("%d ", arr[i][j]);
//	}
//
//	printf("\n");
//}
//
//	return 0;
//}///da打印二维数组、、

//void bubble_sort(int  arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int  i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tpm = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tpm;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {9, 1,2,3,4,5,6,7,8 };
//	int i = 0;
//	int sz = sizeof (arr) / sizeof (arr[0]);
//	//对arr 进行排序，排成升序
//	//arr 是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort (arr,sz);//冒泡排序函数
//	//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}// yi一串数字从小到大排序 ---y优化后的



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
}

//此处有两个魈重点需要注意，重点是printf的数字