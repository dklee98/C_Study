#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char input[100];
	int i,j;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(input);
	for (i = 0; i < 98; i++) {
		if (!strncmp(input + i, "aaa", 3)) {
			for (j = 0; j < 3; j++) {
				input[i + j] = 'b';
			}
		}
	}
	fputs(input, stdout);
	return 0;
}