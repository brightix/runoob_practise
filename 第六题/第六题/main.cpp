//������   ��* �������ĸC��ͼ����

#include<stdio.h>

int addShape(int x) {
	int i = 0;
	for (i ; i < x; i++)
		printf("*");
	return x;
}

int main()
{
	int j = 0;
	int a = 0, b = 0, c = 0, d = 0;
	
	//printf("����ÿ���м��Ų����Կո�ֿ�\n");
	//scanf_s("%d %d %d %d", &a, &b, &c, &d);
	a = 4, b= 1, c = 1, d = 4;
	int arr[] = { a,b,c,d };
	int r = sizeof (arr) / sizeof (arr[0]);
	for (j ; j < r; j++)
	{
		addShape(arr[j]);
		printf("\n");
	}
	return 0;
}

//�ڶ������취
//int main() {
//	printf("             *******         \n");
//	printf("         ****************    \n");
//	printf("      ****              **** \n");
//	printf("    ***                    **\n");
//	printf("   ***                       \n");
//	printf("  ***                        \n");
//	printf("  ***	                     \n");
//	printf("  ***	                     \n");
//	printf("  ***	                     \n");
//	printf("   ***	                     \n");
//	printf("    ****                    *\n");
//	printf("    *****               **** \n");
//	printf("        *****************    \n");
//	printf("           **********        \n");
//}