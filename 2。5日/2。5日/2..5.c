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

//
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a&(~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
////~���÷�




////2./6
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char  ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}size of ������


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++  ||++b ||d++;
//	printf("a= %d\n b = %d\n c= %d\n d=%d\n", a, b, c, d);
//	return 0;
//}//ci�˴�����������һ��Ϊ0���Ͳ��ټ���


//int main()
//{
//	int a = 9;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("b= %d", b);
//	return 0;
//}//��Ŀ���ʽ

//
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ��ģ������Ǻ������ò�����
//	int  max = get_max(a, b);
//	printf("max = %d \ n", max);
//	return 0;
//}//�������ò�����




////����һ���ṹ������-struct -stu
////struct stu
////{
////
////	//��Ա����
////	char name[20];
////	int age;
////	char id[20];
////};
////int main()
////{
////int a = 10;
//////ʹ��struct stu ������ʹ�����һ��ѧ������s1������ʼ��
////struct stu s1 = { "����",20,"2019010305" };
//
//
////printf("%s\n",(*ps.name))
////printf("%s\n", (*ps.age))
////printf("%s\n", (*ps.id))
////
////
////printf("%s\n", (ps->name))
////printf("%s\n", (ps->age))
////printf("%s\n", (ps->id))
//
////printf("%s\n", s1.name);
////printf("%s\n", s1.age);
////printf("%s\n", s1.id);
//////�ṹ���������Ա��
////return 0;
////}//�ṹ������
// 
//
//int main()
//{ 
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}//��������������

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c)); 
//	printf("%u\n", sizeof(!c));
//	return 0;
//}//��������ͻ���������

//a*b + c*d+e*f
//�Ǹ�����Ĵ��룬���׷����������㷽ʽ���̶����ڲ�ͬ���豸�����е�����˳�򲻹̶�

//c+--c
////����

//int main()
//{
//	int i = 10;
//	i = i-- - --i*(i = -3)* i++ + ++i;
//	printf("i = %d \n ", i);
//	return 0;
//
//}//����ʽ����

//int fun()
//{
//	static int count = 1;
//	return  ++count;
//}
//int main()
//{
//	int answer;
//
//	answer = fun() - fun()*fun();
//	printf("%d\n", answer);
//	return 0;
//}//��Ȼ�����⡣��ͬ�������𰸲�ͬ
