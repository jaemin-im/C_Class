#include <stdio.h>

int saju(void) {
	int y, m, d, result;
	
	printf("당신의 사주를 봐드립니다.\n연도, 월, 일을 차례대로 입력하세요 : \n");
	scanf("%d %d %d", &y, &m, &d);
	result = (y - m + d) % 10;
	if (result == 0) printf("당신의 사주는 대박입니다.\n");
	else printf("당신의 사주는 그럭저럭입니다.\n");
	return 0;
}