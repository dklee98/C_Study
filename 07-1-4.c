#include <stdio.h>

int main(void)
{
	int num;
	int i = 9;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	while (i > 0) {
		printf("%d �� %d = %d\n", num, i, num * i);
		i--;
	}
	return 0;
}