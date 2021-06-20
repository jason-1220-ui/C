#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//图像相速度：给出两幅相同大小的黑白图像（用0-1矩阵）表示，求他们的相似度
//输入描述：第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开。1≤m≤100，1≤n≤100。
//之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。
//之后m行，每行n个整数0或1，表示第二幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。
//输出描述：一个实数，表示相似度（以百分比的形式给出），精确到小数点后两位。
//int main() {
//	int m = 0;
//	int n = 0;
//	int a[100][100] = { 0 };
//	int b[100][100] = { 0 };
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int j = 0;
//	double count = 0.0;
//	//输入数据
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	//求相同元素的个数
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			if (a[i][j] == b[i][j]) {
//				count++;
//			}
//		}
//	}
//	//求相速度注意乘以100
//	printf("%.2f\n", 100.0 * count / (m*n));
//	return 0;
//}

//验证登录
//输入描述：多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个位密码
//输出描述：针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）
int main() {
	char name[20] = { 0 };
	char password[20] = { 0 };
	while (scanf("%s %s", name, password) != EOF) {
		if (strcmp(name, "admin") == 0 &&strcmp(password, "admin") == 0) {
			printf("Login Success!\n");
		}
		else {
			printf("Login Fail!\n");
		}
	}
	return 0;
}