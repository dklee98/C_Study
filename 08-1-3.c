#include <stdio.h>

int main(void)
{
	int korean, english, math;
	float avg;
	printf("국어, 영어, 수학 성적을 입력하시오 : ");
	scanf("%d %d %d", &korean, &english, &math);

	avg = (float)(korean + english + math) / 3.f;
	printf("이 학생의 평균점수는 %f 입니다.\n", avg);
	if (avg >= 90)
		printf("이 학생의 성적은 %c 입니다.\n", 'A');
	else if (avg >= 80)
		printf("이 학생의 성적은 %c 입니다.\n", 'B');
	else if (avg >= 70)
		printf("이 학생의 성적은 %c 입니다.\n", 'C');
	else if (avg >= 50)
		printf("이 학생의 성적은 %c 입니다.\n", 'D');
	else
		printf("이 학생의 성적은 %c 입니다.\n", 'F');
	return 0;
}