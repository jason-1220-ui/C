#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//��ӡ����
int main() {
	int line = 0;
	printf("������Ҫ��ӡ��������\n");
	scanf("%d", &line);
	for (int i = 1; i <= line; i++) {//��ӡ�ϰ벿�ֵ�������
		for (int j = 1; j <= line - i; j++) {
			printf(" ");//��ӡÿһ��ǰ��Ŀո�
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");//��ӡÿһ�е��Ǻ�
		}
		printf("\n");
	}
	for (int i = 1; i <= line - 1; i++) {//��ӡ�°벿�ֵ�������
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

//���0��100000֮������С�ˮ�ɻ����������
//int main() {
//	int i = 0;
//	for (i = 0; i <= 99999; i++) {
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10) {//����Ҫ�����ֵ�λ��
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;//����ÿһλ�Ĵη���
//		while (tmp) {
//			sum += pow(tmp % 10, count);//pow��һ�������������ֵĴη�
//			tmp = tmp / 10;
//		}
//		if (sum == i) {
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//int main() {
//	int num = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	printf("������Ҫ�����ֵ�ǰ����֮�ͣ�\n");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		tmp = tmp * 10 + num;
//		sum += tmp;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//ʹ�õݹ���n��k�η�
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

//�ݹ����λ֮��
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

//�ǵݹ����λ֮��
//int digitSum(unsigned int num) {
//	int sum = 0;
//	while (num != 0) {
//		printf("%d\n", num % 10);
//		sum += num % 10;//ȡ����λ
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

//�ݹ������ַ���(��������)
//void reverseString2(char str[]) {
//	int len = strlen(str);
//	if (len == 0 || len == 1) {
//		return;
//	}
//	//������ԵԪ��
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';//��ʱ������Ϊ�����м�ġ�abcd���ܹ���Ϊһ���������ַ���
//	//Ϊ�˵õ��м䲿�ֵ��ַ�������Ҫ��������
//	//str+1���õ��м��ַ�������ʼλ��
//	//����Ѹղ�len - 1  ��f��λ����Ϊ\0
//	reverseString2(str + 1);//���еݹ�
//	//���ݹ�����󣬻����len-1��λ�û�ԭ��\0
//	str[len - 1] = tmp;
//}
//
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s\n", str);
//	return 0;
//}


//�ǵݹ������ַ���(��������)
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