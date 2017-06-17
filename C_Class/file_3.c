#include <stdio.h>

int file_3(void) {
	FILE *fp;
	char ch;
	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("파일 개방 실패.\n");
		return 1;
	}
	while (1) {
		ch = fgetc(fp); // 개방한 파일로부터 한 문자를 입력한다.
		if (ch == EOF) break; // 리턴값이 -1(EOF)일 경우 반복을 종료한다.
		putchar(ch); // 읽어들인 문자를 화면에 출력한다.
	}
	fclose(fp);
	return 0;
}