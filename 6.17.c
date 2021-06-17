#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//正斜线图案
//输入描述:多组输入,一个整数(2-20),表示输出的行数,也表示组成正斜线的"*"的数量
//输出描述:针对每行输入,输出用"*"组成的正斜线
//代码1,传统方式求解
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		for (i = 0; i < n; i++) {
//			int j = 0;
//			for (j = 0; j < n - i - 1; j++) {
//				printf(" ");
//			}
//			printf("*");
//			for (j = n - i; j < n; j++) {
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//代码2,找规律求解( * 的行号和列号的规律是i + j == n - 1)
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		for (i = 0; i < n; i++) {
			int j = 0;
			for (j = 0; j < n; j++) {
				if (i + j == n - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

//反斜线图案
//输入描述:多组输入,一个整数(2-20),表示输出的行数,也表示组成反斜线的"*"的数量
//输出描述:针对每行输入,输出用"*"组成的反斜线
//代码1,传统求解方式
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		for (i = 0; i < n; i++) {
//			//打印空格
//			for (int j = 0; j < i; j++) {
//				printf(" ");
//			}
//			//打印"*"
//			printf("*");
//			//注意 * 后面的空格
//			for (int j = i + 1; j < n; j++) {
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//代码2,找规律求解( * 的行号和列号的规律是i==j)
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		for (i = 0; i < n; i++) {
//			int j = 0;
//			for (j = 0; j < n; j++) {
//				if (i == j) {
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