#include<stdio.h>
int main() {							//������
	int y = 0, m = 0, d = 0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("�����꣺\n");
	scanf_s("%d", &y);
	printf("�����£�\n");
	scanf_s("%d", &m);
	printf("�����գ�\n");
	scanf_s("%d", &d);
	int num = 0;
	int i = 0;
	if (y % 4 == 0) {
		month[1] = 29;
		for (i; i < m - 1; i++) {
			num += month[i];
		}
		num += d;
		printf("��������%d�ĵ�%d��", y, num);
	}
	else {

		for (i; i < m - 1; i++) {
			num += month[i];
		}
		num += d;
		printf("��������%d�ĵ�%d��", y, num);
	}
	return 0;
}