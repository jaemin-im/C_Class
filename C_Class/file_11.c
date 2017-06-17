#include <stdio.h>

int file_11(void) {/*
	FILE* input = fopen("me.txt", "r");
	char ch = 0;
	while (ch != EOF) {
		ch = fgetc(input);
		printf("%c", ch);
	}
	fclose(input);*/
	char data[200];
	FILE *input = fopen("me.txt", "r");
	while (fgets(data, sizeof(data), input) != NULL) {
		printf("%s", data);
	}
	return 0;
}