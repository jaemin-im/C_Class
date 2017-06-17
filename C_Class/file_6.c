#include <stdio.h>

int file_6(void) {
	long fpos;
	FILE *fp = fopen("text.txt", "w+");
	fputs("123456789", fp);
	fpos = ftell(fp);
	printf("%ld\n", fpos);
	fseek(fp, -2, SEEK_END);
	fpos = ftell(fp);
	printf("%ld\n", fpos);
	fclose(fp);
	return 0;
}