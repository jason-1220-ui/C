#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//��������:ÿ������3��a,b,c(0<a,b,c<1000),��Ϊ�����ε�������,�ÿո�ֿ�
//�������:����ܹ���������,�ȱ����������Equilateral triangle!�������������Isosceles triangle!
//������������� Ordinary triangle!,��֮��� Not a triangle!
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

//����һԪ���η���
//��������:һ�а�������������a,b,c,��һ���ո�ָ�,��ʾһԪ���η���ax^2+bx+c=0��ϵ��
//�������:��a=0,���"Not quadratic equation!";��a!=0,��������
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

//��������:��������,һ������������,�ֱ��ʾ��ݺ��·�,�ÿո�ָ�
//�������:���ÿ������,���Ϊһ��,һ������,��ʾ��һ��������ж�����
int main() {
	int year = 0;
	int month = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &year, &month) != EOF) {
		int day = days[month - 1];
		//�ж��Ƿ�������,���������,2�¶�һ��
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			if (month == 2) {
				day += 1;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}