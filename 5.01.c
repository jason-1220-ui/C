#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.借助异或完成交换
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的两个数：");
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d, b = %d",a,b);
//	return 0;
//}

//2.借助加减运算完成交换
int main() {
	int x = 0;
	int y = 0;
	printf("请输入要交换的两个数：");
	scanf("%d %d", &x, &y);
	printf("交换前：x = %d, y = %d\n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("交换后：x = %d, y = %d", x, y);
	return 0;
}