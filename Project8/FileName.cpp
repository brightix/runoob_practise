#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // 引入布尔类型头文件

//int main() {
//    int n = 3;
//    int arr[n] = { 1,2,3 };
//    for (int i=0; i <= 2; i++)
//        printf("%d\n", arr[i]);
//    return 0;
//}


//int main() {                         //第一题
//	int i, j, k;
//	int sum = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			if (i == j)
//				continue;
//			for (k = 1; k < 5; k++)
//			{
//				if (i == j || i == k || j == k)
//					continue;
//				printf("%d%d%d\n", i, j, k);
//				sum++;
//			}
//		}
//	}
//	printf("总共有%d种可能",sum);
//	return 0;
//}



//void findInterval(double I,int boundaries[]) {         //第二题
//	double B = 0;
//	double bonus1, bonus2, bonus4, bonus6, bonus10;
//	bonus1 = boundaries[0] * 0.1;
//	bonus2 = bonus1 + (boundaries[1] - boundaries[0]) * 0.075;
//	bonus4 = bonus2 + (boundaries[2] - boundaries[1]) * 0.05;
//	bonus6 = bonus4 + (boundaries[3] - boundaries[2]) * 0.03;
//	bonus10 = bonus6 + (boundaries[4] - boundaries[3]) * 0.015;
//	if (I <= boundaries[0]) {
//		B = I * 0.1;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	else if (boundaries[0] < I && I <= boundaries[1]) {
//		B = bonus1 + (I - boundaries[0]) * 0.075;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	else if (boundaries[1] < I && I <= boundaries[2]) {
//		B = bonus2 + (I - boundaries[1]) * 0.05;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	else if (boundaries[2] < I && I <= boundaries[3]) {
//		B = bonus4 + (I - boundaries[2]) * 0.03;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	else if (boundaries[3] < I && I <= boundaries[4]) {
//		B = bonus6 + (I - boundaries[3]) * 0.015;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	else if (boundaries[4] <= I ) {
//		B = bonus10 + (I - boundaries[4]) * 0.01;
//		printf("奖金可获得%.3lf\n", B);
//	}
//	return;
//}
//int main() {
//	double I = 0,B = 0;
//	int boundaries[5] = { 100000,200000,400000,600000,1000000 };
//	printf("请输入你的利润\n");
//	scanf_s("%lf", &I);
//	findInterval(I, boundaries);
//	return 0;
//}




int main() {
	int y=0, m=0, d=0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("输入年：\n");
	scanf_s("%d",&y);
	printf("输入月：\n");
	scanf_s("%d", &m);
	printf("输入日：\n");
	scanf_s("%d", &d);
	int num = 0;
	int i = 0;
	if (y % 4 == 0) {
		month[1] = 29;
		for (i; i < m-1; i++) {
			num += month[i];
		}
		num += d;
		printf("该日期是%d的第%d天", y, num);
	}
	else {

		for (i; i < m-1; i++) {
			num += month[i];
		}
		num += d;
		printf("该日期是%d的第%d天", y, num);
	}
	return 0;
}
