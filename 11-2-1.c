#include <stdio.h> 

int main()
{
	char arr[100];
	int len = 0;

	printf("���ܾ �Է��Ͻÿ� : ");
	scanf("%s", arr);
	
	while (arr[len] != 0) {
		len++;
	}
	printf("�� �ܾ��� ���̴� %d ", len);
	return 0;
}
