#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//输入描述:每行输入3个a,b,c(0<a,b,c<1000),作为三角形的三个边,用空格分开
//输出描述:如果能构成三角形,等边三角形输出Equilateral triangle!等腰三角形输出Isosceles triangle!
//其余三角形输出 Ordinary triangle!,反之输出 Not a triangle!
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if (a + b > c && a + c > b &&b + c > a) {
//			if (a == b && b == c) {
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b || b != c) || (a == c && a != b) || (b == c && c != a)) {
//				printf("Isosceles triangle!\n");
//			}
//			else {
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else {
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//计算一元二次方程
//输入描述:一行包含三个浮点数a,b,c,以一个空格分隔,表示一元二次方程ax^2+bx+c=0的系数
//输出描述:若a=0,输出"Not quadratic equation!";若a!=0,分情况输出
//int main() {
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF) {
//		if (a != 0) {
//			float disc = b * b - 4 * a*c;
//			if (disc > 0.0) {
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//			}
//			else if (disc < 0.0) {
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-disc) / (2 * a),
//					(-b) / (2 * a), sqrt(-disc) / (2 * a));
//			}
//			else {
//				printf("x1=x2=%.2f\n", (-b) / (2 * a));
//			}
//		}
//		else {
//			printf("Not quadratic equation!\n");
//		}
//	}
//	return 0;
//}

//输入描述:多组输入,一行有两个整数,分别表示年份和月份,用空格分隔
//输出描述:针对每组输入,输出为一行,一个整数,表示这一年这个月有多少天
int main() {
	int year = 0;
	int month = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &year, &month) != EOF) {
		int day = days[month - 1];
		//判断是否是闰年,如果是闰年,2月多一天
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			if (month == 2) {
				day += 1;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}