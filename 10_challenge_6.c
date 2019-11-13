#include	<stdio.h>

int main(void) {
	int input;
	int hour, min, sec;

	printf("ÃÊ(second) ÀÔ·Â : ");
	scanf("%d", &input);

	sec = input % 60;
	min = input / 60;
	hour = min / 60;
	min -= hour * 60;
	
	printf("[h:%d, m:%d, s:%d]", hour, min, sec);
	return 0;
}