#include <stdio.h>

int main(void)
{
	int num,input;
	int sum = 0;
	float avg = 0.f;
	int i=0;
	printf("총 입력할 정수의 수를 입력하시오 : ");
	scanf("%d", &num);
	if (num < i)	{
		printf("최소 1 이상을 입력하세요\n");
		return 0;
	}
	while (i < num) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &input);
		sum += input;
		i++;
	}
	avg = (float)sum/(float)i;
	printf("입력한 정수의 평균은 : %f\n", avg);

	return 0;
}