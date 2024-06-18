#include<stdio.h>
int main() {							//第四题
	int y = 0, m = 0, d = 0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("输入年：\n");
	scanf_s("%d", &y);
	printf("输入月：\n");
	scanf_s("%d", &m);
	printf("输入日：\n");
	scanf_s("%d", &d);
	int num = 0;
	int i = 0;
	if (y % 4 == 0) {
		month[1] = 29;
		for (i; i < m - 1; i++) {
			num += month[i];
		}
		num += d;
		printf("该日期是%d的第%d天", y, num);
	}
	else {

		for (i; i < m - 1; i++) {
			num += month[i];
		}
		num += d;
		printf("该日期是%d的第%d天", y, num);
	}
	return 0;
}