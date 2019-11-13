#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Blank_Index(char * str);
int NameCompare(char * str1, char * str2);
int AgeCompare(char * str1, char * str2);

int main(void) {
	char person1[30];
	char person2[30];

	//���ڿ��� �Է¹ޱ�
	printf("ù ��° ����� �̸��� ���̸� �Է��Ͻÿ� : ");
	fgets(person1, sizeof(person1), stdin);
	person1[strlen(person1) - 1] = 0;

	printf("�� ��° ����� �̸��� ���̸� �Է��Ͻÿ� : ");
	fgets(person2, sizeof(person2), stdin);
	person2[strlen(person2) - 1] = 0;
	if (NameCompare(person1, person2) == -1 || AgeCompare(person1, person2) == -1) {
		puts("������ �����ϴ�.");
		return -1;
	}
	
	if (NameCompare(person1, person2)) {
		puts("�̸��� �����մϴ�.");
	}
	else
	{
		puts("�̸��� �ٸ��ϴ�.");
	}
	if (AgeCompare(person1, person2)) {
		puts("���̰� �����մϴ�.");
	}
	else
	{
		puts("���̰� �ٸ��ϴ�.");
	}
	
	return 0;
}

//������ index ã��
int Blank_Index(char * str) {
	int i;
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			return i;
		}
	}
	return -1;	//������ ���� ���
}

//����index���� ���� ���� ���ؼ� �̸� ���ϱ�
int NameCompare(char * str1, char * str2) {	
	int blank1 = Blank_Index(str1);
	int blank2 = Blank_Index(str2);
	
	if (blank1 == -1 || blank2 == -1) {	//������ ������ -1
		return -1;
	}

	if (blank1 != blank2) {	//���� ��ġ�� �ٸ��� ������ 0
		return 0;
	}
	else
	{
		
		if (!strncmp(str1, str2, blank1)) {	//������ 1, �ٸ��� 0
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
//����index���� ���� ���� ���ؼ� ���� ���ϱ�
int AgeCompare(char * str1, char * str2) {
	int blank1 = Blank_Index(str1);
	int blank2 = Blank_Index(str2);
	int age1, age2;

	if (blank1 == -1 || blank2 == -1) {	//������ ������ -1
		return -1;
	}

	age1 = atoi(&str1[blank1] + 1);
	age2 = atoi(&str2[blank2] + 1);

	if (age1 == age2) {	//���̰� ������ 1
		return 1;
	}
	else
	{
		return 0;	//���̰� �ٸ��� 0
	}
}