#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<time.h>
#include<stdlib.h>

void iniChess(char chess_[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			chess_[i][j] = ' ';
		}
	}
}

void displayBoard(char chess_[ROW][COL], int row, int col)
{	
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{	
			//打印一行的棋
			printf(" %c ", chess_[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}				

		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
	printf("\n");
}

void playerDo(char chess_[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("你的回合！\n");

	while (1)
	{	
		printf("下哪儿？ 例如(1 1)>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && chess_[x-1][y-1]==' ')
		{
			chess_[x - 1][y - 1] = '*';
			printf("\n");
			break;
		}
		else
			printf("\a走错啦，重新再下一次吧\n\n");
	}
}

void computerDo(char chess_[ROW][COL], int row, int col)
{
	srand(time(NULL));
	printf("电脑下棋 >\n");
	while (1)
	{
		int random_row = rand()%row;
		int random_col = rand()%col;
		if (chess_[random_row][random_col] == ' ')
		{
			chess_[random_row][random_col] = '#' ;
			break;
		}
	}
}

char isWin(char chess_[ROW][COL], int row, int col)
{
	int i,j;
	//判断行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chess_[i][j] == chess_[i][j + 1] && chess_[i][j + 1] == chess_[i][j + 2] && chess_[i][j] != ' ')
				return chess_[i][j];
		}
	}
	//判断列
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chess_[i][j] == chess_[i+1][j] && chess_[i+1][j] == chess_[i + 2][j] && chess_[i][j] != ' ')
				return chess_[i][j];
		}
	}
	//判断对角线
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chess_[i][j] == chess_[i + 1][j + 1] && chess_[i + 1][j + 1] == chess_[i + 2][j + 2] && chess_[i][j] != ' ')
				return chess_[i][j];
		}
	}

	//游戏继续
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (chess_[i][j]==' ')
				return 'c';
		}
	}
	//平局
	return 'q';
}

void game() {
	char chess[ROW][COL] = {0};
	//初始化棋盘
	iniChess(chess);
	displayBoard(chess, ROW, COL);
	while (1)
	{
		//玩家下
		playerDo(chess,ROW,COL);
		if (isWin(chess, ROW, COL)=='*')//判断玩家是否获胜
		{	
			displayBoard(chess, ROW, COL);
			printf("\a你赢了！\n");
			break;
		}
		displayBoard(chess, ROW, COL);
		
		//电脑下
		computerDo(chess,ROW,COL);
		if (isWin(chess, ROW, COL) == '#')//判断电脑是否获胜
		{			
			displayBoard(chess, ROW, COL);
			printf("\a电脑获胜！\n");
			break;
		}
		displayBoard(chess, ROW, COL);
		if (isWin(chess, ROW, COL) == 'q')//判断是否平局
		{
			printf("\a平局！\n");
			displayBoard(chess, ROW, COL);
			break;
		}
	}
	printf("\n\n");
}