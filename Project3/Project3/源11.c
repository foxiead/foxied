#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<Windows.h>


////struct book
////{
////	char name[30];
////	short price;
////	};
//int main()
//{
//	int age = 9.5;
//	if (age < 18)
//	{		printf("未成年\n");
//	printf("好好学习\n");
//}
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("中年\n");
//	else
//		printf("老年\n");
//		return 0;
//}
//



//int main()
//{
//	int a = 0;
//	int b = 2;
////	if (a == 1)
//	if /*(b == 2)
//		printf("hehe\n");
//	else
////		printf("haha\n");
//	return 0;
//
//
//}
	/*	
		int main()
	{
			int num = 4;
			if(5= num)
				printf("呵呵\n");
			return 0;
		}*/




//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//
//		printf("%d ", i);
//		i += 2;
//	}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("你怕不是有个大病哦~\n");
//		break;
////
////
//	}
//}
//
//
//
//
//
////int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//		continue;
//
//		printf("%d ", i);
//	i++;
//}
//return 0;
//}



//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}


//
//
//int main()
//{
//	int i = 1;
//	
//	while (i <= 9)
//
//	{
//		if (i == 9)
//		continue;
//		printf("啊~~啊~~啊\n");
//
//		i++;
//	}
//	return 0;
//	}
//	

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch> '9')
//			continue;
//			putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//
//
//int main()
//{
//	int  i = 1;
//	while(i<= 10)
//	{
//		if (i == 5)
//		continue;
//		printf("%\d", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//
//{
//int x, y;
//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//{
//	printf("hehe\n");
//}
//return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)  
//		k++;
//	return 0;   k赋值为0，0为假，所以不循环但是，只要此处为非0，那就都是死循环
//}



//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i );
//		i++;
//	}   while (i < 10);
//	return  0;
//};              do while 的简单使用（例子）


//int main()
//{
//	int i = 1;
//	do 
//	{
//		if (i == 5)
//		continue;
//		printf("%d ", i);
//		i++;
//
////	} while (i <= 10);
////	return 0;
////
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum= %d\n", sum);
//	return 0;     //改正后的算法
//}
//



//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//};

//int main()
//{
//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int k = 7;
//int i = 0;
//int sz = sizeof(arr)/sizeof(arr[0]);
//for (i=0; i<sz; i++)
//{
//	if (k == arr[i])
//	{
//		printf("找到了，下标是：%d\n", i);
//			break;
//	}
//}
//if (i == sz)
//printf("找不到\n");
//return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 78;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//		if (left>right)
//		{
//			printf("找不到\n");
//		}
//		return 0;
//	
//}

//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);  //休息一秒
//		Sleep(1000);
//		system("cls");//窒息系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//不弄用来比较两个字符串是否相等，应该使用一个库函数- strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}