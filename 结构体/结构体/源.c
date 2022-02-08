#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>


//typedef struct stu
//{

//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}stu;
//
//int main()
//{
//	struct stu s1;//局部变量
//	stu s2;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char*pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}  






typedef struct Stu
{

	char name[20];
	short age;
	char tele[12];
	char sex[5];

}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40, "15566666688", "男" };
	Print1(s);
	Print2(&s);
	return 0;
}//问这两种哪个好一些呢？
//-上面的printl和print2函数哪个好些 ?
//
//答案是 : 首选print2函数。原因 :
//
//	  函数传参的时候, 参数是需要压栈的。如果传递一个结构体对象的时候, 结构体过大, 参数压栈的的系统开销比较大1所以会导致性能的下降。
//
//  结论 : 结构体传参的时候, 要传结构体的地址。
