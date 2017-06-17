#include <stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54

unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH], B[HEIGHT][WIDTH];

int picture_2(void) {
	FILE *fp1 = fopen("1024x768.bmp", "rb");
	FILE *fp2 = fopen("1024x768_3.bmp", "wb");
	int i, j;

	for (i = 0; i < HEADER; i++) {
		putc(getc(fp1), fp2);
	}

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			putc((R[i][j] + G[i][j] + B[i][j]) / 3, fp2);
			putc((R[i][j] + G[i][j] + B[i][j]) / 3, fp2);
			putc((R[i][j] + G[i][j] + B[i][j]) / 3, fp2);
		}
	}
	return 0;
}