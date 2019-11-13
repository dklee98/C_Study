#include <stdio.h>

int main(void)
{
	int x,y,z,w;
	int area;
	int x_dis, y_dis;
	printf("첫번째 x,y 좌표를 입력하세요 ");
	scanf("%d %d", &x, &y);
	printf("두번째 x,y 좌표를 입력하세요 ");
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
	printf("두 지점이 이루는 직사각형의 넓이는 %d입니다.\n", area);
	return 0;
}