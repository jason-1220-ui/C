#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����������
//��������:��������,һ������(3-20),��ʾ���������αߵĳ���,�����ֵ�����,Ҳ��ʾ�������
//�������:���ÿ������,�����������ɵĶ�Ӧ���ȵ�����������,ÿ�����ֺ�����һ���ո�
int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		for (i = 1; i <= n; i++) {
			int j = 0;
			for (j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}

//����Ա����
//��������:һ��,����7������(0-100),����7���ɼ�,�ÿո�ָ�
//�������:һ��,���ȥ����߷ֺ���ͷֵ�ƽ���ɼ�,С�������2λ,ÿ���������
//int main() {
//	int i = 0;
//	int sum = 0;
//	int min = 100;//������Сֵ��100
//	int max = 0;//�������ֵ��0
//	int score = 0;
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &score);//����
//		sum += score;//���
//		if (score > max) {
//			max = score;//�����ֵ
//		}
//		if (score < min) {
//			min = score;//����Сֵ
//		}
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}