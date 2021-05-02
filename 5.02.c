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
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	for (i = 31; i >= 1; i = i - 2) {
//		printf("偶数位=%d", (num>>i)&1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i = i - 2) {
//		printf("奇数位=%d", (num>>i)&1);
//	}
//	return 0;
//}


//int main() {
//	int count = 0;
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++) {
//		if (num&(1 << i)) {//要注意是左移符号，若右移，必须是整数，否则最高位补的是符号位
//			count++;
//		}
//	}
//	printf("二进制中1的个数=%d\n",count);
//	return 0;
//}