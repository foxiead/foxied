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
//sizeof and strlen de ����

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//	//strlen ֻ������\0�Ż�ֹͣ�����ĸ���Ϊ��֪��\0���������Բ������3.
//	//һ���ص㣬�����ʺܸ�
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
//er��λ���о���
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
//}///da��ӡ��ά���顢��

//void bubble_sort(int  arr[], int sz)
//{
//	//ȷ��ð�����������
//	int  i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tpm = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tpm;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr ���������ų�����
//	//arr �����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort (arr,sz);//ð��������
//	//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}// yiһ�����ִ�С�������� ---y�Ż����



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

//�˴����������ص���Ҫע�⣬�ص���printf������