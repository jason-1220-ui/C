#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//直角三角形图案
//输入描述:多组输入,一个整数(2-20),表示直角三角形直角边的长度,即*的数量,也表示输出行数
//输出描述:针对每行输入,输出用*组成的对应长度的直角三角形,每个*后面有一个空格
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		for (i = 1; i <= n; i++) {
//			int j = 0;
//			for (j = 1; j <= i; j++) {
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//带空格的直角三角形
//输入描述:多组输入,一个整数(2-20),表示直角三角形直角边的长度,即*的数量,也表示输出行数
//针对每行输入,输出用*组成的对应长度的直角三角形,每个*后面有一个空格
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		for (i = 0; i < n; i++) {//控制行数
			int j = 0;//空格
			for (j = 0; j < n - i - 1; j++) {
				printf(" ");
			}
			for (j = 0; j <= i; j++) {
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}