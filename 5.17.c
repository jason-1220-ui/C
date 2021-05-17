#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//交换数组(内容一样大)
void swapArray(int arr1[], int arr2[],int size) {
	for (int i = 0; i < size; i++) {
		int tmp = arr1[i];//要交换的元素就是arr1[i]和arr2[i]
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main() {
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 4,3,2,1 };
	swapArray(arr1[4],arr2[4],4);
	printf("交换后arr1=%d\narr2=%d\n",arr1,arr2);
	return 0;
}

//创建一个整型变量,完成对数组的操作
//void init(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void reverse(int arr[], int size) {
//	int left = 0;
//	int right = size - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//#define SIZE 10
//int main() {
//	int arr[SIZE];
//	init(arr,SIZE);
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = i;
//	}
//	print(arr, SIZE);
//	reverse(arr, SIZE);
//	return 0;
//}

//喝汽水问题(一瓶汽水1元,两个空瓶子可以换一瓶汽水)
//int drinkWater(int money) {
//	int total = money;
//	int empty = money;
//	while (empty >= 2) {
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return total;
//}
//int main() {
//	int money = 0;
//	printf("请输入你有多少钱:\n");
//	scanf("%d", &money);
//	printf("可以喝%d瓶汽水", drinkWater(money));
//	return 0;
//}