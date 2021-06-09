#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//竞选社长    输入描述:一行,字符序列,包含A或B,输入以字符0结束
//输出描述:一行,一个字符,A或B或E,输出A表示A得票数多,输出B表示B得票数多,输出E表示二人得票数相等
//int main() {
//	char arr[1024] = { 0 };
//	gets(arr);//gets在结果字符串中不包含结束的换行符
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

//题目:输入一个整数表示一个人的智商,如果大于等于140,则表明他是一个天才,输出Genius
//输入描述:多组输入,每行输入包括一个整数表示的智商
//输出描述:针对每行输入,输出Genius
//代码1
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		if (n >= 140) {
//			printf("Genius");
//		}
//	}
//	return 0;
//}
//代码2
int main() {
	int n = 0;
	while (~scanf("%d", &n)) {
		//这种写法是因为scanf读取失败返回EOF,EOF是-1,所以按位取反后的结果是0,0为假,可以让循环停止
		if (n >= 140) {
			printf("Genius");
		}
	}
	return 0;
}

//输入描述:多组输入,每行输入包括一个整数表示的成绩(90~100)
//输出描述:针对每行输入,输出Perfect
//int main() {
//	int score = 0;
//	while (scanf("%d", &score) != EOF) {
//		if (score >= 90 && score <= 100) {
//			printf("Perfect");
//		}
//	}
//	return 0;
//}