#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
#include<stdlib.h>
 
//int main()
//{
//	printf("hehe \n");
//	printf("hello word \n");
//	return 0;
//}
//// ���
 
//int main()
//{
//	printf("%d \n", sizeof (char));
//	printf("%d \n", sizeof (short));
//	printf("%d \n", sizeof (int));
//	printf("%d \n", sizeof (long));
//	printf("%d \n", sizeof (long long));
//	printf("%d \n", sizeof (float));
//	printf("%d \n", sizeof (double));
//	printf("%d \n", sizeof (long double));
//
//	return 0;
//
//
//}   ��ɣ� C������û���ַ���

//int main()
//
//{
//
//	printf("%p \n",5.28 );
//	return 0;
//}����folat �� double���÷����Լ�%f ,%lf


//int globle = 666;
//int main()
//{
//
//	{
//		int local = 123;
//		int globle = 789;
//		printf("%d \n", globle);
//	}
//
//	printf("%d \n", globle);
//	return 0;// �˴���Ϊȫ�ֱ�����globle �������int main ���棬����ʹ�á�����Ͷ��Ǿֲ����������⣬Ҫ�ô�Űgloble = 789
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("���������֣�> ");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//
//}//��%d �����ܣ���Ҫ��������Ȼ��ȡ��ַ���ţ���scanf�в�Ҫ���ö��š�


//int main()
//{
//	const float  pai = 3.141;
//	pai = 7.8;
//	printf("%f \n", pai);
//	return 0;
//}//const ����ĳ���
//
//enum {
//	male,
//	female,
//	xiuji
//};
//int main()
//{
//	printf("%d \n", male);
//	printf("%d \n", female);
//	printf("%d \n", xiuji);
//
//}
////ö�ٳ�����Ҫ��enum 
//
//
//enum{
//	amber,
//	lisa,
//	kava
//};
//int main()
//{
//	printf("%d \n", amber);
//	printf("%d \n", kava);
//	printf("%d \n", lisa);
//}
////ö�ٳ�����ϰ


//int main()
//{
//	char arr[] = "bit";
//	char arr2[] = { 'b', 'i' ,'t' };
//	char arr3[] = {'b', 'i' ,'t', '\0' };
//	
//	printf("%s \n ", arr);
//	printf("%s \n ", arr2);
//	printf("%s \n ", arr3);
//	return 0;
//
//}//�����ַ��ô����ţ�Ȼ���õ����ţ������ַ���˫���š�

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:test\x\test.c"));
//	/*printf("%d\n", "\628");*/
//		return 0;
//}
//
//
////int main()
//{
//	int  choose = 0;
//	printf("����У�����Ϲ����ǵĻ�����0����������1>:");
//	scanf("%d", &choose);
//	if (choose == 0)
//	{
//		printf("������peach��he~tui~~\n");
//	}
//	else
//	{
//		printf("���ţ��ܺã�����ȷ\n");
//	}
//	return 0;
//
//}

//
//int main()
//{
//	int line = 0;
//	printf("м���꣬��Ը���Ӧ���ҵ�������\n");
//	while (line <= 2000)
//	{
//		line++;
//		printf("м���꣺�����Ŷ\n�����ߣ���������~~���ǰ������Ӵ��˵Ĺ�~~\n");
//
//	}
//	if (line > 2000)
//	{
//		printf("м���꣺�ðɣ���������˼ᶨ���Ҿ���ͬ���˰�\n");
//	}
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 1;
//	int sum = 0;
//	printf("�������������֣�>");
//	scanf("%d %d", &num1, &num2);
//	Add(num1, num2);
//	sum = Add(num1,num2);
//	printf("%d \n", sum);
//	return 0;
//}//�Զ��庯�����š�


//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("�������ŵ���Χ:>");
//	scanf("%d %d", &a, &b);
//	
//	sum = Add(a, b);
//	printf("%d \n", sum);
//	return 0;
//	
//}

//#define Add(x , y)((x)+(y));
//
//int main()
//{
//	int sum = Add(45, 45);
//	printf("%d \n", sum);
//	int sum1 = 10 * Add(98, 76);
//	printf("%d \n", sum1);
//	return 0;
//
//}//�����


//int main()
//{
//	int sum = 114514	;
//	int *p = &sum;
//	char qw = 'we';
//	char *o = &qw;
//	*o = 'h';
//	printf("%c \n", qw);
//
//	printf("%p \n", *p
//		);
//	*p = 666;
//	printf("%d \n", sum);
//	return 0;
////}
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(long *));
//
//}

//int main()
//
//{
//
//struct stu
//{
//	char name[20];
//	char general[20];
//	int age;
//};
//
//struct stu s = { "��ľҰ�漧", "Ů", 17, };
//
//	printf("name = %s general= %d age = %s \n", s.name, s.general, s.age);
//	return 0;
//}Ӧ�û���������ġ�
//
//int main()
//{
//	int i = 0;
//	while (i < 20)
//	{
//		printf("����~�����~��Ҫ~Ҫȥ��");
//		printf("��~��~��~~~\n");
//		i++;
//	}
//	if (i >= 20)
//	{
//		printf("ȥ�ˣ�������\n");
//	}
//		return 0;
//
//
//}
//

//int main()
//{
//	int a = 0;
//	printf("����������:> \n ");
//	scanf("%d", &a);
//	if (a < 18)
//	{
//
//		printf("δ���ꡣ�����𲽣��������\n");
//	}
//	else if (a >= 18 && a < 30)
//	{
//		printf("���ꡣ�ҹ���һ���������̷�\n");
//	}
//	else if (a >= 30 && a < 60)
//	{
//		printf("���ꡣ\n");
//	}
//	else if (a >= 60 && a < 130)
//	{
//
//		printf("���ꡣ\n");
//	}
//	else
//	{
//		printf("ǧ��������\n");
//	}
//		return 0;
////	} 
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	if (b == 2)
//		printf("hehe\n");
//	else
//	printf("haha\n");
//	return 0;
//
//}//��Ȼ�򲻳���������


////
////int main()
////{
////	int a = 0;
////	int b = 2;
////	if (a == 1)
////	{
////		if (b == 2)
////			printf("hehe\n");
////	}
////	else
////		printf("haha\n");
////	return 0;
////
////}//haha ����



//
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i % 2 == 1 && i <= 100;i++)
//	{
//		printf("������Ϊ����\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i += 2)
//		printf("%d ", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			;
//		}
//	}
//
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	
//	case 2:
//	
//	case 3:
//		
//	case 4:
//		
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		
//	case 7:
//		printf("˫����\n");
//		break;
//	default:
//		printf("�����ڵģ�");
//	}
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n =%d\n", m, n);
//	return 0;
//}
//
//		
//	

//
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ",i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//		printf("%d ", i);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}
//
////
////}
//
//int main()
//{
//
//
//	int x, y;
//	for (x = 0,y = 0; x < 2 && y < 5 ; ++x, y++ );
//	{
//		printf("hehe\n ");
//	}
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	printf("%d %d", i, k);
//	return 0;
//}ִ��0��

//int main()
//{
//	int i = 13333;
//	do
//	{
//		printf("%d\n", i);
//
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	while (i ==10)
//
//	{
//		if (10 == i)
//			continue
//			;
//		printf("%d\n", i);
//	}
//			
//			return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int z = 0;
//	printf("���������֣�>");
//	scanf("%d", &i);
//	while
//
//	z = i*++i;
//	printf("%d ", z);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int mul = 1;
//	mul == 1;
//	
//	scanf("%d", &i);
//	
//	while (i >1)
//	{
//		
//		mul = mul*i;
//		i = i - 1;
//	}
//		printf("%d", mul);
//	return 0;
//}//n�Ľ׳ˡ�




//int main()
//{
//	int i =10;
//	int mul = 1;
//	int b = 0;
//	int k = 0;
//	/*scanf("%d", &i);*/
//	while (mul>0 && i>0)
//	{
//		mul = 1;
//		while (i > 1)
//		{
//			
//			mul = mul*i;
//			i = i - 1;
//		}
//		k = k + mul;
//		b = b + 1;
//		i = 10 - b;
//	}
//		printf("%d", k);
//	return 0;
//}//n�Ľ׳ˡ�//1!+2!+^��������9!+10!
//


//int main()
//{
//	char arr[20] = { 0};
//	char arr2[20] = {  0};
//	char arr3[20] = {  0};
//	char arr4[20] = {  0};
//	printf("�û���¼\n �û���������:>");
//	scanf("%s %s ", arr,arr2);
//	getchar;
//	while ((ch = getchar))
//	//int *p = arr;//�û�������λ��
//	//int *w = arr2;//���봢��λ��
//	printf("�����µ�¼��\n�û���������:>");
//	scanf("%s %s ", arr3, arr4);
//	if (&arr3==&arr && &arr2==&arr4)
//		printf("success!��½�ɹ���");
//	else
//	{
//		printf("�û�������������������룡");
//		int i = 3;
//		i = 3;
//		i--;
//	
//	}
//д������


//int main()
//{
//	int i = { 0 };
//	printf("��һ������50��������>(0/1)\n");
//	scanf("%d", i);
//	if (i == 0)
//	{
//		printf("��һ������25��������>(0/1)\n");
//	}
//	else
//	{
//		printf("��һ������75��������>(0/1)\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = strlen(arr[] / arr[0]);
////
////}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (i == 3)
//		printf("����������3�Σ�����3�Σ��Զ��˳�\n");
//	return 0;
//
//}



//int main()
//{
//	char arr1[] = { " ƨ�ɺúõľ�����!" };
//	char arr2[] = { " �ҵı����Ұ���ѽ!" };
//	//printf("%s\n", arr1);
//	int left = 0;
//	int right = sizeof(arr1)/sizeof(arr1[0])-1;
//	while (left<=right)
//	{
//		
//		Sleep(500);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		
//	}
//	return 0;
//
//}
//	



//int main()
//{
//	char arr1[] = { " ƨ�ɺúõľ�����!" };
//	char arr2[] = { " �ҵı����Ұ���ѽ!" };
//	//printf("%s\n", arr1);
//	int left = 0;
//	int right = sizeof(arr1)/sizeof(arr1[0])-1;
//	while (left<=right)
//	{
//		
//		Sleep(500);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		
//	}
//	return 0;
//
//}
//	

//int main()
//{
//	char arr1[] = ("�����ߴ�������,�����߳鿨ȫ����!");
//	char arr2[]= ("**********************************");
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	printf("%s", arr2);
//	while (left <= right)
//	{
//		Sleep(300);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	while(i<3)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ!\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������!");
//			i++;
//		}
//		if (i == 3)
//		{
//			printf("��������,�������,�Զ��Ƴ�����!");
//		}
//		
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 29;
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	
//	while (left<=right)
//	{
//
//		int z = (left + right) / 2;
//		if (i > arr[z])
//		{
//			left = z + 1;
//			z = (left + right) / 2;
//		}
//		else if (i < arr[z])
//		{
//			right = z - 1;
//			z = (left + right) / 2;
//
//		}
//		else
//			printf("%d \n", arr[z]);
//		
//	}
//	
//		if (right < left)
//			printf("û���ҵ�\n");
//
//		return 0;
//
//

//}

//
//
//int MAX(int x, int y)
//{
//
//	return 	(x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 7;
//	int num2 = 6;
//	int z = MAX(num1, num2);
//	printf("MAX=:>%d\n ", z);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}void Swap2(int *px, int *py)
//{
//	int tmp = 0;
//		tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 3;
//	Swap1(num1, num2);
//		printf("Swap1::num1= %d , num2 =%d \n", num1 ,num2);
//		Swap2(&num1, &num2);
//		printf("Swap2::num1 = %d, num2= %d \n",num1 , num2);
//		return 0;
//
////}//�Զ�����ֵ����
//
//
//
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp=*px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 2;
//	int num2 = 3;
//	swap1(num1, num2);
//		printf("swap1=> num1= %d ,num2 = %d\n", num1, num2);
//		swap2(&num1, &num2);
//		printf("swap2=> num1=  %d,num2 =  %d \n", num1, num2);
//		return 0;
//
//}//ָ�����ʽ����������ֵ.


//int prt(int *px, int *py)
//{
//	
//}
//

//int main()
//{
//	float num = 11;
//	float i = 1;
//	float p = 0;
//	while (i < num)
//	{
//		p = num / i;
//		if (p !=1 &&p !=num)
//			printf("��������\n");
//		else
//			printf("������\n");
//		i++;
//	}
//	return 0;
//}

//	




//void year(int x)
//{
//
//
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		printf("%d������!\n", x);
//	}
//	else
//	{
//
//		printf("%d��������\n", x);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("�������");
//		scanf("%d", &a);
//		year(a);
//
//
//	return 0;
//}


