#include<stdio.h>

//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
//#define MAX_ROW 4
//#define MAX_COL 4
//int existNum(int arr[MAX_ROW][MAX_COL], int num) {
//	int x = 0;
//	int y = MAX_COL - 1;//�Ծ������Ϸ���Ԫ�ؿ�ʼ����
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
//	return 0;//1��ʾ������ڸ�������0��ʾ������
//}
//int main() {
//	int arr[MAX_ROW][MAX_COL] = {
//		1,2,8,9,
//		2,4,8,12,
//		4,7,10,13,
//		6,8,11,15 };
//	if (existNum(arr, 3)) {
//		printf("�ҵ��ˣ�\n");
//	}
//	else {
//		printf("û�ҵ���\n");
//	}
//	return 0;
//}