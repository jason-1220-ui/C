#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��һ�֣������Ͻ�Ԫ�ؿ�ʼ����
//int findNum(int arr[3][3], int row, int col, int b) {
//	int x = 0;
//	int y = 0;//�Ծ������Ϸ�Ԫ�ؿ�ʼ����
//	while (x < row && y <col) {
//		if (arr[x][y] < b) {
//			x++,y++;
//		}
//		else if (arr[x][y] > b) {
//			y--;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int a[3][3] = { {1,3,5},{3,5,7},{5,7,9} };
//	if (findNum(a, 3, 3, 6)) {
//		printf("�ҵ���!\n");
//	}
//	else {
//		printf("û�ҵ�!\n");
//	}
//	return 0;
//}

//�ڶ��֣������Ͻ�Ԫ�ؿ�ʼ����
//int findNum(int arr[3][3], int row, int col, int b) {
//	int x = 0;
//	int y = col - 1;//�Ծ������Ϸ�Ԫ�ؿ�ʼ����
//	while (x < row && y >= 0) {
//		if (arr[x][y] < b) {//���arr[x][y]<b ˵����һ�����Ԫ��С��b
//			x++;//��һ�����Ԫ��С��b,˵��b������һ��,x++ֱ��������һ��
//		}
//		else if (arr[x][y] > b) {//���arr[x][y]>b ˵����һ����СԪ�ش���b
//			y--;//��һ����СԪ�ش���b,˵��b������һ��,y--�������һ��
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//1.ֻ��Ҫ��ԭ�ַ���������,���������������������п�����
//�ٿ�һ�´������ַ����ǲ��������ַ���(���������ַ��������)
//����� �ҵ��� ��strstr����ֵ ������NULL
//int findRound(char* arr, char* find) {
//	char tmp[1024] = { 0 };//��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, arr);//strcpy���ַ����ĸ���
//	strcat(tmp, arr);//������һ��
//	return strstr(tmp, find) != NULL;//�������ֵ���ǿ�,����1,�����ҵ���;�������ֵ��0,��û�ҵ�
//}
//
//int main() {
//	char arr[] = "abcd";
//	char arr2[] = "ACBD";
//	int ret = findRound(arr, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//2.���������ַ����ֱ���������жϺ������ж�,�ж����Ƿ�����ת֮��õ���
void left_judge(char* arr, int size, int n) {//����
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		char tmp = arr[0];
		for (j = 0; j <= size; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = tmp;
	}
}

void right_judge(char* arr, int size, int n) {//����
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		char tmp = arr[size - 1];
		for (j = size - 2; j >= 0; j--) {
			arr[j + 1] = arr[j];
		}
		arr[0] = tmp;
	}
}

int Judge(char* arr, char* arr2) {
	char* s;
	int i = 0;
	int len1 = strlen(arr);
	int len2 = strlen(arr2);
	if (len1 != len2) {
		return 0;
	}
	for (i = 0; i <= len1; i++) {
		s = arr;//�Ƚ���ַ������,�ٽ�������������������,�������ַ�ı����
		left_judge(s, len1, i);
		if (strcmp(s, arr2) == 0) {
			return 1;
		}
		s = arr;
		right_judge(s, len1, i);
		if (strcmp(s, arr2) == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char arr[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = Judge(arr, arr2);
	printf("%d\n", ret);
	return 0;
}