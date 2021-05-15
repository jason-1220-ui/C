#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//打印菱形
int main() {
	int line = 0;
	printf("请输入要打印的行数：\n");
	scanf("%d", &line);
	for (int i = 1; i <= line; i++) {//打印上半部分的三角形
		for (int j = 1; j <= line - i; j++) {
			printf(" ");//打印每一行前面的空格
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");//打印每一行的星号
		}
		printf("\n");
	}
	for (int i = 1; i <= line - 1; i++) {//打印下半部分的三角形
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * (line -i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//求出0～100000之间的所有“水仙花数”并输出
//int main() {
//	int i = 0;
//	for (i = 0; i <= 99999; i++) {
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10) {//首先要算数字的位数
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;//计算每一位的次方和
//		while (tmp) {
//			sum += pow(tmp % 10, count);//pow是一个函数计算数字的次方
//			tmp = tmp / 10;
//		}
//		if (sum == i) {
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main() {
//	int num = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	printf("请输入要求数字的前几项之和：\n");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		tmp = tmp * 10 + num;
//		sum += tmp;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//使用递归求n的k次方
//int myPower(int n, int k) {
//	if (k == 0) {
//		return 1;
//	}
//	return n * myPower(n, k - 1);
//}
//
//int main() {
//	printf("%d\n", myPower(2, 10));
//	return 0;
//}

//递归求各位之和
//int digitSum2(unsigned int num) {
//	if (num == 0) {
//		return 0;
//	}
//	return num % 10 + digitSum2(num / 10);
//}
//int main() {
//	int ret = digitSum2(1792);
//	printf("%d\n", ret);
//	return 0;
//}

//非递归求各位之和
//int digitSum(unsigned int num) {
//	int sum = 0;
//	while (num != 0) {
//		printf("%d\n", num % 10);
//		sum += num % 10;//取出个位
//		num /= 10;
//	}
//	return sum;
//}
//
//int main() {
//	int ret = digitSum(1792);
//  printf("%d\n", ret);
//	return 0;
//}

//递归逆序字符串(反向排列)
//void reverseString2(char str[]) {
//	int len = strlen(str);
//	if (len == 0 || len == 1) {
//		return;
//	}
//	//交换边缘元素
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';//临时操作，为了让中间的“abcd”能够作为一个独立的字符串
//	//为了得到中间部分的字符串，需要做两件事
//	//str+1，得到中间字符串的起始位置
//	//还需把刚才len - 1  即f的位置设为\0
//	reverseString2(str + 1);//进行递归
//	//当递归结束后，还需把len-1的位置还原成\0
//	str[len - 1] = tmp;
//}
//
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s\n", str);
//	return 0;
//}


//非递归逆序字符串(反向排列)
//void reverseString(char str[]) {
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char str[] = "abcd";
//	reverseString(str);
//	printf("%s\n", str);
//	return 0;
//}