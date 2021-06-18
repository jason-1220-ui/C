#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//X形图案
//输入描述：多组输入，一个整数（2-20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度
//输出描述：针对每行输入，输出用“*”组成的X形图案
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < n; j++) {
//				if (i == j) {
//					printf("*");
//				}
//				else if (i + j == n - 1) {//因为行和列是从0开始的
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//空心正方形
//输入描述:多组输入,一个整数(3-20),表示输出的行数,也表示组成正方形的"*"的数量
//输出描述:针对每行输入,输出用"*"组成的"空心"正方形,每个"*"后面有一个空格
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < n; j++) {
//				if (i == 0 || i == n - 1) {
//					printf("* ");
//				}
//				else if (j == 0 || j == n - 1) {
//					printf("* ");
//				}
//				else {
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//空心三角形图案
//输入描述:多组输入,一个整数(3-20),表示输出的行数,也表示组成三角形边的"*"的数量
//输出描述:针对每行输入,输出用"*"组成的"空心"三角形,每个"*"后面有一个空格
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		for (i = 1; i <= n; i++) {
			int j = 0;
			for (j = 1; j <= n; j++) {
				if ((i == j) || (j == 1) || (i == n)) {
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}