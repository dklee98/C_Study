#include <stdio.h>

int main(void) {
	char word[100];
	int len = 0;
	int i;
	int max = 0;
	
	printf("���ܾ �Է��Ͻÿ� : ");
	scanf("%s", word);
	while (word[len] != 0)	len++;

	for (i = 0; i < len; i++) {
		if (word[i] > max) {
			max = word[i];
		}
	}
	printf("�ƽ�Ű���� ���� ū ���ڴ� : %c", max);
	return 0;
}