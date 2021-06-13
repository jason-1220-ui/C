#include <stdio.h>
#include <assert.h>

//模拟实现strcmp
//str1 <str2,返回1; str1 <str2,返回-1; str1 = str2,返回0
//代码1,使用指针方式
int my_strcmp(const char*str1, const char*str2) {
	int ret = 0;
	assert(str1 != NULL);//断言,防止传递空指针
	assert(str2 != NULL);
	while ((*str1 != '\0') && 
      (*str1 == *str2)) {//只要有一个字符串的指针遇到'\0'就停止比较
		str1++;
		str2++;
	}
	if (*str1 > *str2) {
		ret = 1;
	}
	else if (*str1 < *str2) {
		ret = -1;
	}
	else {
		ret = 0;
	}
	return ret;
}
int main() {
	char str1[] = "ab";
	char str2[] = "abc";
	printf("%d\n", my_strcmp(str1, str2));
	return 0;
}

//代码2,使用数组方式
//int my_strcmp(const char*str1, const char*str2) {
//	assert(str1 != NULL);//断言,防止传递空指针
//	assert(str2 != NULL);
//	int idx = 0;
//	int ret = 0;
//	while (str1[idx] != '\0'&&str1[idx] == str2[idx]) {
//		idx++;
//	}
//	if (str1[idx] > str2[idx]) {
//		ret = 1;
//	}
//	else if (str1[idx] < str2[idx]) {
//		ret = -1;
//	}
//	else {
//		ret = 0;
//	}
//	return ret;
//}
//int main() {
//	char str1[] = "ab";
//	char str2[] = "abc";
//	printf("%d\n", my_strcmp(str1, str2));
//	return 0;
//}

//模拟实现strcat
//char *my_strcat(char *dest, const char *src) {
//	char *ret = dest;
//	assert(dest != NULL);//断言,防止传递空指针
//	assert(src != NULL);
//	while (*dest) {
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//int main() {
//	char arr1[15] = "abcd";
//	char *arr2 = "efgh";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}