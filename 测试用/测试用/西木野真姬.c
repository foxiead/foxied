//static int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int i = 2;
//	char arr[10] = { 1, 2, 3, 4, 1, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	while (i <11)
//	{
//		int z = (left + right) / 2;
//		if (i == arr[z])
//			printf("%d", arr[z]);
//		else if (i > arr[z])
//		{
//			left = arr[z] + 1;
//			z = (left + right) / 2;
//		}
//		else
//		{
//			right = arr[z] - 1;
//			z = (left + right) / 2;
//
//		}
//
//
//	}
//	return 0;
//}