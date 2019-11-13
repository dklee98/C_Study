#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MakeDice(void);

int main(void) {
	MakeDice();
	return 0;
}

void MakeDice(void) {
	int i;
	int dice1, dice2;
	srand((int)time(NULL));
	for (i = 0; i < 2; i++) {
		dice2 = rand() % 6;
		srand((int)time(NULL));
		dice1 = rand() % 6;
	}
	if (!dice1) {
		dice1 = 6;
	}
	if (!dice2) {
		dice2 = 6;
	}
	printf("주사위 1의 결과 : %d\n", dice1);
	printf("주사위 2의 결과 : %d\n", dice2);
}