#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>

void findDiffNum(int* arr, int size, int* px, int* py) {
	int num = 0;
	int i = 0;
	int pos = 0;
	for (i = 0; i < size; i++) {
		num ^= arr[i];
	}
	for (i = 0; i < 32; i++) {
		if (((num >> i) & 1) == 1) {
			pos = i;
			break;
		}
	}
	for (i = 0; i < size; i++) {
		if (((arr[i] >> pos) & 1 )== 1) {
			*px ^= arr[i];
		}
		else {
			*py ^= arr[i];
		}
	}
}
int main() {
	int arr[] = { 1,2,4,7,6,1,2,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n1 = 0;
	int n2 = 0;
	findDiffNum(arr, size, &n1, &n2);
	printf("%d %d", n1, n2);
	return 0;
}

//ģ��ʵ��atoi
//enum {
//	INVALUE = 0,
//	VALUE
//};
//int num = INVALUE;//�Ϸ������һ�֣����ж�Ϊ�Ƿ����������жϽ�Ϊ����
//int my_atoi(char* str) {
//	int flag = 1;
//	assert(str);
//	long long ret = 0;
//
//	if (*str == '\0') {//�ж��Ƿ�Ϊ���ַ���
//		return 0;
//	}
//	while (isspace(*str)) {//�����հ��ַ�
//		str++;
//	}
//	if (*str == '-') {//��������
//		str++;
//		flag = -1;
//	}
//	while (isdigit(*str)) {//��ʼת�������ַ�ֱ���������ַ�
//		ret = ret * 10 + flag * (*str - '0');
//		str++;
//		if ((ret > INT_MAX) || (ret < INT_MIN)) {
//			num = INVALUE;
//		}
//		else {
//			num = VALUE;
//		}
//	}
//	return (int)ret;
//}
//int main() {
//	char* p = "-12345.12";
//	int ret = my_atoi(p);
//	if (num == 1) {
//		printf("VALUE:%d\n", ret);
//	}
//	else if (num == 0) {
//		printf("INVALUE:%d\n", ret);
//	}
//	return 0;
//}