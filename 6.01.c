#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��д�����ж��������ĸ��Ԫ��(Vowel)���Ǹ���(Consonant)
//����1
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
//		getchar();//ȥ��ÿ����ĸ���\0
//	}
//	return 0;
//}
		
//����2
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

//����һ����������,�������ظ�����ȥ��,�����ظ�������С�����������
//����1
//int main() {
//	int n = 0;
//	int arr[100] ;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	//����
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
//	//ȥ��  �Ƚ�n-1��
//	for ( i = 0; i < n - 1; i++) {
//		if (arr[i] == arr[i + 1]) {//��i+1�����Ԫ����ǰ�ƶ�
//			int k = 0;
//			for (k = i; k < n - 1; k++) {
//				arr[k] = arr[k + 1];
//			}
//				n--;
//				i--;
//		}
//	}
//	//��ӡ
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����2
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