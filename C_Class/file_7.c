#include <stdio.h>
int file_7(void) {
	int i;
	char ch, ch2;
	FILE *in, *out;
	in = fopen("data.txt", "w");
	fputs("12345-", in);
	fclose(in);
	out = fopen("data.txt", "r");
	for (i = 0; i < 5; i++) {
		fseek(out, i, SEEK_SET);
		ch = fgetc(out);
		fseek(out, 5, SEEK_SET);
		ch2 = fgetc(out);
		printf("%c%c", ch, ch2);
	}
	fclose(out);
	return 0;
}