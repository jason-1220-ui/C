#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 冒泡排序.写一个函数, 既能够支持升序, 也能支持降序
//加入一个新的参数asc,如果asc为1,表示升序排序,为0表示降序排序
//方法1 使用回调函数
//创建一个函数指针的类型Cmp
//这个类型的函数指针对应的函数有两个int 参数,并返回int值
typedef int(*Cmp)(int x, int y);
void bubbleSort(int arr[], int len, Cmp cmp) {//升序
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

//方法2
//void bubbleSort(int arr[], int len, int asc) {//升序
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

//倒置字符串.讲一句话的单词进行倒置,标点不倒置
//void reverse(char* str, int len) {//相当于针对一个指定的范围进行逆置
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
//	reverse(input, strlen(input));//先针对整个字符串进行逆序
//	char* start = input;//再针对每个单词进行逆序,通过start这个指针来遍历字符串
//		//start相当于表示当前单词的开始位置,还需找到当前单词的结束位置
//	while (*start != '\0') {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}//当上面的while循环结束后,预期end指向了该单词的末尾
//		reverse(start, end - start);//单词逆置完了
//		if (*end == '\0') {//end 指向结尾,即全部逆置完了
//			break;
//		}
//		else {//end 指向空格,应继续处理下一个单词
//			start = end + 1;
//		}
//	}
//}
//int main() {
//	while (1) {
//		//先读取这个字符串
//		//用scanf("%s");读取字符串,遇到 空格 就结束了
//		//此处我们是预期读到一个完整的行(包括空格)
//		char input[1024] = { 0 };
//		char* ret = gets(input);
//		if (ret == NULL) {
//			break;//读取完毕
//		}
//		reverseWord(input);
//		printf("%s\n", input);
//	}
//	return 0;
//}

//求两个数的最小公倍数
//int minGongbei(int x, int y) {
//	int maxNum = x > y ? x : y;//三目运算符,若x>y,表达式值为x,不成立则为y
//	for (int i = maxNum; i <= x * y; i++) {
//		if (i % x == 0 && i % y == 0) {
//			return i;
//		}
//	}
//	return 0;//此处的return一定不会触发
//}
//int main() {
//	//在线OJ系统往往会输入多组用例,每组用例是输入两个整数而已
//	while (1) {//加入一层循环会更使程序更加准确
//		int x = 0;
//		int y = 0;
//        //scanf的返回值表示读到的数据的个数
//		//如果用户真的输入了两个整数,此时scanf就会返回2
//		int n = scanf("%d %d",&x,&y);//在牛客网中,若这样写的话可能会没法通过所有的用例
//		int result = minGongbei(x, y);
//		printf("%d\n", result);
//	}
//	return 0;
//}

//写一段代码将输入的数字转化为十六进制的结果
//int main() {
//	int n = 0;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	int arr[40] = { 0 };
//	int i = 0;
//	while (n) {//当n=0时,跳出循环
//		arr[i++] = n % 16;//若想转化成其他进制的数,只需将16改成需要的进制数
//		n = n / 16;
//	}
//	for (i--; i >= 0; i--) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}