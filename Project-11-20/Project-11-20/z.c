#define _CRT_SECURE_NO_WARNINGS 1


//在屏幕上打印杨辉三角。
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



//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
	//给a b c d e赋值
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
							if (a*b*c*d*e == 120)//确定a b c d的名次1 * 2 * 3 * 4 * 5=120
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




//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char x = '0';
	for(x=65;x<=68;x++)
	{
		if ((x == 'C') && (x == 'D') && (x != 'D'))//A说的为假
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'D') && (x != 'D'))//B说的为假
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'C') && (x != 'D'))//C说的为假
		{
			printf("%c", x);
		}
		else if ((x != 'A') && (x == 'C') && (x == 'D'))//D说的为假
		{
			printf("%c", x);
		}
		else
			continue;
	}
	system("pause");
	return 0;
}