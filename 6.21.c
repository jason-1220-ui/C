#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��żͳ��
//����������һ�У�һ������N.��1��N��100000��
//���������һ�У�1-N֮�������ĸ�����ż���ĸ������ÿո�ֿ�
//����1
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;//�����ĸ���
//	int even = 0;
//	for (i = 1; i <= n; i++) {
//		if (i % 2 == 1) {
//			odd++;
//		}
//	}
//	printf("%d %d\n", odd, n - odd);
//	return 0;
//}
//����2
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;//�����ĸ���
//	if (n % 2 == 0) {
//		odd = n / 2;//���n��ż������������ż��һ����
//	}
//	else {
//		odd = n / 2 + 1;//���n����������������ż����1
//	}
//	printf("%d %d\n", odd, n - odd);
//	return 0;
//}

//�������
//��һ��ΪN M��N������������M��������������M,N��10������������N��Ϊ�������
//һ�У����д���0��Ԫ��֮��
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