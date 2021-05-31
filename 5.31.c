#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求 n!
//递归
int jiecheng(int n){
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * jiecheng(n - 1);
	}
}
int main() {
	printf("%d\n", jiecheng(5));
	return 0;
}

//非递归
//int main() {
//	int n;
//	int result = 1;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {//for循环求累积
//		result = result * i;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//二分查找
//int main() {
//	int num = 0;
//	printf("请输入要查找的数字:\n");
//	scanf("%d", &num);
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;//待查找区间是[left,right]
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了! num 的下标就是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没找到元素!");
//	}
//	return 0;
//}