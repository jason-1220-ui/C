#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//输入描述:一行,四个数字,第一个数表示小明看中的衣服价格,第二个和第三个整数分别表示当天的月份,当天的日期,
//第四个整数表示是否有优惠卷(用1表示有优惠卷,0表示无优惠卷)
//输出描述:一行,小明实际花的钱数(仅保留两位小数)
//int main() {
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf%d%d%d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11) {
//		price *= 0.7;
//		if (flag == 1) {
//			price -= 50;
//		}
//	}
//	else if (m == 12 && d == 12) {
//		price *= 0.8;
//		if (flag == 1) {
//			price -= 50;
//		}
//	}
//	if (price < 0.0) {
//		price = 0.0;
//	}
//	printf("%.2f\n", price);
//	return 0;
//}

//输入描述:第一行输入一个整数,表示n个学生(>=5),第二行输入n个学生成绩(整数表示,范围0-100),用空格分开
//输出描述:一行,输出成绩最高的前五个,用空格分开
//代码1(使用冒泡排序对成绩进行排序)
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int score[1024] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &score[i]);
//	}
//	//对所有成绩进行排序(冒泡排序)
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (score[j] < score[j + 1]) {
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

//代码2(使用库函数对成绩进行排序)
int cmp_int(const void*e1, const void*e2) {
	return *(int*)e1 - *(int*)e2;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int score[1024] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	//使用库函数进行排序
	int j = 0;
	qsort(score, n, 4, cmp_int);
	for (int i = 0; i < 5; i++) {
		printf("%d ", score[--n]);
	}
	return 0;
}