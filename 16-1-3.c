#include <stdio.h>

int main(void) {
	int grade[5][5] = { 0 };
	char student[5][10] = { "ö��", "ö��", "����", "����" };
	char subject[5][10] = { "����", "����", "����", "����" };
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%s�� %s ������ �Է��Ͻÿ� : ", student[i], subject[j]);
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