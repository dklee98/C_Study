#include	<stdio.h>

int main(void) {
	int money;
	int a;	//ũ���� 500	
	int b;	//����� 700
	int c;	//�ݶ� 400

	printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
	scanf("%d", &money);

	if (money < 1600) {
		printf("�ܾ��� �����մϴ�.\n");
	}
	else{

		for (a = 500; a < money; a += 500) {
			for (b = 700; b < money; b += 700) {
				for (c = 400; c < money; c += 400) {
					if (money == a + b + c) {
						printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", a / 500, b / 700, c / 400);
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