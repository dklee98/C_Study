#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void HumanChoice(int com[]);

int main(void) {
	int com[3];
	int i;
	srand((int)time(NULL));
	while (1) {
		for (i = 0; i < 3; i++) {
			com[i] = rand() % 10;
		}
		if ((com[0] != com[1]) && (com[0] != com[2]) && (com[1] != com[2])) {
			break;
		}
	}
	HumanChoice(com);
	return 0;
}

void HumanChoice(int com[]) {
	int input;
	int hum[3];
	int i, j;
	int strike = 0, ball = 0, try_cnt = 0;
	while (1) {
		printf("3개의 숫자 선택 : ");
		scanf("%d", &input);
		hum[0] = input / 100;
		hum[1] = input / 10 % 10;
		hum[2] = input % 10;
		try_cnt++;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (com[i] == hum[j]) {
					if (i == j) {
						strike++;
					}
					else
					{
						ball++;
					}
				}
			}
		}
		if (strike == 3) {
			break;
		}
		else
		{
			printf("\t%d번째 도전 결과 : %d Strike, %d Ball!!\n", try_cnt, strike, ball);
			strike = 0;
			ball = 0;
		}
	}
	printf("\n%d번만에 성공\n\nYou Win!", try_cnt);
}
