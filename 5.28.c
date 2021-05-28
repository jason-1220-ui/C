#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮��Ľ��
int left_judge(char arr[], char arr2[], int len) {//�����ж�
	int i = 0;
	int j = 0;
	for (int i = 0; i < len; i++) {//�����ַ����ĳ���
		char tmp = arr[0];
		for (int j = 0; j <= len - 1; j++) {
			arr[j - 1] = arr[j];
		}
		arr[j - 1] = tmp;
		if (strcmp(arr, arr2) == 0) {//�Ƚ��ַ��� arr �� arr2 �Ƿ���ͬ
			return 1;
		}
	}
	return -1;
}

int right_judge(char arr[], char arr2[], int len) {//�����ж�
	int i = 0;
	int j = 0;
	for (int i = 0; i < len; i++) {//�����ַ����ĳ���
		char tmp = arr[len - 1];
		for (int j = len - 2; j >= 0; j--) {
			arr[j + 1] = arr[j];
		}
		arr[0] = tmp;
		if (strcmp(arr, arr2) == 0) {//�Ƚ��ַ��� arr �� arr2 �Ƿ���ͬ
			return 1;
		}
	}
	return -1;
}

int main() {
	char arr[] = { 0 };
	char arr2[] = { 0 };
	printf("������ԭʼ�ַ���:a= ");
	scanf("%s", &arr);
	printf("������仯����ַ���:b= ");
	scanf("%s", &arr2);
	char c[10] = { 0 };
	strcpy(c, arr);
	if (strlen(arr) == strlen(arr2)) {
		int len = strlen(arr);
		int lret = left_judge(arr, arr2, len);
		int rret = right_judge(arr, arr2, len);
		if (lret == 1 || rret == 1) {
			printf("%s��%s���ɵ��ַ���\n", c, arr2);
		}
		else {
			printf("%s����%s���ɵ��ַ���\n", c, arr2);
		}
	}
	else {
		printf("%s����%s���ɵ��ַ���\n", c, arr2);
	}
	return 0;
}

//ʵ��һ������,���������ַ����е�k���ַ�
//void leftRound(char* arr, int time) {
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	time %= len;
//	for (i = 0; i < time; i++) {
//		tmp = arr[0];
//		for (j = 0; j < len - 1; j++) {
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//
//int main() {
//	char arr[] = "ABCD";
//	int k = 0;
//	printf("������������λ��:");
//	scanf("%d", &k);
//	leftRound(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}