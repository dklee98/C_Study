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
	printf("\n������ ��� : %d��, %d��\n", win_cnt, draw_cnt);
	return 0;
}

int HumanChoice(void) {
	int choice;
	printf("����� ������ ?(������ 1, ������ 2, ���� 3) : ");
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
			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
		if (hum == 2)
			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
		if (hum == 3)
			printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
		draw_cnt++;
	}
	else if (hum < com) {
		if (hum == 1 && com == 2) {
			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
			lose = 1;
		}
		else if (hum == 2 && com == 3) {
			printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
			lose = 1;
		}
		else{
			printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�!\n");
			win_cnt++;
		}
	}
	else if (hum > com) {
		if (hum == 2 && com == 1) {
			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
			win_cnt++;
		}
		else if (hum == 3 && com == 2) {
			printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
			win_cnt++;
		}
		else {
			printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
			lose = 1;
		}
	}
}