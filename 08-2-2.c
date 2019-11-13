#include <stdio.h>

int main(void)
{
	int a, z;
	int i;
	for (a = 0; a < 10; a++) {
		z = 9 - a;
		printf("A = %d, Z = %d\n", a, z);
		printf("%d%d + %d%d = %d\n\n", a, z, z, a, (10*a + z) + (10*z + a));
	}
	return 0;
}