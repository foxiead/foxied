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
}*/ // �Ƚ�3�����Ĵ�С

//int main()
//{
//	int i = 0;
//	for (i= 1; i <= 10000; i++)
//	{
//		if(i % 3 == 0)
//		printf("% d", i);
//	}
//	return 0;
//}// ��ӡ3�ı���

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
////	   //�������������Լ��
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
//}  //1000~2000֮�������
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
//}//��Ҫ�ж�100~200���ڵ�������
////// �������Գ�����
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
//}// �����Ż�����ʵ�ʽ���õ��˸��ŵķ���
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
//}// �����Ż�����ʵ�ʽ���õ��˸��ŵķ���
////�������ں���ֱ�Ӹ�Ϊ+=2 ������������ż�����ﵽ�Ż��㷨��Ŀ��

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
////����0~100�а���9������
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
//}//����1-1/2+1/3����
//
//
//
//int main()
//{
//	int arr[]
//		= { -1, 2, 3, 4, 5, -6, 7, 8, 9, -10 };
//	int max = arr[0];//�˴����Ǹ����ͻ��޷����㣬�ʸ�Ϊarr[0]
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
////}   //10�����Ƚϴ�С
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
//			printf("%d*%d=%-2d ", j, i, i*j);//�˴���-2d��ʾ����1�񣬲����õġ�
//		}
//		printf("\n");
//	}
//return 0;
//}
//


//��������Ϸ
//1.����ˮ����һ�������
//2.������
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
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;//���ܲµ�����
//	//��ʱ�����������������������
//	//time_t time (time _t *timer)
//	//time_t
//	ret = rand()%100 + 1;//����1~100֮��������
//	//printf("%d\n",ret)
//	/*2.������*/
//	while (1)
//	{
//		printf("�������:>" );
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˣ�����\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�ˣ�����\n");
//		}
//		else 
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//			switch(input)
//			{
//				case 1:
//					game();//��������Ϸ
//					break;
//				case 0:
//					printf("�˳���Ϸ\n");
//					break;
//				default:
//					printf("ѡ�����\n");
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
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>��");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
	}//goto��ʹ������
//�������Ÿĳɷ��񲢵����Զ�