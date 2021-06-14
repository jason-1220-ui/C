#include <stdio.h>
#include <assert.h>


int my_strlen(const char *src) {
	int count = 0;
	while (*src) {
		count++;
		src++;
	}
	return count;
}
int main() {
	char arr[] = "abcdefg";
	printf("%d\n", my_strlen(arr));
	return 0;
}
//����2:��������ʱ�����ļ�����
//int my_strlen(const char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}
//����3:ָ��-ָ��ķ�ʽ
//int my_strlen(char *s) {
//	char *p = s;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - s;
//}


//ģ��ʵ��strcpy
//char *my_strcpy(char *dest, const char* src) {
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++);
//	return ret;
//}
//int main() {
//	char arr1[1024] = "hello";
//	char arr2[] = "world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}