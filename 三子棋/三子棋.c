#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"

void menu()
{	

	printf("想玩井字棋吗?\n按‘1’开始游戏\t按‘0’退出游戏\n");

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