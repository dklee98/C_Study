#include <stdio.h>

int main(void)
{
	int up_x, up_y;
	int down_x, down_y;
	int area;
	printf("좌 상단의 x,y 좌표를 입력하세요 ");
	scanf("%d %d", &up_x, &up_y);
	printf("우 하단의 x,y 좌표를 입력하세요 ");
	scanf("%d %d", &down_x, &down_y);
	area = (down_x - up_x) * (down_y - up_y);
	printf("두 지점이 이루는 직사각형의 넓이는 %d입니다.\n", area);
	return 0;
}