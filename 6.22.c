#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���������ж�
//������������һ������һ������N��3��N��50��.�ڶ�������N���������ÿո�ָ�N������
//������������Ϊһ�У���������������sorted���������unsorted��
//int main() {
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (i > 0) {
//			if (arr[i] > arr[i - 1]) {
//				flag1 = 1;
//			}
//			else if (arr[i] < arr[i - 1]) {
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1 + flag2 > 1) {//flag1��flag2 ��Ϊ1�������
//		printf("unsorted\n");
//	}
//	else {
//		printf("sorted\n");
//	}
//	return 0;
//}

//������ɾ��ָ������
//������������һ������һ��������0��N��50��.�ڶ�������N�������������ÿո�ָ���N��������
//������������Ҫ����ɾ����һ������
//������������Ϊһ�У�ɾ��ָ������֮������С�
int main() {
	int n = 0;
	int arr[50] = { 0 };
	int m = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < n; i++) {
		if (arr[i] != m) {
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}