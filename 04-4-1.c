#include <stdio.h>

int main(void)
{
	int num;	//4byte
	printf("정수를 입력하세요 ");
	scanf("%d", &num);

	num = ~num;
	num += 1;
	printf("입력한 정수의 부호를 바꾼 값은 %d 입니다.\n", num);
	return 0;
}