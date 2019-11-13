#include <stdio.h>

int main(void)
{
	int dec;

	printf("10진수를 입력하시오 : ");
	scanf("%d", &dec);
	printf("입력한 값의 16진수 값은 : %X", dec);
	return 0;
}