#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� n!
//�ݹ�
int jiecheng(int n){
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * jiecheng(n - 1);
	}
}
int main() {
	printf("%d\n", jiecheng(5));
	return 0;
}

//�ǵݹ�
//int main() {
//	int n;
//	int result = 1;
//	printf("������һ������:\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {//forѭ�����ۻ�
//		result = result * i;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//���ֲ���
//int main() {
//	int num = 0;
//	printf("������Ҫ���ҵ�����:\n");
//	scanf("%d", &num);
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;//������������[left,right]
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ���! num ���±����:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("û�ҵ�Ԫ��!");
//	}
//	return 0;
//}