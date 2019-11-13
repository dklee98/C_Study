#include <stdio.h>

int main()
{
	int n1, n2, r;
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);
	r = n1 >= n2 ? n2 : n1;
	while (1)
	{
		if ((n1%r) == 0 && (n2%r) == 0)
		{
			printf("두 정수 %d, %d의 최대공약수는 %d입니다.", n1, n2, r);
			break;
		}
		else
		{
			r--;
			continue;
		}
	}
	return 0;
}
