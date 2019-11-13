#include <stdio.h>

int main(void)
{
	double d_num1, d_num2;

	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä ");
	scanf("%lf %lf", &d_num1, &d_num2);
	printf("µÎ ¼öÀÇ µ¡¼À : %f \n",d_num1 + d_num2);
	printf("µÎ ¼öÀÇ »¬¼À : %f \n", d_num1 - d_num2);
	printf("µÎ ¼öÀÇ °ö¼À : %f \n", d_num1 * d_num2);
	printf("µÎ ¼öÀÇ ³ª´°¼À : %f \n", d_num1 / d_num2);
	return 0;
}