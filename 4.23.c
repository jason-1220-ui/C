#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int myStrlen(char* str) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + myStrlen(str + 1);
}
int main() {
	printf("%d\n", myStrlen("abcd"));
	return 0;
}


//int myStrlen(char* str) {
//	int count = 0;
//    while (str[count] != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	printf("%d\n", myStrlen("abcd"));
//	return 0;
//}


//int reverse_string(char * str) {
//    int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2) {
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main() {
//	char str[] = "abcdefg";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}


//int pow(int n, int k) {
//	if (k == 0) {
//		return 1;
//	}
//	else if (k >= 1) {
//		return n * pow(n, k - 1);
//	}
//}
//int main() {
//	int n, k,a;
//	printf("请输入n,k的值：\n");
//	scanf("%d,%d", &n, &k);
//	a = pow(n, k);
//	printf("%d\n", a);
//	return 0;
//}


//int DigitSum(n) {
//	int sum = 0;
//	int m = 0;
//	if (n != 0) {
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main() {
//	int a;
//	printf("请输入一个整数：\n");
//	scanf("%d", &a);
//	printf("sum=%d\n", DigitSum(a));
//	return 0;
//}


//int fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	int last2 = 1;//第i-2项
//	int last1 = 1;//第i-1项
//	int cur = 0;//当前第i项的结果
//	for (int i = 3; i <= n; i++) {
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//}
//int main() {
//	int j;
//	printf("请输入要求的第几个斐波那契数：\n");
//	scanf("%d", &j);
//	printf("%d\n", fib(j));
//	return 0;
//}


//int fib(int n) {
//	if (n == 1||n==2) {
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int main() {
//	int i;
//	printf("请输入要求的第几个斐波那契数：\n");
//	scanf("%d", &i);
//	fib(i);
//	printf("%d\n", fib(i));
//	return 0;
//}


//int main() {
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result = result * i;
//	}
//	printf("结果为：%d\n", result);
//	return 0;
//}


//int factor(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	return  n * factor(n - 1);
//}
//int main() {
//	int i;
//	printf("请输入一个整数：\n");
//	scanf("%d", &i);
//	factor(i);
//	printf("%d\n", factor(i));
//	return 0;
//}