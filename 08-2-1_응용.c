#include <stdio.h>

int main(void)
{
	int n, i;

	for (i = 1; i < 10; i++) {
		if (i % 2 == 1)	continue;
		else{
			for (n = 1; n <= i; n++) {
				printf("%d ¡¿ %d = %d\n", i, n, i*n);
			}
			printf("\n");
		}
	}
	return 0;
}