#include<stdio.h>
#include<stdbool.h>

//�����޵����渴�ӽ��ⷽ��������ڱ�׼�𰸣�
int main()
{
	while (1)
	{
		bool end = 0;
		int x = 0, y = 0, z = 0, l = 0, m = 0, s = 0, i = 0, j = 0, k = 0;

		printf("�����������������Կո�ֿ�\n");
		scanf_s("%d %d %d", &x, &y, &z);
		int arr[] = { x,y,z };
		int r = sizeof(arr) / sizeof(arr[0]);
		//�����ֵ
		for (i; i < r; i++)
		{
			for (j; j < r; j++) {
				if (arr[i] >= arr[j])
				{
					if (j != r - 1)
					{
						continue;
					}
					else
					{
						l = arr[i];
						end = true;
						break;
					}
				}
				else
					break;
			}
			j = 0;
			if (end)
				break;
		}
		//��ʼ��
		i = 0, j = 0, end = false;
		//����Сֵ
		for (i; i < r; i++)
		{
			for (j; j < r; j++)
			{
				if (arr[i] <= arr[j])
				{
					if (j != r - 1)
						continue;
					else
					{
						s = arr[i];
						end = true;
						break;
					}
				}
				if (arr[i] > arr[j])
					break;
			}
			j = 0;
			if (end)
				break;
		}
		//����ֵ
		for (k; k < 3; k++)
		{
			if (arr[k] != l && arr[k] != s)
				m = arr[k];
		}
		printf("%d %d %d\n", s, m, l);
	}
	return 0;
}