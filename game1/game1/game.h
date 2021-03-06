#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//声明
void InitBoard(char board[ROW][COL], int row,int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋

//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局 - 'Q'
//继续 - 'C'
char IsWin(char board[ROW][COL], int row, int col);//判断游戏状态