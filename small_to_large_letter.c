#include <stdio.h>

int main(void) {
	int input[100];
	int i;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	for (i = 0; i < 100; i++) {
		input[i] = fgetc(stdin);
		if (input[i] >= 'a') {
			input[i] -= 'a' - 'A';
		}
		fputc(input[i], stdout);
	}
	return 0;
}