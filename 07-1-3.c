#include <stdio.h>

int main(void)
{
	int num;
	int sum = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	sum = num;
	while (num != 0) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &num);
		sum += num;
	}
	printf("입력된 모든 정수의 합은 %d 입니다.\n", sum);
	return 0;
}