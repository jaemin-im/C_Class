#include <stdio.h>

int tunnel(void) {
	const int SUV = 170;
	int f, s, t;
	scanf("%d %d %d", &f, &s, &t);

	if (SUV >= f) printf("충돌 %d\n", f);
	else if (SUV >= s) printf("충돌 %d\n", s);
	else if (SUV >= t) printf("충돌 %d\n", t);
	else printf("무사 통과\n");

	return 0;
}