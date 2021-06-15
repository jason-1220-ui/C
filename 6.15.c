#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//模拟实现strstr函数
//const char* myStrstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);//校验,防止传递空指针
//	assert(str2 != NULL);
//	assert(*str1 != '\0');//防止传递空字符串
//	assert(*str2 != '\0');
//	const char* black = str1;
//	//外层循环通过 black 控制从 str1 的哪个位置开始找字符串
//	while (*black != '\0') {
//		const char *red = black;
//		const char* sub = str2;
//		//里层循环就是从black开始,判定当前这个字符串和str2是否相等
//		while (*red != '\0' && *sub != '\0'
//			&& *red == *sub) {
//			red++;
//			sub++;
//		}
//		//循环结束,有三种可能 1.*red==\0,可以直接结束循环,也可直接进入下次循环 
//		//2. *sub==\0 ,找到字符串了,直接返回black
//		//3. *red != *sub,直接进入下次循环
//		/*if (*red == '\0' || *red == *sub) {
//			black++;
//			continue;
//		}*/
//		if (*sub == '\0') {
//			return black;
//		}
//		black++;
//	}
//	return NULL;
//}
//int main() {
//	char* str1 = "hello world";
//	char* str2 = "llo";
//	const char* result = myStrstr(str1, str2);
//	printf("%c\n", *result);
//	return 0;
//}

//模拟实现strtok函数
//int main() {
//	char str[] = "aaaa bbbb cccc dddd";
//	char* pch = strtok(str," ");//执行1次
//	while (pch != NULL) {//循环执行4次,第五次的时候遇到空字符,结束循环
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ");
//	}
//	return 0;
//}

//模拟实现memcpy(memcpy不能处理内存重叠的情况)
//void* myMemcpy(void* dest, const void* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	//按照字节为单位进行拷贝
//	char* cdest = (char*)dest;
//	const char* csrc = (const char*)src;
//	for (size_t i = 0; i < num; i++) {
//		cdest[i] = csrc[i];
//	}
//	return dest;
//}
//int main() {
//	int arr[] = { 1,2,3,4 };
//	int arr2[100] = { 0 };
//	myMemcpy(arr2, arr, sizeof(arr));
//	for (int i = 0; i < 4; i++) {
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}

//模拟实现memmove函数
//void* myMemmove(void* dest, const void* src, size_t num){
//  assert(dest != NULL);
//  assert(src != NULL);
//  assert(num != 0);
//	char* cdest = (char*)dest;
//	const char* csrc = (const char*)src;
//	if (csrc <= cdest && cdest <= csrc + num){
//		//如果内存重叠了,倒着拷贝
//		for (size_t i = num; i > 0; i--) {
//			cdest[i - 1] = csrc[i - 1];
//		}
//		return dest;
//	}
//	else {
//		//如果不重叠,正着拷贝
//		for (size_t i = 0; i < num; i++) {
//			cdest[i] = csrc[i];
//		}
//		return dest;
//	}
//}
//int main() {
//	char arr[10] = "abcd";
//	myMemmove(arr + 2, arr, 4);
//	printf("%s\n", arr + 2);
//	return 0;
//}

//模拟实现memcmp函数
//int myMemcmp(const void* ptr1, const void* ptr2, size_t num) {
//	assert(ptr1 != NULL);
//	assert(ptr2 != NULL);
//	assert(num != 0);
//	const char* cptr1 = (const char*)ptr1;
//	const char* cptr2 = (const char*)ptr2;
//	for (size_t i = 0; i < num; i++) {
//		if (cptr1[i] < cptr2[i]) {
//			return -1;
//		}
//		else if (cptr1[i] > cptr2[i]) {
//			return 1;
//		}
//		else {
//			continue;
//		}
//	}
//	return 0;
//}
//int main() {
//	char arr1[1024] = "hello";
//	char arr2[] = "worldsw";
//	int ret = myMemcmp(arr1, arr2,sizeof(arr1)/sizeof(arr1[0]));
//	printf("%d\n", ret);
//	return 0;
//}

//模拟实现memset函数
void* myMemset(void* ptr, int value, size_t num) {
	assert(ptr != NULL);
	assert(num != 0);
	char* cptr = (char*)ptr;
	for (size_t i = 0; i < num; i++) {
		cptr[i] = (char)value;
	}
	return ptr;
}
int main() {
	char arr[5] = "abcd";
	myMemset(arr, 0, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}