#include <stdio.h>

int sqr(int num) {
	if (num == 0) return 1;
	else return 3*sqr(num-1);
}

int selffunc_3(void) {
	int n;
	for (;;) {
		scanf("%d", &n);
		if (n > 0 && n <= 10) {
			printf("%d\n", sqr(n));
		}
		else printf("잘못된 입력입니다.\n");
	}
	return 0;
}