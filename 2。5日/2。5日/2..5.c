#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5 % 2;//��2��1
//	printf("a= %d\n ", a);
//	return 0;
//}
////sr����ƽ������
//
//
//int main()
//{
//	int a = 16;
//	int b = a << -1;
//	printf("%d\n",b);
//		return 0;
//}//�������ƶ�����



//һ�����⣺�ڲ�����һ����ʱ����������£�a=3��b=5,���б�������
//int main()
//{
//	//int a = 3;
//	//int b = 5;
	////int tmo = 0;//��ʱ����
	//printf("before:a=%d b= %d\n", a, b);
	////tmp = a;
	////a = b;
	////b = tmp;

	////�Ӽ������ܻ����
	//a = a + b;
	//b = a - b;
	//a = a + b;
	//printf("after:a = %d\n", a, b);
	//return 0;


	//��λ���Ĳ�������
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
//}\����һ�������еĶ������е�1�ĸ���

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
////�ϸ�������Ż��汾


//int main()
//{
//	int a = 10;
//	a = a + 2;
//	 
//	����
//		a += 2;
//}//���ϸ�ֵ�����������
//   


//int main()
//{
//	int a = 10;
//	int *p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
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
//~���÷�