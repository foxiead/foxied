#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
////{
////	int a = 10;
////	float f = 10.0;
////		return 0;
////}//bi�Ƚϲ�ͬ����ʽ��ռ���ڴ���ʽ		
//


//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//
//	}
//	else
//	{
//		printf("���\n");
//
//	}return 0;
//}//�ٶȵ�һ���⣬
////q���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ���ֽ���10�֣�

//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//����1��С�ˣ�
//	//����0�����
//	//return *p;
//	//
////}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
////ָ�����͵����壻
////1.ָ������;�����ָ������ò������ܷ��ʼ����ֽڣ�char *p ;*p ������1���ֽڣ�int*p; *p����4���ֽ�
////2.ָ�����;�����ָ��+1��-1���ٵû��߼����Ǽ����ֽڣ�char*p;p+1������һ���ַ���int *p;p+1,����һ������-4���ֽ�
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	//����1��С�ˣ�
//	//����0�� ���
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���");
//
//	}
//		return 0;
//	
//}
//
////����һֱ����Ŀ����һ����Ĳ�ͬд��


//
//
////���ʲô��
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a= %d,b= %d ,c = %d",a,b,c);
//		return 0 ;
//}//-1��-1��255
////�������������Ų�λ��



//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}//���Ϊ429497168//�ص���%u���޷������ִ�ӡ�����ԡ�

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d \n", i + j);
//	//���ղ��������������㣬��ø�ʽ����Ϊ�з�������
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}//�޷������㵼�µ���ѭ����2��32�η�Ȼ�������

/*int main()
{
	char a[1000];
    int i;
	for (i = 100; i >0; i--)
{
	a[i] = i-1;
}
printf("%d", strlen(a));
return 0;
}*///��Ҫ֪��char�ķ�Χ�������255 =128+127
//strlen ���ַ����ĳ����ǿ���\0��





//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word\n");
//	}
//	return 0;
/*}*///����ѭ��

//
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n",*pFloat );
//
//	*pFloat =  9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("num��ֵΪ��%f\n", *pFloat);
//	return 0;
//}//���ֲ�ͬ�����ʹ����ʹ�õ�����


//int main()
//{
//	float f = 5.5;
	//5.5
	//101.1    ת����Ϊ2���Ʊ�ʾ
	//��-1��^0*1.011*2^2    �������淽ʽ
	//S=0;
	//M=1.011
	//E= 2
	//0100 0000 1011 0000 0000 0000 0000 0000 
	//0x40b00000
	//
//	return 0;
//}

//��ͬ�ı��淽ʽ��ͬ�����Ի��в�ͬ�Ľ��