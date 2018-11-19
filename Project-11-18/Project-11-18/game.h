#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3
#define COL 3
void menu();
void game();
void display_board(char board[ROW][COL], int row, int col);
void init_board(char board[ROW][COL], int row, int col);
void player_move(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
int is_full(char board[ROW][COL], int row, int col);
int win(char board[ROW][COL], int row, int col);
#endif//__GAME_H__