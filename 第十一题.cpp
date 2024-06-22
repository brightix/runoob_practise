// No.11 古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子,
// 小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？

#include<stdio.h>

int main() {
	int a = 0, b = 1, sum = 1, n = 0;
	//判断输入区间
	do
	{
		printf("请输入你想到达的月份\n");
		scanf_s("%d", &n);
		if (n == 1)
		{
			printf("month     quantity\n");
			printf("1%17d\n", sum);
		}
		else if (n < 0)
		{
			printf("您输入的月份有误，请重试！\n");
		}
	} while (n < 1);

	//执行计算

	for (int i = 1; i < n; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("month     quantity\n");
		printf("%5d%13d\n", i, sum);
	}
	return 0;
}