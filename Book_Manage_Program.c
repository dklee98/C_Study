#include <stdio.h>

typedef struct 
{
	char name[20];
	char author[20];
	int page;
} BOOK;

int main(void) {
	BOOK novel[3] = { 0,0,0 };
	int i;

	printf("���� ���� �Է�\n");
	for (i = 0; i < 3; i++) {
		printf("���� : ");
		scanf("%[^\n]", &novel[i].name);
		printf("���� : ");
		getchar();
		scanf("%[^\n]", &novel[i].author);
		printf("�������� : ");
		scanf("%d", &novel[i].page);
		getchar();
	}

	printf("\n�����������\n");
	for (i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("���� : %s\n", novel[i].name);
		printf("���� : %s\n", novel[i].author);
		printf("������ �� : %d\n", novel[i].page);
	}

	return 0;
}