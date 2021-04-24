#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//#define MAX_ROW 3
//#define MAX_COL 3//�����3��Ϊmagic number
//
//
//void init(char chessBoard[MAX_ROW][MAX_COL]) {
//	for (int row = 0; row < MAX_ROW; row++) {
//		for (int col = 0; col < MAX_COL; col++) {
//			chessBoard[row][col] = ' ';
//		}
//	}
//}
//void print(char chessBoard[MAX_ROW][MAX_COL]) {
//	printf("+---+---+---+\n");
//	for (int row = 0; row < MAX_ROW; row++) {
//		printf("|");
//		for (int col = 0; col < MAX_COL; col++) {
//			printf(" %c |", chessBoard[row][col]);//%c ��ӡ�ַ�
//		}
//		printf("\n+---+---+---+\n");
//		printf("\n");
//	}
//}
//void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
//	printf("������ӣ�\n");
//	while (1) {
//		printf("����������(row col):");
//		int row = 0;
//		int col = 0;
//		scanf("%d %d", &row, &col);//Ҫ���кϷ��Լ��飬�ж��û�����������Ƿ�Ϸ�
//		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//			//���Ϸ�Ҫ���û���������
//			printf("�����������Ƿ������������룡");
//			continue;
//		}
//		if (chessBoard[row][col] != ' ') {
//			printf("�������λ���Ѿ�������,����������\n");
//			continue;
//		}
//		chessBoard[row][col] = 'x';
//		break;
//	}
//}
//void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
//	while (1) {
//		int row = rand() % MAX_ROW;
//		int col = rand() % MAX_COL;
//		if (chessBoard[row][col] != ' ') {
//			continue;
//		}
//		chessBoard[row][col] = 'o';
//		break;
//	}
//}
//int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
//	for (int row = 0; row < MAX_ROW; row++) {
//		for (int col = 0; col < MAX_COL; col++) {
//			if (chessBoard[row][col] == ' ') {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//char isGameOver(char chessBoard[MAX_ROW][MAX_COL]) {
//	for (int row = 0; row < MAX_ROW; row++) {
//		if (chessBoard[row][0] != ' '
//			&& chessBoard[row][0] == chessBoard[row][1]
//			&& chessBoard[row][0] == chessBoard[row][2]) {
//			return chessBoard[row][0];
//		}
//	}
//	for (int col = 0; col <= MAX_COL; col++) {
//		if (chessBoard[0][col] != ' '
//			&& chessBoard[0][col] == chessBoard[1][col]
//			&& chessBoard[0][col] == chessBoard[2][col]) {
//			return chessBoard[0][col];
//		}
//	}
//	if (chessBoard[0][0] != ' '
//		&&chessBoard[0][0] == chessBoard[1][1]
//		&& chessBoard[0][0] == chessBoard[2][2]) {
//			return chessBoard[0][0];
//	}
//	if (chessBoard[0][2] != ' '
//		&&chessBoard[0][2] == chessBoard[1][1]
//		&& chessBoard[0][2] == chessBoard[2][0]) {
//		return chessBoard[0][2];
//	}
//	if (isFull(chessBoard)) {
//		return 'q';
//	}
//	return ' ';//ʤ��δ��
//}
//int main() {
//	char chessBoard[MAX_ROW][MAX_COL];
//	init(chessBoard);//�����̽��г�ʼ��
//	char winner = ' ';
//	while (1) {
//		print(chessBoard);//��ӡ����
//		playerMove(chessBoard);//�������
//		winner = isGameOver(chessBoard);//�ж�ʤ��
//		if (winner != ' ') {
//			break;
//		}
//		computerMove(chessBoard);//��������
//		winner = isGameOver(chessBoard);//�ж�ʤ��
//		if (winner != ' ') {
//			break;
//		}
//	}
//	if (winner == 'x') {
//		printf("��ϲ��Ӯ�ˣ�\n");
//	}
//	else if (winner == 'o') {
//		printf("�������Զ��²�����\n");
//	}
//	else {
//		printf("��͵������忪��\n");
//	}
//	return 0;
//}


void bubbleSort(int arr[],int size) {
	int bound = 0;//bound��ʾ����������ʹ���������ķֽ���
	//[0,bound)��ʾ���������䣬[bound,size)��ʾ����������
	for (bound = 0; bound < size; bound++) {//���ƺ����ıȽ�����Ԫ�صıȽ�����
		for (int cur = size - 1; cur > bound;cur--) {//��������
			if (arr[cur - 1] > arr[cur]) {//�����������������ͽ��н���
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int main() {
	int arr[6] = { 9,5,2,7,3,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}