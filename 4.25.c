#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 4,3,2,7,5,9 };
	int tmp[6] = { 0 };
	int i = 0;
	printf("交换前：\n");
	printf("arr1[]的值为：");
	for (i = 0; i < 6; i++) {
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("arr2[]的值为：");
	for (i = 0; i < 6; i++) {
		printf("%d", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		tmp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp[i];
	}
	printf("交换后：\n");
	printf("arr1[]的值为：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("arr2[]的值为：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		printf("%d", arr2[i]);
	}
	printf("\n");
	return 0;
}