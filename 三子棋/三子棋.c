#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"

void menu()
{	

	printf("���澮������?\n����1����ʼ��Ϸ\t����0���˳���Ϸ\n");

}


int main()
{	
	int start = 0;	

	do {
		menu();
		scanf("%d", &start);
		switch (start)
		{
			case 1:
				game();
			case 0:
				break;
			default :
				break;
		}

	} while (start == 1);
	return 0;
}