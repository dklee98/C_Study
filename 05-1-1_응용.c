#include <stdio.h>

int main(void)
{
	int x,y,z,w;
	int area;
	int x_dis, y_dis;
	printf("ù��° x,y ��ǥ�� �Է��ϼ��� ");
	scanf("%d %d", &x, &y);
	printf("�ι�° x,y ��ǥ�� �Է��ϼ��� ");
	scanf("%d %d", &z, &w);
	if (x - z < 0)
		x_dis = z - x;
	else
		x_dis = x - z;
	if (y - w < 0)
		y_dis = w - y;
	else
		y_dis = y - w;
	area = x_dis * y_dis;
	printf("�� ������ �̷�� ���簢���� ���̴� %d�Դϴ�.\n", area);
	return 0;
}