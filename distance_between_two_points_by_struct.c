#include <stdio.h>
#include <math.h>

double Distance_1(struct position pos1, struct position pos2);
double Distance_2(struct position * pptr1, struct position * pptr2);

struct position
{
	int xpos;
	int ypos;
};

int main(void) {
	struct position pos1, pos2;
	struct position * pptr1 = &pos1;
	struct position * pptr2 = &pos2;

	fputs("ù��° ���� ��ǥ�� �Է��Ͻÿ� : ",stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	fputs("�ι�° ���� ��ǥ�� �Է��Ͻÿ� : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	//�Լ� ȣ�� 1
	printf("�� �������� �Ÿ��� : %f\n", Distance_1(pos1, pos2));
	//�Լ� ȣ�� 2
	printf("�� �������� �Ÿ��� : %f\n", Distance_2(pptr1, pptr2));
	return 0;
}

double Distance_1(struct position pos1, struct position pos2) {
	double d;
	d = sqrt(pow(pos1.xpos - pos2.xpos, 2) + pow(pos1.ypos - pos2.ypos, 2));
	return d;
}

double Distance_2(struct position * pptr1, struct position * pptr2) {
	double d;
	d = sqrt(pow((pptr1->xpos - pptr2->xpos), 2) + pow((pptr1->ypos - pptr2->ypos), 2));
	return d;
}