#define _CRT_SECURE_NO_WARNINGS 1
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int unsigned reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	unsigned int m = 0;
	int i = 0;
		for (i = 0; i < 32; i++)
	{
		arr[i] = ((value >> i) & 1);
		printf("%d", arr[i]);
		m+= arr[i] * pow(2, 32-i-1);
	}
	printf("\n");
	return m;
}
int main()
{
	unsigned int m = 0;
	unsigned  int ret = 0;
	scanf("%u", &m);
	ret = reverse_bit(m);
	printf("%u", ret);
	system("pause");
	return 0;
}

//
//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int m = 0;
	scanf("%d%d", &a, &b);
	m = a + (b - a)/2;
	printf("%d\n", m);
	system("pause");
	return 0;
}

//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡�(ʹ��λ����)
#include<stdio.h>
#include<stdlib.h>
void find(int arr[7])
{
	int i = 0;
	int m = 0;
	for (i = 0; i < 7; i++)
	{
		m = arr[i] ^ m;
	}
	printf("%d\n", m);
}
int main()
{
	int arr[7] = {1,2,3,1,2,3,4};
	find(arr);
	system("pause");
	return 0;
}

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

#include<stdio.h>
#include<stdlib.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
void revers(char* arr)
{
	char* start = arr;
	char* end = arr + my_strlen(arr) - 1;
	char* end2= arr + my_strlen(arr) - 1;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	while (end2 > end)
	{
		*end++;
		char temp = *end;
		*end= *end2;
		*end2 = temp;
		end2--;
	}
}
int main()
{
	char arr[] = "student a am i";
	revers(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}
