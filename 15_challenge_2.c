#include <stdio.h>

void DecToBinary(int dec);

int main(void) {
	int input;

	printf("10진수 정수 입력 : ");
	scanf("%d", &input);
	
	DecToBinary(input);

	return 0;
}

void DecToBinary(int dec) {
	int binary[100];
	int cnt = 1, temp = dec;
	int i;
	while (1) {
		temp /= 2;
		cnt++;
		if (temp == 1 || temp == 0) {
			break;
		}
	}
	for (i = 0; i < cnt; i++) {
		binary[i] = dec % 2;
		dec /= 2;
	}
	for (i = cnt - 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
}