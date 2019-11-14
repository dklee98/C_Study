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

	printf("도서 정보 입력\n");
	for (i = 0; i < 3; i++) {
		printf("제목 : ");
		scanf("%[^\n]", &novel[i].name);
		printf("저자 : ");
		getchar();
		scanf("%[^\n]", &novel[i].author);
		printf("페이지수 : ");
		scanf("%d", &novel[i].page);
		getchar();
	}

	printf("\n도서정보출력\n");
	for (i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("제목 : %s\n", novel[i].name);
		printf("저자 : %s\n", novel[i].author);
		printf("페이지 수 : %d\n", novel[i].page);
	}

	return 0;
}