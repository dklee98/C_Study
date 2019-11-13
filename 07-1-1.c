#include <stdio.h>

int main(void)
{
	int num;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("Hello World!\n");
		num--;
	}
	return 0;
}