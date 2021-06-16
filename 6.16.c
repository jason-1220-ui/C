#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//箭形图案
//输入描述:多组输入,一个整数(2-20)
//输出描述:针对每行输入,输出用"*"组成的箭形
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		//上n行
		for (int i = n; i > 0; i--) {
			for (int j = 0; j < 2*i; j++) {
				printf(" ");
			}
			for (int j = 0; j <= n - i; j++) {
				printf("*");
			}
			printf("\n");
		}
		//下n+1行
		for (int i = n + 1; i > 0; i--) {
			for (int j = 0; j < 2*(n + 1 - i); j++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

//K形图案
//输入描述:多组输入,一个整数(2-20)
//输出描述:针对每行输入,输出用"*"组成的K形,每个"*"后面有一个空格
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = n; i >= 0; i--) {//上半部分第一行*的个数是由n决定的
//			for (int j = 0; j <= i; j++) {
//				printf("* ");
//			}
//			for (int j = i; j >= 0; j--) {
//				printf(" ");// * 后面还有空格
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= n; i++) {//下半部分第一行永远是1
//			for (int j = 0; j <= i; j++) {
//				printf("* ");
//			}
//			for (int j = i; j < n; j++) {
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}