#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。 
//非递归实现
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int s = 0;
	int i = 0;
	if (n <= 2)
		return 1;
	else
	{
		for (i = 3; i <= n; i++)
		{
			s = a + b;
			a = b;
			b = s;
		}
		return s;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//递归实现
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//编写一个函数实现n^k，使用递归实现
#include<stdio.h>
#include<stdlib.h>
int math(int n,int k)
{
	if (n > 1 && k > 0)
	{
		return n * math(n, k-1);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	ret = math(n,k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


//
// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	if (n > 9)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char *string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);
	}
	printf("%c", string);
}
int main()
{
	char *p = "abcde";
    reverse_string(p);
	system("pause");
	return 0;
}

//递归和非递归分别实现strlen 
//非递归
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char* arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		i++;
		arr++;
	}
	return i;
}
int main()
{
	char* p = "abcdef";
	int ret = 0;
	ret = my_strlen(p);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//递归
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	else
		return 0;
}
int main()
{
	char* p = "abcdef";
	int ret = 0;
	ret = my_strlen(p);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//递归和非递归分别实现求n的阶乘
//非递归实现
#include<stdio.h>
#include<stdlib.h>
void fac(int n)
{
	int i = 1;
	int j = 1;
	while (j <= n)
	{
		
		i = i * j;
		j++;
		
	}
	printf("%d\n", i);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	fac(n);
	system("pause");
	return 0;
}
//递归实现
#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



//递归方式实现打印一个整数的每一位
#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	n = n % 10;
	printf("%d ", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	
	system("pause");
	return 0;
}