#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//有序序列判断
//输入描述：第一行输入一个整数N（3≤N≤50）.第二行输入N个整数，用空格分隔N个整数
//输出描述：输出为一行，如果序列有序输出sorted，否则输出unsorted。
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
//	if (flag1 + flag2 > 1) {//flag1和flag2 都为1是乱序的
//		printf("unsorted\n");
//	}
//	else {
//		printf("sorted\n");
//	}
//	return 0;
//}

//序列中删除指定数字
//输入描述：第一行输入一个整数（0≤N≤50）.第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数
//输出描述：输出为一行，删除指定数字之后的序列。
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