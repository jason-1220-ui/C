#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.���������ɽ���
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ��������������");
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d, b = %d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d, b = %d",a,b);
//	return 0;
//}

//2.�����Ӽ�������ɽ���
int main() {
	int x = 0;
	int y = 0;
	printf("������Ҫ��������������");
	scanf("%d %d", &x, &y);
	printf("����ǰ��x = %d, y = %d\n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("������x = %d, y = %d", x, y);
	return 0;
}