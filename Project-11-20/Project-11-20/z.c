#define _CRT_SECURE_NO_WARNINGS 1


//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
#include<stdlib.h>
#include<stdio.h>
void print(int arr[20][20], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			else if (i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}

		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("   %d", arr[i][j]);
		}
		printf("\n");

	}
}
int main()
{
	int arr[20][20] = { 0 };
	int input = 0;
	scanf("%d", &input);
	print(arr,input);
	system("pause");
	return 0;
}



//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int ret = 0;
	//��a b c d e��ֵ
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6; d++)
				{
					for (e = 1; e < 6; e++)
					{
						if (((b == 1 )+ (a == 1) == 1) && ((b == 2 )+(e == 4) == 1 )&&
							((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && 
							((e == 4) + (a == 1) == 1))
						{
							if (a*b*c*d*e == 120)//ȷ��a b c d������1 * 2 * 3 * 4 * 5=120
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;

}




//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char x = '0';
	for(x=65;x<=68;x++)
	{
		if ((x == 'C') && (x == 'D') && (x != 'D'))//A˵��Ϊ��
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'D') && (x != 'D'))//B˵��Ϊ��
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'C') && (x != 'D'))//C˵��Ϊ��
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'C') && (x == 'D'))//D˵��Ϊ��
		{
			printf("%c", x);
		}
		else
			continue;
	}
	system("pause");
	return 0;
}