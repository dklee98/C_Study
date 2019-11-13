#include <stdio.h>

void CelToFah(float c);
void FahToCel(float f);

int main(void)
{
	float fah, cel;
	printf("화씨를 입력하시오 : ");
	scanf("%f", &fah);
	FahToCel(fah);
	printf("섭씨를 입력하시오 : ");
	scanf("%f", &cel);
	CelToFah(cel);
	return 0;
}

void CelToFah(float c) {
	printf("화씨로 변환시 %f.F 입니다.\n", 1.8f * c + 32.f);
}

void FahToCel(float f) {
	printf("섭씨로 변환시 %f.C 입니다.\n", (f - 32.f) / 1.8f);
}