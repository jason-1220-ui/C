#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//д���������n��쳲��������е�ֵ(�ǵݹ�)
int fib(int n) {
	int a = 1;
	int b = 1;
	int c = 0;
	while (n >= 3) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int n = 8;
	int ret = 0;
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}

//Ҫ��дһ�����������ַ����еĿո��滻Ϊ%20
//int change(char *str1, char *str2) {
//	while (*str1) {
//		if (*str1 != ' ') {
//			*str2 = *str1;
//			str2++;
//		}
//		else {
//			strcpy(str2, "%20");
//			str2 = str2 + 3;
//		}
//		str1++;
//	}
//	*str2 = '\0';
//	return 0;
//}
//int main() {
//	char str1[] = "abc def gx yz";
//	char str2[1024] = { 0 };
//	change(str1, str2);
//	printf("%s", str2);
//	return 0;
//}