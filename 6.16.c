#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ͼ��
//��������:��������,һ������(2-20)
//�������:���ÿ������,�����"*"��ɵļ���
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		//��n��
		for (int i = n; i > 0; i--) {
			for (int j = 0; j < 2*i; j++) {
				printf(" ");
			}
			for (int j = 0; j <= n - i; j++) {
				printf("*");
			}
			printf("\n");
		}
		//��n+1��
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

//K��ͼ��
//��������:��������,һ������(2-20)
//�������:���ÿ������,�����"*"��ɵ�K��,ÿ��"*"������һ���ո�
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = n; i >= 0; i--) {//�ϰ벿�ֵ�һ��*�ĸ�������n������
//			for (int j = 0; j <= i; j++) {
//				printf("* ");
//			}
//			for (int j = i; j >= 0; j--) {
//				printf(" ");// * ���滹�пո�
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= n; i++) {//�°벿�ֵ�һ����Զ��1
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