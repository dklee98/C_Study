#include <stdio.h>

int main(void)
{
	int n, i;
	int fac = 0;

	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (i = n; i > 1; i--) {
		n *= (i-1);
	}
	printf("n! = %d\n", n);

	return 0;
}