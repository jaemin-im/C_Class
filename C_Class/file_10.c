#include <stdio.h>

int file_10(void) {
	FILE* input = fopen("me.txt","w");
	fputs("학교 : 대덕소프트웨어마이스터고등학교\n반 : 1학년 3반\n번호 : 14번\n이름 : 임재민\n전화번호 : 010-4372-8848",input);
	fclose(input);
	return 0;
}