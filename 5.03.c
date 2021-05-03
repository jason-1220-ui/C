#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	/*for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[row][col] = '*';
		}
	}*/
	//memset�Ĺ��ܾ��ǰ�һ���ڴ��ϵ�ÿ���ַ������ó�һ�������ֵ
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	srand((unsigned int)time(0));
	int mineCount = 0;//�������10��λ����Ϊ����
	while (mineCount < MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		mineCount++;
	}
}

//��themap ��ϣ����һ�����ܹ�ͬʱ�߱���ӡ���ֵ�ͼ�Ĺ���
void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);//%c ��ʾ��ӡ�ַ�
		}
		printf("\n");
	}
}

void update(char showMap[MAX_ROW][MAX_COL], 
	char mineMap[MAX_ROW][MAX_COL],int row,int col) {
	int count = 0;//��ʾ��Χ���׵ĸ���
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				continue;//��ʱr��c���곬�����̵ķ�Χ��ֱ������
			}
			if (r == row && c == col) {
				continue;//�м�λ�������жϣ�ֱ���´�ѭ��
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = '0'+ count;
}
int main() {
	//1.������ͼ����ʼ��
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		system("cls");
		print(showMap);//2.��ӡ��ͼ
		//printf("=================\n");
		//print(mineMap);//Ϊ����֤update ��������ȷ�ԣ��Ȱѵ��׵Ĳ��ִ�ӡ����
		int row = 0;//3.�����������
		int col = 0;
		printf("����������(row,col):");
		scanf("%d %d", &row, &col);
		//���кϷ����ж�
		if (row<0 || row>MAX_ROW || col<0 || col>MAX_COL) {
			printf("������������������������룡\n");
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("�������λ���Ѿ������ˣ����������룡\n");
			continue;
		}
		//4.�ж��Ƿ����
		if (mineMap[row][col] == '1') {
			printf("�������ˣ�������Ϸ��������\n");
			break;
		}
		//5.����showMap,��ʾ��ǰλ����Χ�м�����
		update(showMap, mineMap, row, col);
		//6.������Ϸʤ�����ж���ͳ�Ƶ�ǰһ�������˶��ٸ�����
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("��ϲ����ʤ�ˣ���\n");
			break;
		}
	}
	return 0;
}