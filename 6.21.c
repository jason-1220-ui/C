#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//奇偶统计
//输入描述：一行，一个整数N.（1≤N≤100000）
//输出描述：一行，1-N之间奇数的个数和偶数的个数，用空格分开
//代码1
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;//奇数的个数
//	int even = 0;
//	for (i = 1; i <= n; i++) {
//		if (i % 2 == 1) {
//			odd++;
//		}
//	}
//	printf("%d %d\n", odd, n - odd);
//	return 0;
//}
//代码2
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;//奇数的个数
//	if (n % 2 == 0) {
//		odd = n / 2;//如果n是偶数，则奇数和偶数一样多
//	}
//	else {
//		odd = n / 2 + 1;//如果n是奇数，则奇数比偶数多1
//	}
//	printf("%d %d\n", odd, n - odd);
//	return 0;
//}

//矩阵计算
//第一行为N M（N：矩阵行数；M：矩阵列数，且M,N≤10），接下来的N行为矩阵各行
//一行，其中大于0的元素之和
int main() {
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	int tmp = 0;
	int sum = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &tmp);
			if (tmp > 0) {
				sum += tmp;
			}
		}
	}
	printf("%d", sum);
	return 0;
}