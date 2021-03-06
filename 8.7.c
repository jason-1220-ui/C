#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef struct PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

#define MAX_PERSON_INFO_SIZE 1000
typedef struct AddressBook {
	PersonInfo persons[MAX_PERSON_INFO_SIZE];
	//通过size表示persons数组中实际有效的元素
	//[0,size）范围的元素是有效元素
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	memset(addressBook->persons, 0, sizeof(addressBook->persons));

	addressBook->size = 0;
}

int menu() {
	printf("==================\n");
	printf("欢迎使用通讯录程序\n");
	printf("1.查看所有联系人\n");
	printf("2.新增联系人\n");
	printf("3.根据名字查找联系人\n");
	printf("4.删除联系人\n");
	printf("5.修改联系人信息\n");
	printf("0.退出\n");
	printf("==================\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void showPersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	//只需要把每个联系人的信息打印出来即可
	printf("查看所有联系人...\n\n");
	for (int i = 0; i < addressBook->size; i++) {
		PersonInfo* p = &addressBook->persons[i];
		printf("[%d]%s\t%s\n", i, p->name, p->phone);
	}
	printf("\n共显示了%d条数据\n", addressBook->size);
}

void addPersonInfo(AddressBook* addressBook) {
	//把新联系人的信息放在下标为size位置的元素上
	printf("新增联系人...\n\n");
	if (addressBook->size >= MAX_PERSON_INFO_SIZE) {
		//联系人已满
		printf("新增失败！联系人已满！\n");
	}
	PersonInfo* p = &addressBook->persons[addressBook->size];
	printf("请输入新联系人的姓名:\n");
	scanf("%s", p->name);
	printf("请输入新联系人的电话:\n");
	scanf("%s", p->phone);
	//自增size
	addressBook->size++;
	printf("\n新增联系人成功！\n\n");
}

void findPersonInfo(AddressBook* addressBook) {
	//根据姓名找电话
	assert(addressBook != NULL);
	printf("根据姓名查找联系人！\n\n");
	printf("请输入要查找的姓名:");
	char name[1024] = { 0 };
	scanf("%s", name);
	int count = 0;
	for (int i = 0; i < addressBook->size; i++) {
		PersonInfo* p = &addressBook->persons[i];
		if (strcmp(p->name, name) == 0) {
			//有重名的情况，所以不能加不break，要全部打印出来
			printf("[%d]%s\t\t%s\n", i, p->name, p->phone);
			count++;
		}
	}
	printf("\n查找完成！共查找到%d条记录\n\n", count);
}

void deletePersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	printf("删除联系人！\n\n");
	printf("请输入要删除联系人的序号：");
	int id = 0;
	scanf("%d", &id);
	if (id<0 || id>addressBook->size) {
		printf("您输入的id有误！删除联系人失败！\n");
		return;
	}
	if (id == addressBook->size - 1) {
		//此时要删除最后一个元素
		addressBook->size--;
		printf("\n删除成功！\n\n");
		return;
	}
	//删除中间元素，把最后的元素拷贝到中间元素的位置上即可
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	//删除末尾元素
	addressBook->size--;
	printf("\n删除成功！\n\n");
}

void updatePersonInfo(AddressBook* addressBook) {
	//修改联系人，根据用户输入的序号来决定修改哪个记录
	assert(addressBook != NULL);
	printf("请修改联系人信息！\n\n");
	printf("请输入要修改的联系人序号：");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("您输入的id有误！修改联系人失败！\n");
		return;
	}
	//先取出联系人的结构体变量
	PersonInfo* p = &addressBook->persons[id];
	printf("如果需要保持不变，请重新输入*");
	printf("请输入新的联系人的姓名：");
	char name[1024] = { 0 };
	//我们发现使用scanf不太行，直接输入回车，scanf无法返回
	//我们可以使用gets代替
	scanf("%s", &name);
	//gets(name);
	if (strcmp(name, "*") != 0) {
		//如果用户输入的不是回车，把name拷贝到结构体中
		strcmp(p->name, name);
	}
	printf("请输入新的联系人电话：");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	//gets(phone);
	if (strcmp(name, "*") != 0) {
		strcpy(p->phone, phone);
	}
	printf("修改联系人完成！\n");
}

typedef void(*Func)(AddressBook*);
AddressBook addressBook;

int main() {
	//先创建结构体变量

	init(&addressBook);
	//创建一个函数指针数组
	Func arr[] = {
		NULL,
		showPersonInfo,
		addPersonInfo,
		findPersonInfo,
		deletePersonInfo,
		updatePersonInfo
	};
	while (1) {
		int choice = menu();
		if (choice < 0 || choice >= sizeof(arr) / sizeof(arr[0])) {
			printf("非法的choice！\n");
			continue;
		}
		if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		arr[choice](&addressBook);
	}
	return 0;
}