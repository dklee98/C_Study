#include <stdio.h>

int Change(int al);

int main(void) {
	int input;
	printf("���ڸ� �Է��Ͻÿ� : ");
	input = getchar();
	input = Change(input);
	if (input == -1) {
		puts("���ĺ��� �Է��ϼ���");
		return -1;
	}
	putchar(input);
	return 0;
}

int Change(int al) {
	int diff = 'a' - 'A';

	if (al >= 'A' && al <= 'Z') {
		return al + diff;
	}
	else if (al >= 'a' && al <= 'z') {
		return al - diff;
	}
	else
	{
		return -1;
	}
}