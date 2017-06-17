#include <stdio.h>

typedef struct data {
	char name[10];
	int math;
} DATA;

int file_13(void) {
	int i;
	DATA list[5];
	FILE *in = fopen("in.txt", "r");
	
	for (i = 0; i < 5; i++) {
		fscanf(in, "%s %d", list[i].name, &list[i].math);
	}
	fclose(in);
}