#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
//�ǵݹ�ʵ��
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

//�ݹ�ʵ��
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

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
//�ǵݹ�
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

//�ݹ�
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ǵݹ�ʵ��
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
//�ݹ�ʵ��
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



//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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