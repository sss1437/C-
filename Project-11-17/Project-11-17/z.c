#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void table(int m)
{
	int i = 0;
	int r = 0;
	int j = 0;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++)
		{
			r = i * j;
			printf("   %d*%d=%d", i, j, r);
		}
		printf("\n");
	}
}
int main()
{
	int m = 0;
	printf("请输入一个数字:>");
	scanf("%d", &m);
	table(m);
	system("pause");
	return 0;
}//打印乘法表
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void swp(int a, int b)
//{
//	int t = 0;
//	printf("a=%d,b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//
//	scanf("%d%d", &a, &b);
//	swp(a, b);
//	system("pause");
//	return 0;
//}//交换两个数
//
//
//#include<stdio.h>
//#include<stdlib.h>
//leap_year(int y)
//{
//	if (y % 4 != 0)
//		return 0;
//	else
//		return y;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("请输入年份:>\n");
//	scanf("%d", &year);
//	ret = leap_year(year);
//	if (0 == ret)
//	{
//		printf("不是闰年\n");
//	}
//	else
//		printf("是闰年\n");
//
//	system("pause");
//	return 0;
//}//判断闰年
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int prime(int s)
//{
//	int i = 0;
//	for (i = 2; i < s; i++)
//	{
//		if (s%i == 0)
//			return -1;
//	}
//	return s;
//}
//int main()
//{
//	int s = 0;
//	int ret = 0;
//	printf("请输入一个数:>\n");
//	scanf("%d", &s);
//	ret = prime(s);
//	if (-1 == ret)
//	{
//		printf("不是素数\n");
//	}
//	else
//	{
//		printf("是素数\n");
//	}
//	system("pause");
//	return 0;
//}//判断素数
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a;
//	int b;
//	int t;
//	scanf_s("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}//进行两个数值的交换
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}//进行两个数值的交换，无中间值
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0, max = 0;
//	int arr[10] = { 1,2,3,4,6,6,7,18,6,10 };
//	for (i = 0; i < 10; i++)
//		if (arr[i] >= max)
//			max = arr[i];
//	printf("%d", max);
//	system("pause");
//	return 0;
//}//求十个整数中最大值
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c, t;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	if (a < c)
//	{
//		t = c;
//		c = a;
//		a = t;
//	}
//	if (b < c)
//	{
//		t = c;
//		c = b;
//		b = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	system("pause");
//	return 0;
//}//将三个数按从大到小的顺序输出
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int t, i;
//	for (i = 0; i < 10; i++)
//	{
//		t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	printf("\n");
//	{
//		for (i = 0; i < 10; i++)
//			printf(" %d", b[i]);
//	}
//	system("pause");
//	return 0;
//}//两个数组内容互换
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	float sum = 0, a = 1;
//	for (i = 1; i < 101; i++)
//	{
//		a = pow(-1, (i - 1)) / i;
//		sum += a;
//	}
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}//计算1/1-1/2+1/3....1/99-1/100的值
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0, i;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//			a = a + 1;
//		if (i / 10 == 9)
//			a = a + 1;
//	}
//	printf("%d", a);
//	system("pause");
//	return 0;
//}//计算1-100会出现多少次数字9
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t, i;
//	printf("????????????:");
//	scanf("%d%d", &a, &b);
//	{
//		if (a > b)
//			t = b;
//		else if (a < b)
//			t = a;
//		{
//			for (i = t; i >= 1; i--)
//				if (a%i == 0 && b%i == 0)
//				{
//					printf("%d\n", i);
//					break;
//				}
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	int a, b, c;
//	for (num = 2; num <= 999; num++)
//	{
//		a = num / 100;//百位
//		b = num / 10 % 10;//十位
//		c = num % 10;//个位
//		if (num == pow(a, 3) + pow(b, 3) + pow(c, 3))
//		{
//			printf("%d\n", num);
//		}
//	}
//
//	system("pause");
//	return 0;
//}//求水仙花数
//
//
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	int i, m = 0, sn = 0, a;
//	printf("请输入一个数字:");
//	scanf_s("%d", &a);
//	for (i = 0; i <= 4; i++)
//	{
//
//		m = m + (a * pow(10, i));
//
//		printf("%d\n", m);
//		sn += m;
//	}
//	printf("sn=%d\n", sn);
//	system("pause");
//	return 0;
//}//求Sn=a+aa+aaa+aaaa+aaaaa的前五项和
//
//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 20;
//	int ret = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret = binary_search(arr, k, left, right);
//	if (ret == -1)
//		printf("找不到");
//	else
//		printf("%d", ret);
//
//
//
//	system("pause");
//	return 0;
//}//折半法找k值
//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			if (i == 2)
//			{
//				printf("密码错误退出程序");
//				break;
//			}
//			printf("密码错误请重新输入：\n");
//
//		}
//	}
//	if (i == 3)
//		printf("密码错误，退出程序\n");
//
//	system("pause");
//	return 0;
//}
////创建一个数组，
////实现函数init（）初始化数组、
////实现empty（）清空数组、
////实现reverse（）函数完成数组元素的逆置。
////要求：自己设计函数的参数，返回值。
//#include<stdio.h>
//#include<stdlib.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int t = 0;
//	int left = 0;
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	for (i = 0; i < mid; i++)
//	{
//		t = arr[i];
//		arr[i] = arr[right - i];
//		arr[right - i] = t;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void empty(int arr[]) 
//{ 
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{ arr[i] = 0;
//	printf("%d  ", arr[i]);
//	} 
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	reverse(arr, sz);
//	empty(arr);
//	system("pause");
//	return 0;
//}
//
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******************\n");
//	printf("***** play:1 *****\n");
//	printf("***** exit:0 *****\n");
//	printf("******************\n");
//}
//void game()
//{
//	int num = 0;
//	int i = 0;
//	num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &i);
//		if (i < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (i > num)
//		{
//			printf("猜大了\n");
//
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//只调用一次time函数
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}//猜数字
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int binary_seach(int arr[], int k, int left, int right)
//{
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			left = mid - 1;
//		}
//		else
//			return(mid);
//	}
//	return(-1);
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 7;
//	int ret = binary_seach(arr, k, left, right);
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("%d\n", ret);
//	system("pause");
//	return 0;
//}//二分法 函数形式
//
//
//
//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			if (i == 2)
//			{
//				printf("密码错误退出程序");
//				break;
//			}
//			printf("密码错误请重新输入：\n");
//
//		}
//	}
//	if (i == 3)
//		printf("密码错误，退出程序\n");
//
//	system("pause");
//	return 0;
//}三次密码输入场景