#define _CRT_SECURE_NO_WARNINGS 1


//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
#include<stdio.h>
#include<stdlib.h>
binary1(int num, int arr[])
{
	int i = 0;
	int j = 0;
	int k1 = 0;
	int k2 = 0;
	int a[16] = { 0 };
	int b[16] = { 0 };

	for (i = 0; i < 32; i++)
	{
		j = (num >> i) & 1;
		if (i % 2)
		{
			arr[i] = j;//��ż��
		}
		else
			arr[i] = j;//������
	}
	for (i = 0; i < 16; i++)
	{
		if (i % 2)
		{
			a[k1++] = arr[i];
		}
		else
			b[k2++] = arr[i];
	}
	printf("ż��λ��");
	for (k1 = 15; k1 >= 0; k1--)
	{
		printf("%d", a[k1]);
	}
	printf("\n");
	printf("ż��λ��");
	for (k2 = 15; k2 >= 0; k2--)
	{
		printf("%d", b[k2]);
	}

}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int arr[32] = { 0 };
	binary1(num, arr);
	system("pause");
	return 0;
}










