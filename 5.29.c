#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//第一种，以左上角元素开始遍历
//int findNum(int arr[3][3], int row, int col, int b) {
//	int x = 0;
//	int y = 0;//以矩阵左上方元素开始遍历
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
//		printf("找到了!\n");
//	}
//	else {
//		printf("没找到!\n");
//	}
//	return 0;
//}

//第二种，以右上角元素开始遍历
//int findNum(int arr[3][3], int row, int col, int b) {
//	int x = 0;
//	int y = col - 1;//以矩阵右上方元素开始遍历
//	while (x < row && y >= 0) {
//		if (arr[x][y] < b) {//如果arr[x][y]<b 说明这一行最大元素小于b
//			x++;//这一行最大元素小于b,说明b不在这一行,x++直接跳过这一行
//		}
//		else if (arr[x][y] > b) {//如果arr[x][y]>b 说明这一列最小元素大于b
//			y--;//这一行最小元素大于b,说明b不在这一列,y--跳过最后一列
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//1.只需要把原字符串来两遍,包括了左旋和右旋的所有可能性
//再看一下待查找字符串是不是它的字符串(来两遍后的字符串里面的)
//如果是 找到了 则strstr返回值 绝不是NULL
//int findRound(char* arr, char* find) {
//	char tmp[1024] = { 0 };//用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, arr);//strcpy是字符串的复制
//	strcat(tmp, arr);//在连接一遍
//	return strstr(tmp, find) != NULL;//如果返回值不是空,返回1,代表找到了;如果返回值是0,则没找到
//}
//
//int main() {
//	char arr[] = "abcd";
//	char arr2[] = "ACBD";
//	int ret = findRound(arr, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//2.将待查找字符串分别进行左旋判断和右旋判断,判断其是否是旋转之后得到的
void left_judge(char* arr, int size, int n) {//左旋
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

void right_judge(char* arr, int size, int n) {//右旋
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
		s = arr;//先将地址存起来,再进行左旋或者右旋操作,避免因地址改变出错
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