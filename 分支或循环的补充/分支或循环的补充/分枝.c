#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
 /*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);

	if (a<b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n",a,b,c);
return 0;
}*/ // 比较3个数的大小

//int main()
//{
//	int i = 0;
//	for (i= 1; i <= 10000; i++)
//	{
//		if(i % 3 == 0)
//		printf("% d", i);
//	}
//	return 0;
//}// 打印3的倍数

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
////	   //求两个数的最大公约数
////}
//
//int main()
//{
////
////
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <=2000; year++)
//	{
//		if (year %4== 0 && year % 100 != 0)
//		{
//			printf("%d ", year); 
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}  //1000~2000之间的闰年
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}//需要判断100~200以内的素数。
////// 方法是试除法；
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <(i / 2); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}// 进行优化处理，实际结果用到了根号的方法
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <(i / 2); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}// 进行优化处理，实际结果用到了根号的方法
////但若是在后面直接改为+=2 即可跳过所以偶数，达到优化算法的目的

//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a > 0; a < 100; a++)
//	{
//		if (a % 10 == 9)
//			count++;
//	 if (a/ 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//		return 0;
//}
////计算0~100中包含9的数量
//
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//		return 0;
//}//计算1-1/2+1/3……
//
//
//
//int main()
//{
//	int arr[]
//		= { -1, 2, 3, 4, 5, -6, 7, 8, 9, -10 };
//	int max = arr[0];//此处若是复数就会无法运算，故改为arr[0]
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//		printf("max = %d\n", max);
//		return 0;
////}   //10个数比较大小
////
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);//此处的-2d表示左间距1格，补齐用的。
//		}
//		printf("\n");
//	}
//return 0;
//}
//


//猜数字游戏
//1.电脑水生成一个随机数
//2.猜数字
//void menu()
//{
//
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//
//}
//
////RAND_MAX-32767
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接受猜的数字
//	//拿时间戳来设置随机数的生成起点
//	//time_t time (time _t *timer)
//	//time_t
//	ret = rand()%100 + 1;//生成1~100之间的随机数
//	//printf("%d\n",ret)
//	/*2.猜数字*/
//	while (1)
//	{
//		printf("请猜数字:>" );
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了，再来\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了，再来\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//			switch(input)
//			{
//				case 1:
//					game();//猜数字游戏
//					break;
//				case 0:
//					printf("退出游戏\n");
//					break;
//				default:
//					printf("选择错误\n");
//					break;
//			}
//	
//	} while (input);
//	return 0;
//}

//int main()
//{
//	again:
//	printf("hello bit\n");
//		goto again;
//		return 0;
//}

int main()
{
	char input[20] = { 0 };
	//shutdown-s-t 60
	//system()-
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
	}//goto的使用例子
//可以试着改成服务并调成自动