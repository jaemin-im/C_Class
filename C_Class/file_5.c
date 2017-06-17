#include <stdio.h>

int file_5(void) {
	char ch;
	FILE *input, *output;
	input = fopen("data.txt", "w");
	fputs("I LOVE YOU", input);
	fclose(input);
	output = fopen("data.txt", "r");
	fseek(output, 2, SEEK_SET);
	for (int i = 0; i < 4; i++) {
		ch = fgetc(output);
		printf("%c", ch);
	}
	printf("\n");
	fclose(output);
}