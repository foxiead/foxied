#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//
//}
//
//
//
//
//
////
////
//int main()
//{
//	char arr[] = "bit";
//	char arr2[20] = "#############";//��Ϊ��\0Ҳ�����ˣ�����ȫ������
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}//srtcpy��ʹ��
//
///
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
////}//һ���Զ��庯��������
//
//
// int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
// int main()
// {
//	 int a = 10;
//	 int b = 20;
//	 int max = get_max(a, b);
////	 printf("max = %d\n", max);
////	 return 0;
//// }
//// //�Զ��庯���Ƚϴ�С
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int * pa, int *pb)
//{
//	int tmp = 0 ;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b =20;
//	printf("a=%d, b=%d\n", a, b);
//	Swap2(&a, &b);
//
//	printf("a=%d ,b=%d\n",a,b);
//	return 0;
//}//���ڻ�����Ӧ�ã�ȡ��ַ���ź�ָ���Ӧ��


//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
// 
//int main()
//{
//	int i  = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime (i) == 1)
//			printf("%d ", i);
//	
//	}(int 
//	return 0;
//}   100~200de �������ж�
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && 0 && y % 100 != 0) || (y % 4 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right)/2;//�м�Ԫ�ص��±ꣻ
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±ꡣ�Ҳ����ķ���-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}//zi�Զ��庯����������

////void Add(int*p)
////{
////	(*p)++;
////}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}//ÿ����һ������������ͺý�NUM��ֵ����1

//��Űmain()
//{
//	itnl len = 0;
//	len = stren("abc");
//	peinft{ "%d\n" }, len);
//	printf(%d\n"),strlen("abc");
//}
//
//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//		return 0;
//}//xС֪ʶ�㣬������4321.֪ʶ��Ϊ������printf�ķ���ֵΪ2���ڶ����ķ���ֵΪ1�����Դ���4321.



//��������
int Add(int x,int y);

int main()

{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}


