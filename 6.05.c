#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��Ŀ����:��һ����������,��С��������,��һ��������������뵽������,��֤����������,������Ȼ������
//��������:��һ������һ������,�ڶ�������n���������е�����,�����ÿո�ָ���n������,������������Ҫ�����һ������
//�������:���Ϊһ��,n+1���������е�����
int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[1024] = { 0 };
	int m = 0;//Ҫ���������
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	int i = 0;
	for (i = n; i > 0; i--) {//��n����i,�����һλ��ʼ�ж�
		if (arr[i - 1] > m) {
			arr[i] = arr[i - 1];
		}
		else {
			arr[i] = m;
			break;
		}
	}
	if (i == 0) {//������������С�����е�����
		arr[i] = m;
	}
	for (int i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

//����qsort����ʵ�ֽṹ���ڲ���Ա����
//struct imag {//����ṹ��
//	char name[1024];
//	double grade;
//	int age;
//};
//int comparNum(const void*p, const void*q) {//�Ƚ��������Ĵ�С
//	return *((int*)p) - *((int*)q);
//}
//int structIntCompar(const void* p, const void*q) {//�ṹ��������ıȽ�
//	return ((struct imag*)p)->age - ((struct imag*)q)->age;
//}
//int structStrCompar(const void* p, const void*q) {//�ṹ�����ַ����ıȽ�
//	return (strcmp((*(struct imag*)p).name, (*(struct imag*)q).name));
//}
//int structDoubleCompar(const void*p, const void*q) {//�ṹ�帡�����ıȽ�
//	return ((*(struct imag*)p).grade > ((struct imag*)q)->grade);
//}
//
//void swapNum(void* p, void* q, int size) {//����������
//	for (int i = 0; i < size; i++) {
//		char tmp = *((char*)p + i);
//		*((char*)p + i) = *((char*)q + i);
//		*((char*)q + i) = tmp;
//	}
//}
//
//void bubbleSort(void* arr, int num, int size, 
//	int(*compar)(const void*, const void*)) {//����ָ��,���ڱȽ���Ԫ�صĴ�С
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - i - 1; j++) {
//			if (compar((char*)arr + j * size, (char*)arr + (j + 1)*size) > 0) {
//				swapNum((char*)arr + j * size, (char*)arr + (j + 1)*size, size);
//			}
//		}
//	}
//}
//
//void printNum(int* arr, int size) {//��ӡ��������
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void printStruct(struct imag arr[], int size) {
//	printf("����\t     �ɼ�\t     ����\n");
//	for (int i = 0; i < size; i++) {
//		printf("%s\t     %.2f\t     %d\n", arr[i].name, arr[i].grade, arr[i].age);
//	}
//	printf("\n");
//}
//
//int main() {
//	int  i = 0;
//	int arrInt[10] = { 1,4,7,8,22,68,90,47,35,88 };
//	char* arrStr[] = { "bcdef","abcde","efghi","defgh","cdefg" };
//	struct imag arrStu[3] = { {"����",90,18},{"����",88,20},{"����",95,19} };
//	printf("<��������������>\n");
//	bubbleSort(arrInt, sizeof(arrInt) / sizeof(arrInt[0]), sizeof(arrInt[0]), comparNum);
//	printNum(arrInt, sizeof(arrInt) / sizeof(arrInt[0]));
//	printf("\n");
//	printf("<���ṹ���е���������>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structStrCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	printf("<���սṹ���еĳɼ�����>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structDoubleCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	return 0;
//}

////ʵ��һ��ͨ�õ�ð������
////ͨ�� void* ʵ��һ��������,�ܹ�֧�ֶ�������
////����ǱȽ���������,�˴���void*��ʹ��int*��ֵ;����ǱȽ�Student����,�˴���void*������Student*��ֵ
//typedef int(*Cmp)(void*, void*);
//
//void bubbleSort(void* arr, int len, int unitlen, Cmp cmp) {
//	//len ��ʾ����Ԫ����Ԫ�صĸ���,unitlen ��ʾ��������ÿ��Ԫ�صĴ�С
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			char* carr = (char*)arr;//Ϊ���� arr ���void*�ܹ���������,����Ҫǿ������ת��,ͳһ��ת��char*
//			char* p1 = carr + (cur - 1)*unitlen;//p1ָ��cur-1���Ԫ�ص��׵�ַ
//			char* p2 = carr + cur * unitlen;//p2ָ��cur���Ԫ�ص��׵�ַ
//			if (cmp(p1, p2) != 1) {//����
//				char tmp[1024] = { 0 };
//				memcpy(tmp, p1, unitlen);//��p1���ڴ濽����tmp
//				memcpy(p1, p2, unitlen);//��p2���ڴ濽����p1��
//				memcpy(p2, tmp, unitlen);//��tmp���ڴ濽����p2
//			}
//		}
//	}
//}
//
//int cmpInt(void* x, void* y) {//����������
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	return *ix < *iy ? 1: 0;
//}
//int main() {
//	int arr[] = { 9,5,2,7,3,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, len, sizeof(arr[0]), cmpInt);
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}