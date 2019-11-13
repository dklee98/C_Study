#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d ", 3 * i);
		num--;
		i++;
	}
	return 0;
}