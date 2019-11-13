#include <stdio.h>

int main(void)
{
	char asc;

	printf("아스키코드 문자를 입력하세요 : ");
	scanf("%c", &asc);
	printf("입력한 문자에 해당하는 아스키 수는 %d 입니다.\n", asc);
	return 0;
}