#include <stdio.h>

int main()
{
	int n1, n2, r;
	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &n1, &n2);
	r = n1 >= n2 ? n2 : n1;
	while (1)
	{
		if ((n1%r) == 0 && (n2%r) == 0)
		{
			printf("�� ���� %d, %d�� �ִ������� %d�Դϴ�.", n1, n2, r);
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
