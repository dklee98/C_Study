#include <stdio.h>

int main(void)
{
	int up_x, up_y;
	int down_x, down_y;
	int area;
	printf("�� ����� x,y ��ǥ�� �Է��ϼ��� ");
	scanf("%d %d", &up_x, &up_y);
	printf("�� �ϴ��� x,y ��ǥ�� �Է��ϼ��� ");
	scanf("%d %d", &down_x, &down_y);
	area = (down_x - up_x) * (down_y - up_y);
	printf("�� ������ �̷�� ���簢���� ���̴� %d�Դϴ�.\n", area);
	return 0;
}