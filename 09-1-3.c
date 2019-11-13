#include <stdio.h>

void Fibonacci(int n);

int main(void)
{
	int num;
	while (1) {
		printf("수를 입력하시오 : ");
		scanf("%d", &num);
		if (num <= 0)
			printf("양수를 입력해주세요\n");
		else break;
	}
	Fibonacci(num);
	return 0;
}

void Fibonacci(int n) {
	int a = 0, b = 1, f = 0;
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", f);
		a = b;
		b = f;
		f = a + b;
	}
}