#include <stdio.h>

void CelToFah(float c);
void FahToCel(float f);

int main(void)
{
	float fah, cel;
	printf("ȭ���� �Է��Ͻÿ� : ");
	scanf("%f", &fah);
	FahToCel(fah);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%f", &cel);
	CelToFah(cel);
	return 0;
}

void CelToFah(float c) {
	printf("ȭ���� ��ȯ�� %f.F �Դϴ�.\n", 1.8f * c + 32.f);
}

void FahToCel(float f) {
	printf("������ ��ȯ�� %f.C �Դϴ�.\n", (f - 32.f) / 1.8f);
}