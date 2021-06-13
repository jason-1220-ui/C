#include <stdio.h>
#include <assert.h>

//ģ��ʵ��strcmp
//str1 <str2,����1; str1 <str2,����-1; str1 = str2,����0
//����1,ʹ��ָ�뷽ʽ
int my_strcmp(const char*str1, const char*str2) {
	int ret = 0;
	assert(str1 != NULL);//����,��ֹ���ݿ�ָ��
	assert(str2 != NULL);
	while ((*str1 != '\0') && 
      (*str1 == *str2)) {//ֻҪ��һ���ַ�����ָ������'\0'��ֹͣ�Ƚ�
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

//����2,ʹ�����鷽ʽ
//int my_strcmp(const char*str1, const char*str2) {
//	assert(str1 != NULL);//����,��ֹ���ݿ�ָ��
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

//ģ��ʵ��strcat
//char *my_strcat(char *dest, const char *src) {
//	char *ret = dest;
//	assert(dest != NULL);//����,��ֹ���ݿ�ָ��
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