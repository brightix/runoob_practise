//No.8   ���9*9�ھ���

#include<stdio.h>
static void sheet99()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d x %d = %-3d ", j, i,i*j);
		}
		printf("\n");
	}
	return ;
}
int main() {
	sheet99();
	return 0;
}