#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//题目描述:有一个有序序列,从小到大排序,将一个新输入的数插入到序列中,保证插入新数后,序列仍然是升序
//输入描述:第一行输入一个整数,第二行输入n个升序排列的整数,输入用空格分隔的n个整数,第三行输入想要插入的一个整数
//输出描述:输出为一行,n+1个有序排列的整数
int main() {
	int n = 0;
	scanf("%d", &n);
	int arr[1024] = { 0 };
	int m = 0;//要插入的数据
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	int i = 0;
	for (i = n; i > 0; i--) {//将n赋给i,从最后一位开始判断
		if (arr[i - 1] > m) {
			arr[i] = arr[i - 1];
		}
		else {
			arr[i] = m;
			break;
		}
	}
	if (i == 0) {//如果插入的数字小于所有的数字
		arr[i] = m;
	}
	for (int i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

//利用qsort函数实现结构体内部成员排序
//struct imag {//定义结构体
//	char name[1024];
//	double grade;
//	int age;
//};
//int comparNum(const void*p, const void*q) {//比较两个数的大小
//	return *((int*)p) - *((int*)q);
//}
//int structIntCompar(const void* p, const void*q) {//结构体中年龄的比较
//	return ((struct imag*)p)->age - ((struct imag*)q)->age;
//}
//int structStrCompar(const void* p, const void*q) {//结构体中字符串的比较
//	return (strcmp((*(struct imag*)p).name, (*(struct imag*)q).name));
//}
//int structDoubleCompar(const void*p, const void*q) {//结构体浮点数的比较
//	return ((*(struct imag*)p).grade > ((struct imag*)q)->grade);
//}
//
//void swapNum(void* p, void* q, int size) {//交换两个数
//	for (int i = 0; i < size; i++) {
//		char tmp = *((char*)p + i);
//		*((char*)p + i) = *((char*)q + i);
//		*((char*)q + i) = tmp;
//	}
//}
//
//void bubbleSort(void* arr, int num, int size, 
//	int(*compar)(const void*, const void*)) {//函数指针,用于比较两元素的大小
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - i - 1; j++) {
//			if (compar((char*)arr + j * size, (char*)arr + (j + 1)*size) > 0) {
//				swapNum((char*)arr + j * size, (char*)arr + (j + 1)*size, size);
//			}
//		}
//	}
//}
//
//void printNum(int* arr, int size) {//打印整型数组
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void printStruct(struct imag arr[], int size) {
//	printf("姓名\t     成绩\t     年龄\n");
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
//	struct imag arrStu[3] = { {"周五",90,18},{"张三",88,20},{"李四",95,19} };
//	printf("<给整型数组排序>\n");
//	bubbleSort(arrInt, sizeof(arrInt) / sizeof(arrInt[0]), sizeof(arrInt[0]), comparNum);
//	printNum(arrInt, sizeof(arrInt) / sizeof(arrInt[0]));
//	printf("\n");
//	printf("<按结构体中的年龄排序>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structStrCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	printf("<按照结构体中的成绩排序>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structDoubleCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	return 0;
//}

////实现一个通用的冒泡排序
////通过 void* 实现一个排序函数,能够支持多种类型
////如果是比较整型数组,此处的void*就使用int*赋值;如果是比较Student数组,此处的void*就是用Student*赋值
//typedef int(*Cmp)(void*, void*);
//
//void bubbleSort(void* arr, int len, int unitlen, Cmp cmp) {
//	//len 表示数组元素中元素的个数,unitlen 表示的数组中每个元素的大小
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			char* carr = (char*)arr;//为了让 arr 这个void*能够被解引用,就需要强制类型转换,统一都转成char*
//			char* p1 = carr + (cur - 1)*unitlen;//p1指向cur-1这个元素的首地址
//			char* p2 = carr + cur * unitlen;//p2指向cur这个元素的首地址
//			if (cmp(p1, p2) != 1) {//交换
//				char tmp[1024] = { 0 };
//				memcpy(tmp, p1, unitlen);//把p1的内存拷贝到tmp
//				memcpy(p1, p2, unitlen);//把p2的内存拷贝到p1里
//				memcpy(p2, tmp, unitlen);//把tmp的内存拷贝回p2
//			}
//		}
//	}
//}
//
//int cmpInt(void* x, void* y) {//把升序排列
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