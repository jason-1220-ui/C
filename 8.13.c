#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��д��������������Ԫ�س��ִ����������鳤��һ������֡�
void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void bubble_sort(int *arr, int len) {
	int bound = 0;
	for (bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			if (arr[cur - 1] > arr[cur]) {
				swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
void FindNum(int *arr, int len) {
	bubble_sort(arr, len);
	int midNum = arr[len / 2];
	printf("�������鳤��һ���������%d\n",midNum);
}
int main() {
	int arr[] = { 1,2,3,2,2,2,5,4,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	FindNum(arr, len);
	return 0;
}

//��һ������ a , ��д��������������ǰK����С������
//�õ������е�����K�������λ��
//int kuaipai(int *arr, int left, int right) {
//	int tmp = arr[left];
//	right--;
//	while (left < right) {
//		while (left < right&&arr[right] >= tmp) {
//			right--;
//		}
//		if (arr[right] < tmp) {
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		while (left < right&&arr[left] <= tmp) {
//			left++;
//		}
//		if (arr[left] > tmp) {
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//	return right;
//}

//�õ�������K�������λ����K-1���бȽϲ���
//void findK(int *arr, int len, int k) {
//	int left = 0;
//	int right = len;
//	int par = kuaipai(arr, left, right);
//	while (par != k - 1) {
//		if (par > k - 1) {
//			right = par - 1;
//			par = kuaipai(arr, left, right);
//		}
//		else {
//			left = par + 1;
//			par = kuaipai(arr, left, right);
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr[] = {14,20,16,7,6,18,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	findK(arr, len, 5);
//	return 0;
//}

//дһ�������� unsigned int �ͱ��� x ���ڴ��ж����� 1 �ĸ���
//int main() {
//	unsigned int num = 0;
//	int count = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	while (num != 0) {
//		if (num % 2 == 1) {
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("num�е�1�ĸ���Ϊ%d��\n", count);
//	return 0;
//}