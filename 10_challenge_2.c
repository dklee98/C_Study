#include <stdio.h>

void GuGu(int num1, int num2);

int main()
{
	int num1, num2;
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	GuGu(num1, num2);
	return 0;
}

void GuGu(int num1, int num2) {
	int i, j;

	if (num1 >= num2) {
		for (i = num2; i <= num1; i++) {
			for (j = 1; j < 10; j++) {
				printf("%d × %d = %d\n", i, j, i*j);
			}
			printf("\n");
		}
	}
	else {
		for (i = num1; i <= num2; i++) {
			for (j = 1; j < 10; j++) {
				printf("%d × %d = %d\n", i, j, i*j);
			}
			printf("\n");
		}
	}
}
