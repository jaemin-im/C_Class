#include <stdio.h>

int sum(int num) {
	if (num == 1) return 1;
	else return (num + sum(num - 1));
}

int selffunc_2(void) {
	int n;
	for (;;) {
		scanf("%d", &n);
		if (n > 0 && n <= 100) {
			printf("%d\n", sum(n));
		}
		else printf("다시 입력하십시오.\n");
	}
	return 0;
}