#include	<stdio.h>

int main(void) {
	int money;
	int a;	//크림빵 500	
	int b;	//새우깡 700
	int c;	//콜라 400

	printf("현재 당신이 소유하고 있는 금액 : ");
	scanf("%d", &money);

	if (money < 1600) {
		printf("잔액이 부족합니다.\n");
	}
	else{

		for (a = 500; a < money; a += 500) {
			for (b = 700; b < money; b += 700) {
				for (c = 400; c < money; c += 400) {
					if (money == a + b + c) {
						printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", a / 500, b / 700, c / 400);
						break;
					}
					else if(money<a+b+c)	{
						break;
					}
					else{
						continue;
					}
				}
			}
		}
	}
	return 0;
}