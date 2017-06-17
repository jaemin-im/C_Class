#include <stdio.h>

int file_4(void) {
	int ch;
	FILE *in, *out;
	in = fopen("text.txt", "w");
	fputs("123456789", in);
	fclose(in);
	out = fopen("text.txt", "r");
	fseek(out, -2, SEEK_END);
	ch = fgetc(out);
	printf("%c", ch);
	fclose(out);
	return 0;
}