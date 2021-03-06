#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 3
#define MAX_COL 3//这里的3称为magic number


void init(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
	srand((unsigned  int) time(0));//设计随机种子
}
void print(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_COL; col++) {
			printf(" %c |", chessBoard[row][col]);//%c 打印字符
		}
		printf("\n+---+---+---+\n");
	}
}
void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("玩家落子：\n");
	while (1) {
		printf("请输入坐标(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);//要进行合法性检验，判定用户输入的内容是否合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			//不合法要让用户重新输入
			printf("您输入的坐标非法！请重新输入！");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("您输入的位置已经有子了,请重新输入\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col <= MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' '
		&&chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
			return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&&chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	if (isFull(chessBoard)) {
		return 'q';
	}
	return ' ';//胜负未分
}
int main() {
	char chessBoard[MAX_ROW][MAX_COL];
	init(chessBoard);//对棋盘进行初始化
	char winner = ' ';
	while (1) {
		system("cls");//打印棋盘之前，先清屏，去掉上一轮的打印
		print(chessBoard);//打印棋盘
		playerMove(chessBoard);//玩家落子
		winner = isGameOver(chessBoard);//判定胜负
		if (winner != ' ') {
			break;
		}
		computerMove(chessBoard);//电脑落子
		winner = isGameOver(chessBoard);//判定胜负
		if (winner != ' ') {
			break;
		}
	}
	print(chessBoard);
	if (winner == 'x') {
		printf("恭喜你赢了！\n");
	}
	else if (winner == 'o') {
		printf("你连电脑都下不过！\n");
	}
	else {
		printf("你和电脑五五开！\n");
	}
	return 0;
}