#include <stdio.h>
#include <math.h>

//预测比赛结果
//int checkDate(int *p) {
//	int tmp[7] = { 0 };//假设刚开始每个元素都是0
//	int i;
//	for (i = 0; i < 5; i++) {
//		if (tmp[p[i]]) {//如果这个位置的标记已经是1,则代表重复,直接返回0
//			return 0;
//		}
//		tmp[p[i]] = 1;//如果不是,则给这个位置标记为1
//	}
//	return 1;//如果全部标记完毕也没有出现重复的情况,代表完成
//}
//int main() {
//	int p[5] ;//0 1 2 3 4分别代表a b c d e
//	for (p[0] = 1; p[0] <= 5; p[0]++){
//		for (p[1] = 1; p[1] <= 5; p[1]++) {
//			for (p[2] = 1; p[2] <= 5; p[2]++) {
//				for (p[3] = 1; p[3] <= 5; p[3]++) {
//					for (p[4] = 1; p[4] <= 5; p[4]++) {
//						if ((p[1] == 2) + (p[0] == 3) == 1 &&//A:B第二,我第三
//							(p[1] == 2) + (p[4] == 4) == 1 &&//B:我第二,E第四
//							(p[2] == 1) + (p[3] == 2) == 1 &&//C:我第一,D第二
//							(p[2] == 5) + (p[3] == 3) == 1 &&//D:C最后,我第三
//							(p[4] == 4) + (p[0] == 1) == 1 &&//E:我第四,A第一
//							checkDate(p)) {//不能并列
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

////打印杨辉三角
//void yangHuiSanJiao(int n) {
//	int data[30] = { 1 };
//	int i, j;
//	printf("    1\n");//第一行直接打印1
//	for (i = 1; i < n; i++) {//从第二行开始
//		for (j = i; j > 0; j--) {//从后往前填,避免上一行的数据在使用前就被覆盖
//			data[j] = data[j] + data[j - 1];
//		}
//		for (j = 0; j <= i; j++) {//每行填完直接进行打印
//			printf("%5d ", data[j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	yangHuiSanJiao(15);
//	return 0;
//}

//以下为4个嫌疑犯的供词:
//A说:不是我
//B说:是C
//C说:是D
//D说:C在说谎
//已知3个人说了真话，1个人说的是假话。
//int main(){
//	int murder[4] = { 0 };//默认4个人都不是凶手
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		murder[i] = 1;//假设某个人是凶手
//		if ((murder [0] != 1) +
//			(murder [2] == 1) +
//			(murder [3] == 1) +
//			(murder [3] != 1) == 3) {
//			break;//满足条件就跳出循环
//		}
//		murder[i] = 0;//不满足就还原
//	}
//	printf("凶手是:%c\n",'A'+ i);//打印凶手编号
//	return 0;
//}

//打印水仙花数
int calcDecimalCount(int num) {
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}
int isShuiXian(int num){
	//记录一下最初的 num 值
	int oldNum = num;
	//1.求出这是几位数
	int n = calcDecimalCount(num);
	//2.取出每一位,并求和
	int sum = 0;
	while (num != 0) {
		int tmp = num % 10;
		num /= 10;
		sum += (int)pow(tmp, n);
	}
	//3.判定一下是否是水仙花数
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