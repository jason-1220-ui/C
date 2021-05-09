#include <stdio.h>
#include <string.h>

void Reverse(char* arr) {
	//定义两个指针，一个指向字符串首位，一个指向字符串末位
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right) {//交换最两边的值，向内递进
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++, right--;
	}
}
int main() {
	char arr[] = "5372cba";
	printf("逆序前:%s\n",arr);
	Reverse(arr);
	printf("逆序后:%s\n",arr);
	return 0;
}

//使用指针打印数组内容
//int main() {
//	int arr[] = { 3,7,5,1,4,9,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int*p = arr; p < arr + size; p++) {
//		printf("%d ", *p);
//	}
//	return 0;
//}

//打印乘法口诀表
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

//求1/1-1/2+1/3-1/4+1/5...+1/99-1/100的和
//double fenshuqiuhe() {
//	double sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			sum += 1.0 / i;//奇数项
//		}
//		else {
//			sum -= 1.0 / i;//偶数项
//		}
//	}
//	return sum;
//}
//
//int main() {
//	printf("%f\n", fenshuqiuhe());
//	return 0;
//}