#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��б��ͼ��
//��������:��������,һ������(2-20),��ʾ���������,Ҳ��ʾ�����б�ߵ�"*"������
//�������:���ÿ������,�����"*"��ɵ���б��
//����1,��ͳ��ʽ���
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
//����2,�ҹ������( * ���кź��кŵĹ�����i + j == n - 1)
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

//��б��ͼ��
//��������:��������,һ������(2-20),��ʾ���������,Ҳ��ʾ��ɷ�б�ߵ�"*"������
//�������:���ÿ������,�����"*"��ɵķ�б��
//����1,��ͳ��ⷽʽ
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		int i = 0;
//		for (i = 0; i < n; i++) {
//			//��ӡ�ո�
//			for (int j = 0; j < i; j++) {
//				printf(" ");
//			}
//			//��ӡ"*"
//			printf("*");
//			//ע�� * ����Ŀո�
//			for (int j = i + 1; j < n; j++) {
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//����2,�ҹ������( * ���кź��кŵĹ�����i==j)
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