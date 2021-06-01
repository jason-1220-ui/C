#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//编写程序判断输入的字母是元音(Vowel)还是辅音(Consonant)
//方法1
//int main() {
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	while ((ch = getchar()) != EOF) {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			if (ch == arr[i]) {
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10) {
//			printf("Consonant\n");
//		}
//		getchar();//去除每个字母后的\0
//	}
//	return 0;
//}
		
//方法2
int main() {
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	while (scanf(" %c", &ch) != EOF) {
		int i = 0;
		for (i = 0; i < 10; i++) {
			if (ch == arr[i]) {
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10) {
			printf("Consonant\n");
		}
		getchar();
	}
	return 0;
}

//给定一个整数序列,把其中重复的列去掉,并将重复的列由小到大排序输出
//方法1
//int main() {
//	int n = 0;
//	int arr[100] ;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	//排序
//	for (i = 0; i < n - 1; i++) {
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//去重  比较n-1对
//	for ( i = 0; i < n - 1; i++) {
//		if (arr[i] == arr[i + 1]) {//把i+1后面的元素往前移动
//			int k = 0;
//			for (k = i; k < n - 1; k++) {
//				arr[k] = arr[k + 1];
//			}
//				n--;
//				i--;
//		}
//	}
//	//打印
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//方法2
//int main() {
//	int n = 0;
//	int arr[1024] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1024; i++) {
//		if (arr[i] != 0) {
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}