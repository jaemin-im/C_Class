#include <stdio.h>

int file_2(void) {
	FILE* fp3 = fopen("out3.txt", "a");
	fprintf(fp3, "hello!\n");
	fclose(fp3);
	return 0;
}