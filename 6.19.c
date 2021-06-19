#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数字三角形
//输入描述:多组输入,一个整数(3-20),表示数字三角形边的长度,即数字的数量,也表示输出行数
//输出描述:针对每行输入,输出用数字组成的对应长度的数字三角形,每个数字后面有一个空格
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		for (i = 1; i <= n; i++) {
			int j = 0;
			for (j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}

//公务员面试
//输入描述:一行,输入7个整数(0-100),代表7个成绩,用空格分隔
//输出描述:一行,输出去掉最高分和最低分的平均成绩,小数点后保留2位,每行输出后换行
//int main() {
//	int i = 0;
//	int sum = 0;
//	int min = 100;//假设最小值是100
//	int max = 0;//假设最大值是0
//	int score = 0;
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &score);//输入
//		sum += score;//求和
//		if (score > max) {
//			max = score;//求最大值
//		}
//		if (score < min) {
//			min = score;//求最小值
//		}
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}