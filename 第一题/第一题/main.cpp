#include<stdio.h>

int main() {                         //��һ��
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
	printf("�ܹ���%d�ֿ���",sum);
	return 0;
}