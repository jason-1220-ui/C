#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//ģ��ʵ��strstr����
//const char* myStrstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);//У��,��ֹ���ݿ�ָ��
//	assert(str2 != NULL);
//	assert(*str1 != '\0');//��ֹ���ݿ��ַ���
//	assert(*str2 != '\0');
//	const char* black = str1;
//	//���ѭ��ͨ�� black ���ƴ� str1 ���ĸ�λ�ÿ�ʼ���ַ���
//	while (*black != '\0') {
//		const char *red = black;
//		const char* sub = str2;
//		//���ѭ�����Ǵ�black��ʼ,�ж���ǰ����ַ�����str2�Ƿ����
//		while (*red != '\0' && *sub != '\0'
//			&& *red == *sub) {
//			red++;
//			sub++;
//		}
//		//ѭ������,�����ֿ��� 1.*red==\0,����ֱ�ӽ���ѭ��,Ҳ��ֱ�ӽ����´�ѭ�� 
//		//2. *sub==\0 ,�ҵ��ַ�����,ֱ�ӷ���black
//		//3. *red != *sub,ֱ�ӽ����´�ѭ��
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

//ģ��ʵ��strtok����
//int main() {
//	char str[] = "aaaa bbbb cccc dddd";
//	char* pch = strtok(str," ");//ִ��1��
//	while (pch != NULL) {//ѭ��ִ��4��,����ε�ʱ���������ַ�,����ѭ��
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ");
//	}
//	return 0;
//}

//ģ��ʵ��memcpy(memcpy���ܴ����ڴ��ص������)
//void* myMemcpy(void* dest, const void* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	//�����ֽ�Ϊ��λ���п���
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

//ģ��ʵ��memmove����
//void* myMemmove(void* dest, const void* src, size_t num){
//  assert(dest != NULL);
//  assert(src != NULL);
//  assert(num != 0);
//	char* cdest = (char*)dest;
//	const char* csrc = (const char*)src;
//	if (csrc <= cdest && cdest <= csrc + num){
//		//����ڴ��ص���,���ſ���
//		for (size_t i = num; i > 0; i--) {
//			cdest[i - 1] = csrc[i - 1];
//		}
//		return dest;
//	}
//	else {
//		//������ص�,���ſ���
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

//ģ��ʵ��memcmp����
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

//ģ��ʵ��memset����
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