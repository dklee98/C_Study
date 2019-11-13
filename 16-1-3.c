#include <stdio.h>

int main(void) {
	int grade[5][5] = { 0 };
	char student[5][10] = { "철희", "철수", "영희", "영수" };
	char subject[5][10] = { "국어", "영어", "수학", "국사" };
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%s의 %s 성적을 입력하시오 : ", student[i], subject[j]);
			scanf("%d", &grade[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			grade[i][4] += grade[i][j];
		}
	}
	for (j = 0; j < 5; j++) {
		for (i = 0; i < 4; i++) {
			grade[4][j] += grade[i][j];
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", grade[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}