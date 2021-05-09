#include <stdio.h>
#include <string.h>

void Reverse(char* arr) {
	//��������ָ�룬һ��ָ���ַ�����λ��һ��ָ���ַ���ĩλ
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right) {//���������ߵ�ֵ�����ڵݽ�
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++, right--;
	}
}
int main() {
	char arr[] = "5372cba";
	printf("����ǰ:%s\n",arr);
	Reverse(arr);
	printf("�����:%s\n",arr);
	return 0;
}

//ʹ��ָ���ӡ��������
//int main() {
//	int arr[] = { 3,7,5,1,4,9,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int*p = arr; p < arr + size; p++) {
//		printf("%d ", *p);
//	}
//	return 0;
//}

//��ӡ�˷��ھ���
//void printMultiply(int maxRow) {
//	for (int row = 1; row <= maxRow; row++) {
//		for (int col = 1; col <= row; col++) {
//			printf("%d*%d=%d ", row, col, col*row);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	printMultiply(12);
//	return 0;
//}

//��1/1-1/2+1/3-1/4+1/5...+1/99-1/100�ĺ�
//double fenshuqiuhe() {
//	double sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			sum += 1.0 / i;//������
//		}
//		else {
//			sum -= 1.0 / i;//ż����
//		}
//	}
//	return sum;
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());
//	return 0;
//}