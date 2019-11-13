#include	<stdio.h>

int main(void) {
	int num = 2;
	int i = 2;
	int cnt = 0;
	while (1) {
		if (num == i) {
			printf("%d ", num);
			cnt++;
			if (cnt == 10) {
				break;
			}
			num++;
			i = 2;
		}
		else if (num % i == 0) {
			num++;
			i = 2;
			continue;
		}
		else if (num % i != 0) {
			i++;
			continue;
		}
	}
	
	return 0;
}