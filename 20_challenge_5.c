#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win_cnt, draw_cnt, lose;

int HumanChoice(void);
int ComChoice(void);
void WinLose(int hum, int com);

int main(void) {
	while (1) {
		WinLose(HumanChoice(), ComChoice());
		if (lose) {
			break;
		}
	}
	printf("\n게임의 결과 : %d승, %d무\n", win_cnt, draw_cnt);
	return 0;
}

int HumanChoice(void) {
	int choice;
	printf("당신의 선택은 ?(가위는 1, 바위는 2, 보는 3) : ");
	scanf("%d", &choice);
	return choice;
}

int ComChoice(void) {
	static int com_decision;
	srand((int)time(NULL));
	com_decision = rand() % 3;
	if (com_decision == 0)
		com_decision = 3;
	return com_decision;
}

void WinLose(int hum, int com) {

	if (hum == com) {
		if(hum == 1)
			printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
		if (hum == 2)
			printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
		if (hum == 3)
			printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
		draw_cnt++;
	}
	else if (hum < com) {
		if (hum == 1 && com == 2) {
			printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
			lose = 1;
		}
		else if (hum == 2 && com == 3) {
			printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
			lose = 1;
		}
		else{
			printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
			win_cnt++;
		}
	}
	else if (hum > com) {
		if (hum == 2 && com == 1) {
			printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
			win_cnt++;
		}
		else if (hum == 3 && com == 2) {
			printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
			win_cnt++;
		}
		else {
			printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
			lose = 1;
		}
	}
}