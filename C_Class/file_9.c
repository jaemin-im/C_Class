#include <stdio.h>

int file_9(void) {
	puts(" \n ** puts함수출력 ** ");
	puts("삶은 속도가 아니라 방향이다");
	puts("빌게이트,스티브잡스, 주커버거 모두 대학 중퇴자다");

	fputs(" \n *** fputs함수 출력 ***\n", stdout);
	fputs("삶은 속도가 아니라 방향이다 \n", stdout);
	fputs("\n 빌게이트,스지브잡스,주커버거 모두 대학 중퇴자다 \n", stdout);

	puts(" stdout은 표준출력을 의미합니다 ");
	puts(" fputs함수는 출력이름을 지정해야 해요 ");
	puts(" fputs함수는 자동 줄바꿈 안되요");
	puts("===================================");

	return 0;
}