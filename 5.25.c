#include <stdio.h>
#include <math.h>

//Ԥ��������
//int checkDate(int *p) {
//	int tmp[7] = { 0 };//����տ�ʼÿ��Ԫ�ض���0
//	int i;
//	for (i = 0; i < 5; i++) {
//		if (tmp[p[i]]) {//������λ�õı���Ѿ���1,������ظ�,ֱ�ӷ���0
//			return 0;
//		}
//		tmp[p[i]] = 1;//�������,������λ�ñ��Ϊ1
//	}
//	return 1;//���ȫ��������Ҳû�г����ظ������,�������
//}
//int main() {
//	int p[5] ;//0 1 2 3 4�ֱ����a b c d e
//	for (p[0] = 1; p[0] <= 5; p[0]++){
//		for (p[1] = 1; p[1] <= 5; p[1]++) {
//			for (p[2] = 1; p[2] <= 5; p[2]++) {
//				for (p[3] = 1; p[3] <= 5; p[3]++) {
//					for (p[4] = 1; p[4] <= 5; p[4]++) {
//						if ((p[1] == 2) + (p[0] == 3) == 1 &&//A:B�ڶ�,�ҵ���
//							(p[1] == 2) + (p[4] == 4) == 1 &&//B:�ҵڶ�,E����
//							(p[2] == 1) + (p[3] == 2) == 1 &&//C:�ҵ�һ,D�ڶ�
//							(p[2] == 5) + (p[3] == 3) == 1 &&//D:C���,�ҵ���
//							(p[4] == 4) + (p[0] == 1) == 1 &&//E:�ҵ���,A��һ
//							checkDate(p)) {//���ܲ���
//							for (int i = 0; i < 5; i++) {
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//    }
//	return 0;
//}

////��ӡ�������
//void yangHuiSanJiao(int n) {
//	int data[30] = { 1 };
//	int i, j;
//	printf("    1\n");//��һ��ֱ�Ӵ�ӡ1
//	for (i = 1; i < n; i++) {//�ӵڶ��п�ʼ
//		for (j = i; j > 0; j--) {//�Ӻ���ǰ��,������һ�е�������ʹ��ǰ�ͱ�����
//			data[j] = data[j] + data[j - 1];
//		}
//		for (j = 0; j <= i; j++) {//ÿ������ֱ�ӽ��д�ӡ
//			printf("%5d ", data[j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	yangHuiSanJiao(15);
//	return 0;
//}

//����Ϊ4�����ɷ��Ĺ���:
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C��˵��
//��֪3����˵���滰��1����˵���Ǽٻ���
//int main(){
//	int murder[4] = { 0 };//Ĭ��4���˶���������
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		murder[i] = 1;//����ĳ����������
//		if ((murder [0] != 1) +
//			(murder [2] == 1) +
//			(murder [3] == 1) +
//			(murder [3] != 1) == 3) {
//			break;//��������������ѭ��
//		}
//		murder[i] = 0;//������ͻ�ԭ
//	}
//	printf("������:%c\n",'A'+ i);//��ӡ���ֱ��
//	return 0;
//}

//��ӡˮ�ɻ���
int calcDecimalCount(int num) {
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}
int isShuiXian(int num){
	//��¼һ������� num ֵ
	int oldNum = num;
	//1.������Ǽ�λ��
	int n = calcDecimalCount(num);
	//2.ȡ��ÿһλ,�����
	int sum = 0;
	while (num != 0) {
		int tmp = num % 10;
		num /= 10;
		sum += (int)pow(tmp, n);
	}
	//3.�ж�һ���Ƿ���ˮ�ɻ���
	if (sum == oldNum) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 1; i < 100000; i++) {
		if (isShuiXian(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}