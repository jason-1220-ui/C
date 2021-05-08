#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
	printf("开始一局猜数字游戏：\n");
	int toGuess = rand() % 100 + 1;
	while (1) {
		printf("请输入一个整数[1,100]:");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("低了！\n");
		}
		else if (inputNum > toGuess) {
			printf("高了！\n");
		}
		else {
			printf("猜对了！\n");
			break;
		}
	}
}

int menu() {
	printf("=====================\n");
	printf("欢迎来到猜数字游戏！\n");
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("=====================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main() {
	srand((unsigned int) time(0));
	while (1) {
		int choice = menu();
		if (choice == 1) {
			game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("您的输入有误！\n");
		}

	}
	return 0;
}
