//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

#include<stdio.h>
//int main() {
//	int a,i;
//	int u = 0, t = 0, h = 0;
//	printf("水仙花数有\n");
//	for (i = 100; i < 1000; i++)
//	{
//		u = i % 10, t = i % 100 / 10, h = i % 1000 / 100;
//		if (u * u * u + t * t * t + h * h * h == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//14题  将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

int main() {
	int x = 0,i;
	printf("请输入一个数\n");
	scanf_s("%d", &x);
	printf("%d=", x);
	for (i = 2; i <= x; i++)
	{
		if (x % i == 0)
		{
			x = x / i;
			printf("%d*", i);
			i = 1;
		}
		else if(x%i!=0&&x==i+1)
		{
			printf("%d", x);
			break;
		}
	}
	return 0;
}