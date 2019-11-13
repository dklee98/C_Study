#include <stdio.h>

int main(void)
{
	int asc;

	printf("아스키코드 값의 정수를 입력하세요 : ");
	scanf("%d", &asc);
	printf("입력한 정수에 해당하는 아스키 코드 문자는 %c 입니다.\n", asc);
	return 0;
}