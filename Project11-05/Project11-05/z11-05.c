//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, t;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}
    if (a < c)
	{
		t = c;
	    c = a;
	    a = t;
    }
	if (b < c)
	{
		t = c;
		c = b;
		b = t;
	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}


