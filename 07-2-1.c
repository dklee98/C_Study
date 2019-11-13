#include <stdio.h>

int main(void)
{
	int num, i=0;
	int sum = 0;
	while (i < 5) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &num);
		while (num < 1) {
			printf("1이상의 정수를 입력하시오 : ");
			scanf("%d", &num);
		}
		sum += num;
		i++;
	}
	printf("5개의 정수의 합은 %d 입니다. \n", sum);
	return 0;
}