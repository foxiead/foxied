#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void print(int n )//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12) 3 4
//	//pirnt(1) 2 3 4 
//	return 0;//��������Ϊ1234  ��   1  2  3  4
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printtf��"%d\n", len);
//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ��� ��ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	//��N�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac (n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
	int main()
	{
		int n = 0;
		int ret = 0;
		scanf("%d", &n);
		//TDD - ������������
		ret = Fib(n);
		printf("%ret = %d\n", ret);

		return 0;
	}



	//��쳲�������  �ݹ�

	���������⣬��ӣ�����ָoffer����