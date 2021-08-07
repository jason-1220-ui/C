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
	//ͨ��size��ʾpersons������ʵ����Ч��Ԫ��
	//[0,size����Χ��Ԫ������ЧԪ��
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	memset(addressBook->persons, 0, sizeof(addressBook->persons));

	addressBook->size = 0;
}

int menu() {
	printf("==================\n");
	printf("��ӭʹ��ͨѶ¼����\n");
	printf("1.�鿴������ϵ��\n");
	printf("2.������ϵ��\n");
	printf("3.�������ֲ�����ϵ��\n");
	printf("4.ɾ����ϵ��\n");
	printf("5.�޸���ϵ����Ϣ\n");
	printf("0.�˳�\n");
	printf("==================\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void showPersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	//ֻ��Ҫ��ÿ����ϵ�˵���Ϣ��ӡ��������
	printf("�鿴������ϵ��...\n\n");
	for (int i = 0; i < addressBook->size; i++) {
		PersonInfo* p = &addressBook->persons[i];
		printf("[%d]%s\t%s\n", i, p->name, p->phone);
	}
	printf("\n����ʾ��%d������\n", addressBook->size);
}

void addPersonInfo(AddressBook* addressBook) {
	//������ϵ�˵���Ϣ�����±�Ϊsizeλ�õ�Ԫ����
	printf("������ϵ��...\n\n");
	if (addressBook->size >= MAX_PERSON_INFO_SIZE) {
		//��ϵ������
		printf("����ʧ�ܣ���ϵ��������\n");
	}
	PersonInfo* p = &addressBook->persons[addressBook->size];
	printf("����������ϵ�˵�����:\n");
	scanf("%s", p->name);
	printf("����������ϵ�˵ĵ绰:\n");
	scanf("%s", p->phone);
	//����size
	addressBook->size++;
	printf("\n������ϵ�˳ɹ���\n\n");
}

void findPersonInfo(AddressBook* addressBook) {
	//���������ҵ绰
	assert(addressBook != NULL);
	printf("��������������ϵ�ˣ�\n\n");
	printf("������Ҫ���ҵ�����:");
	char name[1024] = { 0 };
	scanf("%s", name);
	int count = 0;
	for (int i = 0; i < addressBook->size; i++) {
		PersonInfo* p = &addressBook->persons[i];
		if (strcmp(p->name, name) == 0) {
			//����������������Բ��ܼӲ�break��Ҫȫ����ӡ����
			printf("[%d]%s\t\t%s\n", i, p->name, p->phone);
			count++;
		}
	}
	printf("\n������ɣ������ҵ�%d����¼\n\n", count);
}

void deletePersonInfo(AddressBook* addressBook) {
	assert(addressBook != NULL);
	printf("ɾ����ϵ�ˣ�\n\n");
	printf("������Ҫɾ����ϵ�˵���ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id<0 || id>addressBook->size) {
		printf("�������id����ɾ����ϵ��ʧ�ܣ�\n");
		return;
	}
	if (id == addressBook->size - 1) {
		//��ʱҪɾ�����һ��Ԫ��
		addressBook->size--;
		printf("\nɾ���ɹ���\n\n");
		return;
	}
	//ɾ���м�Ԫ�أ�������Ԫ�ؿ������м�Ԫ�ص�λ���ϼ���
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	//ɾ��ĩβԪ��
	addressBook->size--;
	printf("\nɾ���ɹ���\n\n");
}

void updatePersonInfo(AddressBook* addressBook) {
	//�޸���ϵ�ˣ������û����������������޸��ĸ���¼
	assert(addressBook != NULL);
	printf("���޸���ϵ����Ϣ��\n\n");
	printf("������Ҫ�޸ĵ���ϵ����ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("�������id�����޸���ϵ��ʧ�ܣ�\n");
		return;
	}
	//��ȡ����ϵ�˵Ľṹ�����
	PersonInfo* p = &addressBook->persons[id];
	printf("�����Ҫ���ֲ��䣬����������*");
	printf("�������µ���ϵ�˵�������");
	char name[1024] = { 0 };
	//���Ƿ���ʹ��scanf��̫�У�ֱ������س���scanf�޷�����
	//���ǿ���ʹ��gets����
	scanf("%s", &name);
	//gets(name);
	if (strcmp(name, "*") != 0) {
		//����û�����Ĳ��ǻس�����name�������ṹ����
		strcmp(p->name, name);
	}
	printf("�������µ���ϵ�˵绰��");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	//gets(phone);
	if (strcmp(name, "*") != 0) {
		strcpy(p->phone, phone);
	}
	printf("�޸���ϵ����ɣ�\n");
}

typedef void(*Func)(AddressBook*);
AddressBook addressBook;

int main() {
	//�ȴ����ṹ�����

	init(&addressBook);
	//����һ������ָ������
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
			printf("�Ƿ���choice��\n");
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