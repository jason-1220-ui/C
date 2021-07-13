#include<stdio.h>

//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//#define MAX_ROW 4
//#define MAX_COL 4
//int existNum(int arr[MAX_ROW][MAX_COL], int num) {
//	int x = 0;
//	int y = MAX_COL - 1;//以矩阵右上方的元素开始遍历
//	while (x < MAX_ROW && y >= 0) {
//		if (arr[x][y] < num) {
//			x++;
//		}
//		else if (arr[x][y] > num) {
//			y--;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;//1表示数组存在该整数，0表示不存在
//}
//int main() {
//	int arr[MAX_ROW][MAX_COL] = {
//		1,2,8,9,
//		2,4,8,12,
//		4,7,10,13,
//		6,8,11,15 };
//	if (existNum(arr, 3)) {
//		printf("找到了！\n");
//	}
//	else {
//		printf("没找到！\n");
//	}
//	return 0;
//}