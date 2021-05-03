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
	//memset的功能就是把一段内存上的每个字符都设置成一个具体的值
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	srand((unsigned int)time(0));
	int mineCount = 0;//随机产生10个位置作为地雷
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

//用themap 是希望这一函数能够同时具备打印两种地图的功能
void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);//%c 表示打印字符
		}
		printf("\n");
	}
}

void update(char showMap[MAX_ROW][MAX_COL], 
	char mineMap[MAX_ROW][MAX_COL],int row,int col) {
	int count = 0;//表示周围地雷的个数
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				continue;//此时r，c坐标超出棋盘的范围，直接跳过
			}
			if (r == row && c == col) {
				continue;//中间位置无需判断，直接下次循环
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = '0'+ count;
}
int main() {
	//1.创建地图并初始化
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		system("cls");
		print(showMap);//2.打印地图
		//printf("=================\n");
		//print(mineMap);//为了验证update 函数的正确性，先把地雷的布局打印出来
		int row = 0;//3.玩家输入坐标
		int col = 0;
		printf("请输入坐标(row,col):");
		scanf("%d %d", &row, &col);
		//进行合法性判定
		if (row<0 || row>MAX_ROW || col<0 || col>MAX_COL) {
			printf("您输入的坐标有误！请重新输入！\n");
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("您输入的位置已经翻开了！请重新输入！\n");
			continue;
		}
		//4.判定是否踩雷
		if (mineMap[row][col] == '1') {
			printf("您踩雷了！！！游戏结束！！\n");
			break;
		}
		//5.更新showMap,显示当前位置周围有几个雷
		update(showMap, mineMap, row, col);
		//6.进行游戏胜利的判定，统计当前一共翻开了多少个格子
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("恭喜您获胜了！！\n");
			break;
		}
	}
	return 0;
}