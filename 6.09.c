#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ѡ�糤    ��������:һ��,�ַ�����,����A��B,�������ַ�0����
//�������:һ��,һ���ַ�,A��B��E,���A��ʾA��Ʊ����,���B��ʾB��Ʊ����,���E��ʾ���˵�Ʊ�����
//int main() {
//	char arr[1024] = { 0 };
//	gets(arr);//gets�ڽ���ַ����в����������Ļ��з�
//	int i = 0;
//	int flag = 0;
//	while (arr[i] != '0') {
//		if (arr[i] == 'A') {
//			flag++;
//		}
//		else if (arr[i] == 'B') {
//			flag--;
//		}
//		i++;
//	}
//	if (flag > 0) {
//		printf("A");
//	}
//	else if (flag < 0) {
//		printf("B");
//	}
//	else {
//		printf("E");
//	}
//	return 0;
//}

//��Ŀ:����һ��������ʾһ���˵�����,������ڵ���140,���������һ�����,���Genius
//��������:��������,ÿ���������һ��������ʾ������
//�������:���ÿ������,���Genius
//����1
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		if (n >= 140) {
//			printf("Genius");
//		}
//	}
//	return 0;
//}
//����2
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		//����д������Ϊscanf��ȡʧ�ܷ���EOF,EOF��-1,���԰�λȡ����Ľ����0,0Ϊ��,������ѭ��ֹͣ
		if (n >= 140) {
			printf("Genius");
		}
	}
	return 0;
}

//��������:��������,ÿ���������һ��������ʾ�ĳɼ�(90~100)
//�������:���ÿ������,���Perfect
//int main() {
//	int score = 0;
//	while (scanf("%d", &score) != EOF) {
//		if (score >= 90 && score <= 100) {
//			printf("Perfect");
//		}
//	}
//	return 0;
//}