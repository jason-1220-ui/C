#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������(����һ����)
void swapArray(int arr1[], int arr2[],int size) {
	for (int i = 0; i < size; i++) {
		int tmp = arr1[i];//Ҫ������Ԫ�ؾ���arr1[i]��arr2[i]
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main() {
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 4,3,2,1 };
	swapArray(arr1[4],arr2[4],4);
	printf("������arr1=%d\narr2=%d\n",arr1,arr2);
	return 0;
}

//����һ�����ͱ���,��ɶ�����Ĳ���
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

//����ˮ����(һƿ��ˮ1Ԫ,������ƿ�ӿ��Ի�һƿ��ˮ)
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
//	printf("���������ж���Ǯ:\n");
//	scanf("%d", &money);
//	printf("���Ժ�%dƿ��ˮ", drinkWater(money));
//	return 0;
//}