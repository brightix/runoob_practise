#include<stdio.h>

int main() {                         //第一题
	int i, j, k;
	int sum = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			if (i == j)
				continue;
			for (k = 1; k < 5; k++)
			{
				if (i == j || i == k || j == k)
					continue;
				printf("%d%d%d\n", i, j, k);
				sum++;
			}
		}
	}
	printf("总共有%d种可能",sum);
	return 0;
}