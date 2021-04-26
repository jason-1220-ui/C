#include <stdio.h>
#include <stdlib.h>
void init(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i]=0;
	}
}
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	int arr[10] = {1,4,2,6,3,5,8,10,9};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("原数组：\n");
	print(arr,size);
	printf("\n");
	printf("逆置数组：\n");
	reverse(arr, size);
	print(arr, size);
	printf("\n");
	printf("初始化数组：\n");
	init(arr,size);
	print(arr, size);
	return 0;
}