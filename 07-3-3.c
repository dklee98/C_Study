#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 1;

	do
	{
		is = 1;
		do
		{
			printf("%d ¡¿ %d = %d\n", cur, is, cur*is);
			is++;
		} while (is <10);
		printf("\n");
		cur++;
	} while (cur < 10);
	return 0;
}