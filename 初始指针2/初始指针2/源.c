#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int *pa = &a;//��ʼ��
//	int *p = NULL; //������ʼ��ָ��ģ���ָ�븳ֵ��
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
//	p = p + 1;//ci�˴�������P++
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
//	//strlen - ���ַ�������
//	//�ݹ�- ģ��ʵ����strlen- �������ķ�ʽ1 ���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//1.&arr- &������- ������������Ԫ�صĵ�ַ- ��������ʾ�������- &������ ȡ��������������ĵ�ַ
//	//2.sizeof (arr) - sizefo (�������� - ��������ʾ��������- sizeof���������� ���������������Ĵ�С
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
//}//ָ��Ҳ���Է�������

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **papa = &pa;//ppa ���Ƕ���ָ��
//	//int*** pppa = &ppa;
//
//	return 0;
//}