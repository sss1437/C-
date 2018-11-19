#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("********************\n");
	printf("*******play :1******\n");
	printf("*******exit :0******\n");
	printf("********************\n");
}
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		if (i != 2)
		{
			printf("___|___|___\n");
		}
		else
			printf("   |   |   \n");
	}
}//搭建数组框架
void init_board(char board[ROW][COL], int row, int col)
{
	memset(board,' ',row*col * sizeof(char));//初始化数组
}
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		x--;
		y--;
		if (x >=0 && x < row&&y>=0 && y < col)
		{
			if (' ' == board[x][y])
			{
				board[x][y] = 'X';
				break;
			}
			else
				printf("坐标被占用\n");
		}
		else
			printf("坐标输入有误\n");
	}
}
void computer_move(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % 3 ;
		int y = rand() % 3 ;
		if (' ' == board[x][y])
		{
			board[x][y] = '*';
			break;
		}
	}

}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (' ' == board[i][j])
				return ' ';
		}
	}
	return 'k';
}
int win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	char full = '0';
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[1][1];
	full = is_full(board, ROW, COL);
	if (full == ' ')
		return ' ';
	else
		return 'k';
	
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		ret = win(board, ROW, COL);
		display_board(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
	}
	if (ret == 'X')
		printf(" 玩家赢\n");
	else if (ret == '*')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
