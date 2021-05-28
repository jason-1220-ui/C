#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//判断一个字符串是否为另外一个字符串旋转之后的结果
int left_judge(char arr[], char arr2[], int len) {//左旋判断
	int i = 0;
	int j = 0;
	for (int i = 0; i < len; i++) {//左旋字符串的长度
		char tmp = arr[0];
		for (int j = 0; j <= len - 1; j++) {
			arr[j - 1] = arr[j];
		}
		arr[j - 1] = tmp;
		if (strcmp(arr, arr2) == 0) {//比较字符串 arr 和 arr2 是否相同
			return 1;
		}
	}
	return -1;
}

int right_judge(char arr[], char arr2[], int len) {//右旋判断
	int i = 0;
	int j = 0;
	for (int i = 0; i < len; i++) {//右旋字符串的长度
		char tmp = arr[len - 1];
		for (int j = len - 2; j >= 0; j--) {
			arr[j + 1] = arr[j];
		}
		arr[0] = tmp;
		if (strcmp(arr, arr2) == 0) {//比较字符串 arr 和 arr2 是否相同
			return 1;
		}
	}
	return -1;
}

int main() {
	char arr[] = { 0 };
	char arr2[] = { 0 };
	printf("请输入原始字符串:a= ");
	scanf("%s", &arr);
	printf("请输入变化后的字符串:b= ");
	scanf("%s", &arr2);
	char c[10] = { 0 };
	strcpy(c, arr);
	if (strlen(arr) == strlen(arr2)) {
		int len = strlen(arr);
		int lret = left_judge(arr, arr2, len);
		int rret = right_judge(arr, arr2, len);
		if (lret == 1 || rret == 1) {
			printf("%s是%s旋成的字符串\n", c, arr2);
		}
		else {
			printf("%s不是%s旋成的字符串\n", c, arr2);
		}
	}
	else {
		printf("%s不是%s旋成的字符串\n", c, arr2);
	}
	return 0;
}

//实现一个函数,可以左旋字符串中的k个字符
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
//	printf("请输入左旋的位数:");
//	scanf("%d", &k);
//	leftRound(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}