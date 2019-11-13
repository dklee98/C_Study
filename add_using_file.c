#include <stdio.h>

int main(void) {
	int input1, input2;
	int output;

	FILE * fp1 = fopen("input.txt", "rt");
	FILE * fp2 = fopen("output.txt", "wt");

	fscanf(fp1, "%d", &input1);
	fscanf(fp1, "%d", &input2);
	fclose(fp1);

	output = input1 + input2;
	fprintf(fp2, "%d", output);
	fclose(fp2);
	return 0;
}