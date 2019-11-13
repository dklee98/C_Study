#include <stdio.h>

int main(void)
{
	int n, i;
	int fac = 0;

	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);

	for (i = n; i > 1; i--) {
		n *= (i-1);
	}
	printf("n! = %d\n", n);

	return 0;
}