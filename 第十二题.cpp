//No.12   判断 101 到 200 之间的素数。

#include<stdio.h>
int main()
{
	int i,j;
	printf("101到200的素数有\n");
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			if (i % j != 0 && j == i - 1)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}