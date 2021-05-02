#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int diff_bit(int a, int b) {
	int tmp = a ^ b;
	int count = 0;
	while (tmp != 0) {
		if ((tmp & 1) == 1) {
			count++;
		}
		tmp = tmp >> 1;
	}
	return count;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int count = diff_bit(a, b);
	printf("%d ",count);
	return 0;
}

//int main() {
//	int i = 0;
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	for (i = 31; i >= 1; i = i - 2) {
//		printf("ż��λ=%d", (num>>i)&1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i = i - 2) {
//		printf("����λ=%d", (num>>i)&1);
//	}
//	return 0;
//}


//int main() {
//	int count = 0;
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++) {
//		if (num&(1 << i)) {//Ҫע�������Ʒ��ţ������ƣ��������������������λ�����Ƿ���λ
//			count++;
//		}
//	}
//	printf("��������1�ĸ���=%d\n",count);
//	return 0;
//}