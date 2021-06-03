#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ð������.дһ������, ���ܹ�֧������, Ҳ��֧�ֽ���
//����һ���µĲ���asc,���ascΪ1,��ʾ��������,Ϊ0��ʾ��������
//����1 ʹ�ûص�����
//����һ������ָ�������Cmp
//������͵ĺ���ָ���Ӧ�ĺ���������int ����,������intֵ
typedef int(*Cmp)(int x, int y);
void bubbleSort(int arr[], int len, Cmp cmp) {//����
	for (int bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			if (cmp(arr[cur - 1], arr[cur]) != 1) {
					int tmp = arr[cur - 1];
					arr[cur - 1] = arr[cur];
					arr[cur] = tmp;
			}
		}
	}
}
int less(int x, int y) {
	return x < y ? 1 : 0;
}
int greater(int x, int y) {
	return x > y ? 1 : 0;
}
int main() {
	int arr[] = { 9,5,2,7,3,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size, less);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	printf("====================\n");
	bubbleSort(arr, size, greater);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

//����2
//void bubbleSort(int arr[], int len, int asc) {//����
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			if (asc == 1) {
//				if (arr[cur - 1] > arr[cur]) {
//					int tmp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = tmp;
//				}
//			}
//			else {
//				if (arr[cur - 1] < arr[cur]) {
//					int tmp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = tmp;
//				}
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,5,2,7,3,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, size, 1);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
// }

//�����ַ���.��һ�仰�ĵ��ʽ��е���,��㲻����
//void reverse(char* str, int len) {//�൱�����һ��ָ���ķ�Χ��������
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverseWord(char* input) {
//	reverse(input, strlen(input));//����������ַ�����������
//	char* start = input;//�����ÿ�����ʽ�������,ͨ��start���ָ���������ַ���
//		//start�൱�ڱ�ʾ��ǰ���ʵĿ�ʼλ��,�����ҵ���ǰ���ʵĽ���λ��
//	while (*start != '\0') {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}//�������whileѭ��������,Ԥ��endָ���˸õ��ʵ�ĩβ
//		reverse(start, end - start);//������������
//		if (*end == '\0') {//end ָ���β,��ȫ����������
//			break;
//		}
//		else {//end ָ��ո�,Ӧ����������һ������
//			start = end + 1;
//		}
//	}
//}
//int main() {
//	while (1) {
//		//�ȶ�ȡ����ַ���
//		//��scanf("%s");��ȡ�ַ���,���� �ո� �ͽ�����
//		//�˴�������Ԥ�ڶ���һ����������(�����ո�)
//		char input[1024] = { 0 };
//		char* ret = gets(input);
//		if (ret == NULL) {
//			break;//��ȡ���
//		}
//		reverseWord(input);
//		printf("%s\n", input);
//	}
//	return 0;
//}

//������������С������
//int minGongbei(int x, int y) {
//	int maxNum = x > y ? x : y;//��Ŀ�����,��x>y,���ʽֵΪx,��������Ϊy
//	for (int i = maxNum; i <= x * y; i++) {
//		if (i % x == 0 && i % y == 0) {
//			return i;
//		}
//	}
//	return 0;//�˴���returnһ�����ᴥ��
//}
//int main() {
//	//����OJϵͳ�����������������,ÿ������������������������
//	while (1) {//����һ��ѭ�����ʹ�������׼ȷ
//		int x = 0;
//		int y = 0;
//        //scanf�ķ���ֵ��ʾ���������ݵĸ���
//		//����û������������������,��ʱscanf�ͻ᷵��2
//		int n = scanf("%d %d",&x,&y);//��ţ������,������д�Ļ����ܻ�û��ͨ�����е�����
//		int result = minGongbei(x, y);
//		printf("%d\n", result);
//	}
//	return 0;
//}

//дһ�δ��뽫���������ת��Ϊʮ�����ƵĽ��
//int main() {
//	int n = 0;
//	printf("������һ������:\n");
//	scanf("%d", &n);
//	int arr[40] = { 0 };
//	int i = 0;
//	while (n) {//��n=0ʱ,����ѭ��
//		arr[i++] = n % 16;//����ת�����������Ƶ���,ֻ�轫16�ĳ���Ҫ�Ľ�����
//		n = n / 16;
//	}
//	for (i--; i >= 0; i--) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}