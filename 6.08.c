#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������:һ��,�ĸ�����,��һ������ʾС�����е��·��۸�,�ڶ����͵����������ֱ��ʾ������·�,���������,
//���ĸ�������ʾ�Ƿ����Żݾ�(��1��ʾ���Żݾ�,0��ʾ���Żݾ�)
//�������:һ��,С��ʵ�ʻ���Ǯ��(��������λС��)
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

//��������:��һ������һ������,��ʾn��ѧ��(>=5),�ڶ�������n��ѧ���ɼ�(������ʾ,��Χ0-100),�ÿո�ֿ�
//�������:һ��,����ɼ���ߵ�ǰ���,�ÿո�ֿ�
//����1(ʹ��ð������Գɼ���������)
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int score[1024] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &score[i]);
//	}
//	//�����гɼ���������(ð������)
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

//����2(ʹ�ÿ⺯���Գɼ���������)
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
	//ʹ�ÿ⺯����������
	int j = 0;
	qsort(score, n, 4, cmp_int);
	for (int i = 0; i < 5; i++) {
		printf("%d ", score[--n]);
	}
	return 0;
}