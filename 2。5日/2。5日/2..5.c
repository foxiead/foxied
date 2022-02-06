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
////~的用法




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
//}size of 操作符


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++  ||++b ||d++;
//	printf("a= %d\n b = %d\n c= %d\n d=%d\n", a, b, c, d);
//	return 0;
//}//ci此处问题若其中一个为0，就不再计算


//int main()
//{
//	int a = 9;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("b= %d", b);
//	return 0;
//}//三目表达式

//
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的（）就是函数调用操作符
//	int  max = get_max(a, b);
//	printf("max = %d \ n", max);
//	return 0;
//}//函数调用操作符




////创建一个结构体类型-struct -stu
////struct stu
////{
////
////	//成员变量
////	char name[20];
////	int age;
////	char id[20];
////};
////int main()
////{
////int a = 10;
//////使用struct stu 这个类型创建了一个学生对象s1，并初始化
////struct stu s1 = { "张三",20,"2019010305" };
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
//////结构体变量，成员名
////return 0;
////}//结构体类型
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
//}//整形提升的问题

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c)); 
//	printf("%u\n", sizeof(!c));
//	return 0;
//}//发生运算就会整型提升

//a*b + c*d+e*f
//是个错误的代码，容易发生错误，运算方式不固定，在不同的设备中所有的运算顺序不固定

//c+--c
////歧义

//int main()
//{
//	int i = 10;
//	i = i-- - --i*(i = -3)* i++ + ++i;
//	printf("i = %d \n ", i);
//	return 0;
//
//}//不定式代码

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
//}//依然有问题。不同编译器答案不同
