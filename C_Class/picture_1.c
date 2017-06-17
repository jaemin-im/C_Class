#include <stdio.h>

#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54

unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH], B[HEIGHT][WIDTH];

int picture_1(void) {
	FILE *fp1 = fopen("1024x768.bmp", "rb");
	FILE *fp2 = fopen("1024x768_2.bmp", "wb");
	int i, j;

	for (i = 0; i < HEADER; i++) {
		putc(getc(fp1), fp2);
	}

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			R[i][j] = getc(fp1);
			G[i][j] = getc(fp1);
			B[i][j] = getc(fp1);
		}
	}

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			putc(R[i][j], fp2);
			putc(G[i][j], fp2);
			putc(B[i][j], fp2);
		}
	}
	return 0;
}