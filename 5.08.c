#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
	printf("��ʼһ�ֲ�������Ϸ��\n");
	int toGuess = rand() % 100 + 1;
	while (1) {
		printf("������һ������[1,100]:");
		int inputNum = 0;
		scanf("%d", &inputNum);
		if (inputNum < toGuess) {
			printf("���ˣ�\n");
		}
		else if (inputNum > toGuess) {
			printf("���ˣ�\n");
		}
		else {
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int menu() {
	printf("=====================\n");
	printf("��ӭ������������Ϸ��\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("=====================\n");
	printf("����������ѡ��");
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
			printf("������������\n");
		}

	}
	return 0;
}
