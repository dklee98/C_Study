#include <stdio.h>

void Fibonacci(int n);

int main(void)
{
	int num;
	while (1) {
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (num <= 0)
			printf("����� �Է����ּ���\n");
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