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
//	{		printf("δ����\n");
//	printf("�ú�ѧϰ\n");
//}
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else
//		printf("����\n");
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
				printf("�Ǻ�\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("���²����и���Ŷ~\n");
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
//		printf("��~~��~~��\n");
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
//	return 0;   k��ֵΪ0��0Ϊ�٣����Բ�ѭ�����ǣ�ֻҪ�˴�Ϊ��0���ǾͶ�����ѭ��
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
//};              do while �ļ�ʹ�ã����ӣ�


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
//	return 0;     //��������㷨
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
//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//	}
//}
//if (i == sz)
//printf("�Ҳ���\n");
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//		if (left>right)
//		{
//			printf("�Ҳ���\n");
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
//		printf("%s\n", arr2);  //��Ϣһ��
//		Sleep(1000);
//		system("cls");//��Ϣϵͳ�����һ������-cls-�����Ļ
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
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//��Ū�����Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��- strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}